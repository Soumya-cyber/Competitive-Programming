#include <iostream>
using namespace std;

//Prime factorization of a number in O(sqrt(n)) time
void primeFact(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int cnt = 0;
            while(n%i==0){
                cnt++;
                n = n/i;
            }
            cout<<i<<"^"<<cnt<<endl;
        }
    }
    //when n is prime
    if(n!=1){
        cout<<n<<"^"<<1<<endl;
    }
}
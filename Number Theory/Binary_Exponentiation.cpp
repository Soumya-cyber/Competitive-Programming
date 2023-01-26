#include <iostream>
using namespace std;

//Binary Exponentiation
int power(int a, int n){
    int res = 1;
    while(n>0){
        //if n is odd then a^n = a*(a^2)^(n/2)
        if(n&1){
            res = res*a;
        }
        //if n is even then a^n = (a^2)^(n/2)
        a = a*a;
        n = n>>1;
    }
    return res;
}

int main()
{
    int a,n;
    cin>>a>>n;
    cout<<power(a,n);
    return 0;
}
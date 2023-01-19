#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
    cout << isPrime(7);
}

bool isPrime(int n){

    if(n==1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0) return false;
    }
    return true;
}
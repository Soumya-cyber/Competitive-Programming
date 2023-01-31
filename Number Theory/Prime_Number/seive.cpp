//Practice Problem link: https://www.spoj.com/problems/TDKPRIME/
/*https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/micro-and-prime-prime-1/*/

#include <iostream>
using namespace std;

void printPrimes(int n){

    int arr[n+1];
    for(int i=0;i<=n;i++){
        arr[i] = 1; // marking every number as potential prime numbers
    }
    arr[0] = 0; arr[1] = 0; // 0 and 1 are not prime numbers
    for(int i=2;i*i<=n;i++){//i*i<=n because all multiples of prime numbers after sqrt(n) are already marked as non-prime numbers 
        if(arr[i]==1){
            //j+=i because we want to mark all the multiples of i as non-prime numbers
            for(int j=i*i;j<=n;j+=i){ //j=i*i because all the multiples of i before i*i are already marked as non-prime numbers
                arr[j] = 0;
            }
        }
    }
    // printing all the prime numbers
    for(int i=2;i<=n;i++){
        if(arr[i]==1) {
            cout<< i << " ";
        }
    }
}

int main()
{
    int n;
    cin>>n;
    printPrimes(n);
    return 0;
}
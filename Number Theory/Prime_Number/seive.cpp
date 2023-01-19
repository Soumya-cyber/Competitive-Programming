#include <iostream>
using namespace std;

void printPrimes(int n){

    int arr[n+1];
    for(int i=0;i<=n;i++){
        arr[i] = 0; // marking every element as zero
    }
    // marking the non-prime elements in the array as 1, 
    //by visiting all the multiples of the prime elements

    // marking needs to be done only upto the square root of the element 

    for(int i=2;i*i<=n;i++){
        if(arr[i]==0){
            for(int j=i;j*i<=n;j++){
                arr[i*j] = 1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(arr[i]==0) {
            cout<< i << " ";
        }
    }
}

int main()
{
    int n = 50;
    // cout << "Hello";
    printPrimes(n);
    return 0;
}
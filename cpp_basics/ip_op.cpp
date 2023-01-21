// #include<iostream> // i/p o/p library
// #include<math.h> // math library
// #include<string> // string library

#include<bits/stdc++.h> // include all the libraries
using namespace std; // to remove 'std' from  cout and endl
int main(){

    // i/p and o/p
    int x;
    cout << "Enter the value of x: " << endl;
    cin >> x;
    cout << "Value of x is: "<< x << endl;

    cout << "Enter a line: "<< endl;
    string str;
    getline(cin,str);//cin alone will take only one string and not the rest of the line
    cout << str << endl;
    return 0;
}
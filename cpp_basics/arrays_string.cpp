#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    int a1[n]; // 1D array
    int a2[n][m]; // 2D Array

    string s = "Bidipto";
    int len = s.length(); // or len = s.size();

    cout << len <<" "<< s[0] << endl;
    s[0] = 'b';
    cout << len <<" "<< s[0] << endl;

    return 0;
}
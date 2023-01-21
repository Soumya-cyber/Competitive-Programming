#include<bits/stdc++.h>
using namespace std;


// pass by value
void printName(string s,int num){
    s[0] = 'Z';
    num += 9;
    cout << s << " " << num << endl;
}
// pass by reference
void printName2(string &s,int &num){
    s[0] = 'Z';
    num += 9;
    cout << s << " " << num << endl;
}

int main(){

    string s = "Bidipto";
    int num = 9;
    printName(s,num);
    cout << s << " " << num << endl;


    printName2(s,num);
    cout << s << " " << num << endl;


    return 0;
}
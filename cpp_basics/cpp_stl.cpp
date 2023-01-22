#include <bits/stdc++.h>
using namespace std;

void pairExplainer()
{
    pair<int, int> p = {1, 2};
    pair<int, char> p2;
    p2.first = 9;
    p2.second = 'B';

    pair<int, int> arr[] = {{1, 2}, {2, 4}, {5, 6}};

    cout << p.first << " " << p2.first << " " << arr[0].first << endl;
}

void vectorExplainer()
{

    vector<int> v;
    v.push_back(10);
    v.emplace_back(9); // same as push back but faster
   for(int i=9;i>=0;i--) v.push_back(i);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4); // emplace_back assumes that (3,4) is a pair

    vector<int> v1(5, 100); // a vector of size 5, with initial element 100
    // size of this type of vector is can be increased by push_back

    vector<int> v2(v1); // v2 is a copy of v1;

    // accessing the elements

    cout << v[0] << endl;
       
    for(vector<int>::iterator it = v.begin(); it!= v.end();it++){
        cout << *(it) << " ";
    }
    cout << endl;
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

     // v.begin() points to the starting location of the vector
     //*** v.end() points to the location where the vector has ended + 1 (next to last position)
      
    // for each loop

    for(auto it: v){
        cout << it << " ";
    }
    cout << endl;
    // size
    int n = v.size();

    // delete element
        // single, xth element from the start (0 based)
        int x = 1;
        v.erase(v.begin()+x);
        // range , 0-2
        v.erase(v.begin(),v.begin()+2);
    // insert at the first
    v.insert(v.begin(),300); // will insert 300 at the start
    v.insert(v.begin()+1,2,10); // will insert 2 10s from index 1 

    vector<int> copy = {2,50};
    v.insert(v.begin()+1,copy.begin(),copy.end()); // will insert copy in v at index 1

    for(auto it:v){
        cout << it << " ";
    }
    v.clear();
    cout << v.empty() << endl;
}    

int main()
{

    pairExplainer();
    vectorExplainer();
    return 0;
}
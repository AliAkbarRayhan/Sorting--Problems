#include<bits/stdc++.h>
using namespace std;
int main ( ){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr.push_back(k);
    }
    int s,e;
    cin>>s>>e;
    for(int i=0 ; i<(e-s)+1 ; i++){
        arr.erase(arr.begin() + s-1);
    }

    for (int i=0; i<arr.size();i++){
        cout << arr[i]<<" ";
    }
}

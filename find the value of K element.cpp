#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int b, int e, int target){
    int m = (b+e)/2;

    if(e-b<2){
        int count = 0;
        if(arr[b] == target){
            count++;
        }
        if(arr[e] == target && b!=e){
            count++;
        }
        return count;
    }
    else if(arr[m] > target){
        return binarySearch(arr,b,m-1, target);
    }
    else if(arr[m] < target){
        return binarySearch(arr, m+1, e, target);
    }
    else {
        return binarySearch(arr, b, m-1, target) + 1
            + binarySearch(arr, m+1, e, target);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    if(binarySearch(arr,0,arr.size(),target)>1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}


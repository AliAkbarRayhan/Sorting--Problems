
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<nums.size(); i++)
    {
        cin>>nums[i];
    }
    int visted=false;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]==nums[i-1])
        {
            visted=true;
            break;
        }
    }
if(visted){
    cout<<"true";
}
else{
    cout<<"false";
}
}



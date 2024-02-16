


#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Time complexity O(n+1+n+1)// 1 baad jabe
    // O(2n) 2 constant (c*n)// constant baad dile time complexity hobe O(n)
    int n;// O(1)
    cin>>n;
    vector<int>a(n);// n size er ekta vector nilam
    for(int i=0; i<n; i++) //O(n)
    {
        cin>>a[i];
    }

    int maxi=a[0];//O(1)
    int mini=a[0];
     int sum=0;
    for(int i=0; i<n; i++) //O(n)
    {
    maxi=max(maxi,a[i]);
    mini=min(mini,a[i]);
    sum=sum+a[i];

    }
    cout<<maxi<<"\n";//O(1)
    cout<<mini<<"\n";
    cout<<sum<<"\n";

    return 0;




}

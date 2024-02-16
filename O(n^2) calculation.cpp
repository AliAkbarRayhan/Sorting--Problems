



#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Time complexity
    //
    int n;// O(1)
    cin>>n;
    vector<int>a(n);// n size er ekta vector nilam
    for(int i=0; i<n; i++) //O(n)
    {
        cin>>a[i];
    }


    for(int i=0; i<n; i++) //O(n)
    {
       string ans="NO\n";
        for(int j=0; j<n; j++) //O(n)
        {
            if(i==j)
            continue;

            if(a[i]==a[j])
            {
                ans="Yes\n";
            }
        }
        cout<<"i= "<<i<<" "<<ans;
    }

    return 0;




}

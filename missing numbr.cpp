
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int >a(n);
for(int i=1;i<n;i++){
  cin>>a[i];
}
int total=0,sum=0;
    total = (n*(n+1))/2;
    for(int i=0 ; i<n; i++){
     sum = sum + a[i];
    }
int missing_num=total-sum;
cout<<missing_num<<"\n";

return 0;

}



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

    /* calculate sum of 10 numbers. */
    total = (n*(n+1))/2;

/* Sum of input array element. */
    for(int i=0 ; i<n; i++){
     sum = sum + a[i];
    }

cout<<total-sum<<"\n";

return 0;

}


#include <bits/stdc++.h>

using namespace std;

vector<int> even_generator(vector<int> &arr)
{
    vector<int>a;
for(int i=0;i<arr.size();i++){
a.push_back(i);
if(a%2==0){
    return a;
}
}
}



int main()
{

    vector<int> v = {10, 11, 12, 13, 14};

    vector<int> v2 = even_generator(v);
    for(auto a:v2)
        cout << a << " ";
    return 0;
}

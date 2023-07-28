#include<bits/stdc++.h>
using namespace std;
int main()
{

     vector<int> v={1,2,3,4,5};
    //  vector<int>::iterator it;
    //  cout<<v[v.size()-1];
    //last value dekha
    //  cout<<v.back();
    // first value dekha
    //  cout<<v[0];
    //  cout<<v.front();

    // for(auto it=v.begin();it<v.end();it++)
    for(auto it=v.begin()+2;it<v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
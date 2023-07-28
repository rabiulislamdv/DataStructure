#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v={1,2,3,4,5,6,2,3,5,2,3};
    // replace(v.begin(),v.end()-1,2,100);
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }
     
        vector<int> v={1,2,3,4,5,6,2,3,5,2,3};
    // vector<int>::iterator it;
   auto it= find(v.begin(),v.end(),3);
   if(it == v.end()) cout<<"Not Found";
    else cout<<"found";
 
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> n;
int t;
int n1;
int sizee;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>sizee;
}
    for(int j=0;j<sizee;j++)
    {
        cin>>n1;
        n.push_back(n1);
    }
    int target;
    cin>>target;
    int k;
    for (k=0;k<n.size();k++)
    {
        if (target==n[k])
        {
            cout<<"Present "<<k<<endl;
            break;
        }
    }
    if (k==n.size())
        cout<<"Not present "<<k<<endl;
}


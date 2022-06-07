#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;  //number of testcases
    int i=1; 
    while (i<=t)
    {
        int n;
        vector<int> v;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int n1;
            cin>>n1;
            v.push_back(n1);
        }
    int target;
    cin>>target;
    int l=0;
    int r=n-1;
    int mid;
    int count1=0;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if (target==v[mid])
        {
            count1=1;
            break;
        }
        else if (v[mid]>target)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if (count1)
    {
        cout<<target<<"-"<<count(v.begin(),v.end(),target);
    }
    else
    {
        cout<<"Key Not Present"<<endl;
    }
    i++;
    }
}
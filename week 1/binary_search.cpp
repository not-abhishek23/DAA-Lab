#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> n;
int t,n1,sizee;
cin>>t;
for(int i=0;i<t;i++)
{
    int sizee,n1;
    cin>>sizee;
    for (int j=0;j<sizee;j++)
    {
        cin>>n1;
        n.push_back(n1);
    }
    sort(n.begin(),n.end());
    int target;
    cin>>target;
    int l=0;
    int r=sizee-1;
    int counter=0;
    int mid=(r-l)/2;
    int flag=1;
    while(l<r)
    {
        if (n[mid]==target)
        {
            counter+=1;
            flag=-1;
            cout<<"Present "<<counter<<endl;
            break;
        }
        else if (n[mid]>target)
        {
            counter+=1;
            r=mid-1;
            mid=l+(r-l)/2;
        }
        else
        {
            counter+=1;
            l=mid+1;
            mid = l+(r-l)/2;
        }
    }
    if (flag==1)
        cout<<"Not present"<<counter<<endl;
}
}



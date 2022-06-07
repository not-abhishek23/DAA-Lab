#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector <int> nums;
        int n;
        cin>>n;
        int a1;
        for (int i=0;i<n;i++)
        {
            cin>>a1;
            nums.push_back(a1);
        }
        int j,key;
        int c=0,s=0;
        for (int i=1;i<nums.size();i++)
        {
            key = nums[i];
            j=i-1;
            while(j>=0 && nums[j]>key)
            {
                s+=1;
                nums[j+1]=nums[j];
                j--;
            }
            nums[j+1]=key;
            c+=1;
        }
        for (int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        cout<<"swapping"<<s<<endl;
        cout<<"comaprison"<<c<<endl;
    }
}
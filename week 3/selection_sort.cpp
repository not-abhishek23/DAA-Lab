#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int k=0;
    while (k<=t)
    {
        vector<int>nums;
        int n;
        cin>>n;
        int a1;
        for (int i=0;i<n;i++)
        {
            cin>>a1;
            nums.push_back(a1);
        }
        // 23 1 3 4 5 6 7 99 12 23 
        int size = nums.size();
        int comp=0;
        int swap=0;
        for (int i=0;i<size-1;i++)
        {
            int min=i;
            for (int j=i+1;j<size;j++)
            {
                if (nums[j]<nums[min])
                {
                    comp +=1;
                    min=j;
                }
            }
            swap+=1;
                int temp=0;
                temp = nums[i];
                nums[i] = nums[min];
                nums[min] = temp;
        }
        for (int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        cout<<"comaprison "<<swap<<endl;
        cout<<"swapped "<<comp<<endl;
        k++;
    }
}
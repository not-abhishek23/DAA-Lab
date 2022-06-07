#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> num;
        for(int i=0; i<n; i++)
        {
             int x;
             cin>>x;
             num.push_back(x);
        }
         int k=0;
         int l=0,r=0;
         int flag = 1;
         for( k=n-1;k>1;k--){
              l=0;
              r=k-1;
              while(l < r){
                   if(num[l] + num[r] == num[k]){
                        cout<<l<<" "<<r<<" "<<k<<endl;
                        flag = 0;
                        break;
                   }
                   if(num[l] + num[r] > num[k])
                        r--;
                   else
                        l++;
              }
         }
         if(flag)
              cout<<"No sequence found\n";
    }
     return 0;
}
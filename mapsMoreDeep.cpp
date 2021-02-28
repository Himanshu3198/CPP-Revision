#include<bits/stdc++.h>
#include<map>
#define E endl
#define ll long long int 
using namespace std;
int main(){

     int a[]={1,2,3,3,43,3,5,3,5};
     ll n=sizeof(a)/sizeof(a[0]);
      map<int,int>m;
     for(int i=0;i<n;i++)
     {
         m[a[i]]++;

     }
     for(auto v:m){
         cout<<v.first<<" "<<v.second<<E;
     }
     
     for(int i=0;i<n;i++)
     {
    
               m[5]+1;
         
       

     }
     for(auto v:m){
         cout<<v.first<<" "<<v.second<<E;
     }
     cout<<m[1]--<<E;
      cout<<m[2]--<<E;
       cout<<m[3]+1<<E;
     


} 
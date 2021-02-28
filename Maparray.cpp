#include<bits/stdc++.h>
#include<map>
#define E endl
using namespace std;
int main(){
	
	
          int a[5]={1,2,3,4,15},i;
          int b[5]={3,9,12,15,18};
          int c[5]={4,12,15,18,20};
          map<int,int> m,m1,m2;
          for(i=0;i<5;i++)
          {
//          	b[a[i]]++;
                 m[a[i]]++;
		  }
		  for(i=0;i<5;i++)
		  {
//		  	cout<<b[i]<<" ";
//		  	cout<<a[i]<<" ";
		  }
		  map<int,int>::iterator itr;
//		  for(itr=m.begin();itr!=m.end();itr++)
//		  {
//		  	cout<<itr->first<<" "<<itr->second<<E;
//		  }
		  for(i=0;i<5;i++)
		  {
		  	m[b[i]]++;
		  }
//		   for(itr=m.begin();itr!=m.end();itr++)
//		  {
//		  	cout<<itr->first<<" "<<itr->second<<E;
//		  }
		   for(i=0;i<5;i++)
		  {
		  	m[c[i]]++;
		  }
		   for(auto it:m)
		  {
		  	cout<<it.first<<" "<<it.second<<E;
		  }
          for(auto u:m)
          {
            //   cout<<u.first<<" this is second"<<u.second<<E;
             m1[u.first]=u.second/2;
          }
          cout<<"this is m1\n";
             for(auto v:m1)
          {
              cout<<v.first<<"  "<<v.second<<E;
          }
          m2=m1;
          cout<<"this is m2\n ";
             for(auto v:m2)
          {
              cout<<v.first<<"  "<<v.second<<E;
          }
          


		  
		  
		  
}
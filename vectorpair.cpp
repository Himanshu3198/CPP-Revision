#include <bits/stdc++.h>
using namespace std;

int main()
{
    //     int n,m;
    //    cin >> n>>m;
    // 	vector<pair<int,int> > g;
    //      int a,b,wt;
    //     for(int i=0;i<m;i++){
    //         cin>>a>>b>>wt;
    //         // g[a].push_back(make_pair(b,wt));
    //         // g[b].push_back(make_pair(a,wt));
    //         g.push_back(make_pair(a,b));

    //     }
    //    vector<pair<int,int> >::iterator it;
    //    cout<<"you have entered this pair";
    //     // for(it=g[2].begin();it!=g[2].end();it++){
    //     //     int start =it->first;
    //     //     int end=it->second;
    //     //     int weight=it.second.first;
    //     //     // weight=weight->first;

    //     //     cout<<start<<" "<<end<<"\n";
    //     // }
    //     int x,y,z;
    //     int capacity=g.size();
    //     for(int i=0;i<capacity;i++)
    //     {
    //         cout<<g[i].first<<" "<<g[i].second<<"\n";
    //     }

    vector<pair<int, pair<int, int>>> myvec;
       myvec.push_back(make_pair(2, make_pair(31, 102))); 
          myvec.push_back(make_pair(2, make_pair(31, 102))); 
             myvec.push_back(make_pair(2, make_pair(31, 102))); 
             int s=myvec.size();

             for(int i=0;i<s;i++){
                 cout<<myvec[i].first<<","<<myvec[i].second.first<<","<<myvec[i].second.second<<"\n";
             }

             

}
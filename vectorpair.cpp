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

//     vector<pair<int, pair<int, int>>> myvec;
//        myvec.push_back(make_pair(2, make_pair(31, 102))); 
//           myvec.push_back(make_pair(2, make_pair(31, 102))); 
//              myvec.push_back(make_pair(2, make_pair(31, 102))); 
//              int s=myvec.size();

//              for(int i=0;i<s;i++){
//                  cout<<myvec[i].first<<","<<myvec[i].second.first<<","<<myvec[i].second.second<<"\n";
//              }

    
    
         //four parameter vector pair
               vector<pair< pair<int ,int>,pair<string,int>>> myvec;
     myvec.push_back(make_pair(make_pair(0,1), make_pair("abc",1)));
         myvec.push_back(make_pair(make_pair(2,1), make_pair("bbc",2)));
             myvec.push_back(make_pair(make_pair(3,1), make_pair("adc",3)));
                 myvec.push_back(make_pair(make_pair(4,6), make_pair("abd",5)));
    //   myvec.push_back(make_pair(3,make_pair(1,1)));
    //    myvec.push_back(make_pair(2,make_pair(3,2)));
    //    myvec.push_back(make_pair(1,make_pair(2,3)));


    for(int i=0;i<myvec.size();i++){

      cout<<myvec[i].first.first<<" "<<myvec[i].first.second<<" "<<myvec[i].second.first<<" "<<myvec[i].second.second<<" \n";
    }
    

      pair<pair<int,int>,pair<string,int>> p[5];


      for(int i=0;i<5;i++){

            int a,b,c;
            string str;
            cin>>a>>b;
            cin>>str;
            cin>>c;


            p[i].first.first=a;
            p[i].first.second=b;
            p[i].second.first=str;
            p[i].second.second=c;
        
      }


      for(int i=0;i<5;i++){
     cout<<p[i].first.first<<" "<< p[i].first.second<< " "<<p[i].second.first<<" "<<p[i].second.second<<"\n";

      }
     


}

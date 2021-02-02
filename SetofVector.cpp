#include<bits/stdc++.h>
using namespace std;



   void print_vector(vector<int>vec){
       for(int i=0;i<vec.size();i++){
           cout<<vec[i]<<" ";
       }

       cout<<"\n";
   }

int main(){



    vector<int> data1{10, 20, 30, 40};
    vector<int> data2{5, 10, 15};
      vector<int> data3{1, 3, 5, 7, 9, 11, 13 };
    vector<int> data4{5, 10, 15};
      vector<int> data5{10, 20, 30, 4,50};

      set<vector<int>>set_contain_vectors;
      set_contain_vectors.insert(data1);
            set_contain_vectors.insert(data1);

      set_contain_vectors.emplace(data2);

      set_contain_vectors.emplace(data3);

      set_contain_vectors.emplace(data4);

      set_contain_vectors.emplace(data5);

      cout<<"set of vectors are \n";

      for(auto it=set_contain_vectors.begin();it!=set_contain_vectors.end();it++){
          print_vector(*it);
      }

     return 0;

    
}
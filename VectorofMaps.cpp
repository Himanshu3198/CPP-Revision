#include<bits/stdc++.h>
using namespace std;

 void findOcc(string s){

     vector<map<char,int>>mp(s.length());

     for(int i=0;i<s.length();i++){

         for(int j=0;j<=i;j++){

             mp[i][s[j]]++;
         }
     }

     for(int i=0;i<s.length();i++){
             cout << "Frequency upto "
             << "position " << i + 1
             << endl;
 
        // Traverse the map
        for (auto x : mp[i])
            cout << x.first << "-"
                 << x.second << endl;
    }
 }
 

 int main(){

    string s="geeks";

    findOcc(s);
    return 0;
}
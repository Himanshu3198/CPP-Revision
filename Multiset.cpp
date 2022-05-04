/* multiset can contains duplicates
-implemeted using balanced bst
-element stored in sorted order
 
*/
#include<bits/stdc++.h>
#define E endl
using namespace std;

int main(){

    multiset<int>s;
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(6);
   

    for(auto it:s){
        cout<<it<<" "; 
    }
    cout<<"\n";

    // s.erase(3);
    //  s.erase(s.find(3));
    //  lower_bound
    cout<<*s.lower_bound(3)<<"\n";
    cout<<*s.upper_bound(3)<<"\n";
    cout<<*s.rbegin()<<E;
    cout<<*s.begin()<<E;
    cout<<*s.end()<<E;

    // for(auto it:s){
    //     cout<<it<<" "; 
    // }
    cout<<"\n";

}
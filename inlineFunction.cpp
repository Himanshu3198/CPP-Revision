/* Inline funcion :
  the compiler places copy of body of inline function at everywhere 
  where the function is called at compile time. 
   Advantage
  -> It reduce the execution time of calling a function
   Disadvantage
   ->It cannot be suitable for recursive function or function with
   loops
    */
#include<bits/stdc++.h>
using namespace std;


inline int add(int a,int b){

    return (a+b);
}
int main(){

    int x=10,y=20;
    cout<<add(x,y)<<"\n";
    return 0;

}
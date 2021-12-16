#include<bits/stdc++.h>
using namespace std;


  
    //  4.......... type 4

  auto modify=[](auto &nums){

           for(int i=0;i<nums.size();i++){

               nums[i]=nums[i]*10;
           }
       };
int main(void){

    //  1.......... type 1
     // lambda expression without parameters
    auto print=[](){

        cout<<"hello world"<<"\n";
    };

    // print();
    // print();

//   2.......... type 2
    int x=5,y=15;
      
     auto multiply=[&](){
         cout<<x*y<<"\n";
     };

    //  multiply();
    //  multiply();

//   3.......... type 3

   auto square=[&](int x,int y){
    //   cout<<x*y<<"\n";
        return x*y;
   };

    //  cout<<square(5,5)<<"\n";
      
       vector<int>nums{1,3,2,5,6,4};

          modify(nums);
  
     
    return 0;


}
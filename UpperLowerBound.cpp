#include<bits/stdc++.h>
#define E "\n"
using namespace std;

int main(){

     vector<int> nums{5, 6, 7, 7, 6, 5, 5,7,8,9};
     sort(nums.begin(),nums.end());


     for(auto it:nums){
         cout<<it<< " ";
     }
     cout<<E;
          /* lower bound always return index of given key if it is present else
            else it return next element position */
        int val1=lower_bound(nums.begin(),nums.end(),6)-nums.begin();
        int val2=lower_bound(nums.begin(),nums.end(),4)-nums.begin();
                 /*upper bound  always return the first greater element position of a key */
        int val3=upper_bound(nums.begin(),nums.end(),4)-nums.begin();


        
    //  cout<<nums[val]<<E<<nums[val2]<<E;
    cout<<val1<<" "<<val2<<" "<<val3<<E;

    // Q1: find last ooccurence of x=5

       vector<int>arr{1,2,3,4,5,5,5,6,7};
           int x=5;
       int ans=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
       cout<<"last occurene of x at position is "<<(--ans)<<E;

    //  Q2 find first greater element than x 
      
       int gre=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        cout<<"first greater than x is "<<arr[gre]<<E;


    // Q3 check weather given element present array or not?

    int ispresent=lower_bound(arr.begin(),arr.end(),x)-arr.begin();

    if(arr[ispresent]==x){
      puts("YES x present in array");
    }else{

      puts("NO");
    }

     return 0;
}
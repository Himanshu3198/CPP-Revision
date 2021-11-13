#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>mylist;


    for(int i=1;i<5;i++){

        mylist.push_back(i*5);
    }

    // push back item in list
    mylist.push_back(25);
    mylist.push_back(30);
    //  push front item in list 
    mylist.push_front(-5);
    mylist.push_front(-10);
    mylist.push_front(-15);
    mylist.push_front(-20);

    // pop back item from list
        mylist.pop_back();
        mylist.pop_back();

    // pop front from list 
     mylist.pop_front();
     mylist.pop_front();
      
    //   additional function
      mylist.reverse();
      mylist.sort();

      int front=mylist.front();
      int back=mylist.back();

      cout<<"\n"<<front<<" "<<back<<"\n";


    list<int>::iterator it;

    for(it=mylist.begin();it!=mylist.end();it++){

        cout<<*it<<" ";
    }

    cout<<"\n";
}
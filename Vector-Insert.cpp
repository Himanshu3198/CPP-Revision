// program below illustrates the
// vector::insert() function

#include <bits/stdc++.h>
using namespace std;

int main()
{
	// initialising the vector
	vector<int> vec = { 10, 20, 30, 40 };

	// inserts 3 one time at front
	// auto it = vec.insert(vec.begin(), 2, 3);

	// // inserts 4 two times at front
	// vec.insert(it, 2, 4);

      // insert at  particular position
    // vec.insert(vec.begin()+0,5);
    //   vec.insert(vec.begin()+0,15);
    //     vec.insert(vec.end()+0,25);

	// cout << "The vector elements are: ";
	// for (auto it = vec.begin(); it != vec.end(); ++it)
	// 	cout << *it << " ";

    vector<int>res;

    for(int i=0;i<vec.size();i++){
        res.insert(res.begin()+i,vec[i]);
    }

    for(auto it:res) cout<<it<<" ";

	return 0;
}

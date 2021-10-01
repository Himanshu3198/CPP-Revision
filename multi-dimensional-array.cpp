/* 3d array representation
        x[2][3][2] ={ { {0,1}, {2,3}, {4,5} },
        { {6,7}, {8,9}, {10,11} }}
            
            
                         0 1
          0th array - 0 [0,1]   
                      1 [2,3]
                      2 [4,5]

                         0 1
         1th array    0 [6,7]
                      1 [8,9]
                      2 [10,11]
                       
                       
*/

#include<bits/stdc++.h>
#include<map>
#define E endl
using namespace std;
int main(){
   
    int x[2][3][2] =
    {
        { {0,1}, {2,3}, {4,5} },
        { {6,7}, {8,9}, {10,11} }
    };
  
    // output each element's value
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                cout << "Element at x[" << i << "][" << j
                     << "][" << k << "] = " << x[i][j][k]
                     << endl;
            }
        }
    }
    return 0;
    
}
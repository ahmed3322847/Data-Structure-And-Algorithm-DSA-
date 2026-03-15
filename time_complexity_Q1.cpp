#include <iostream>
using namespace std;

int main()
{
    int n = 10;                  // takes 1
    for(int i = 0; i < n; i++) // it will takes n+1 because condition will check n+1 time
    {
        for(int j = 0; j < n; j++)// it will take n(n+1) because first it will rum n time foe first for loop then run n+1 time for its ownself
        {
            cout << i << " " << j << endl;// it will takes n square becasue it will run for 2 loops
        }
    }
}// so the time complexity will be order of n square
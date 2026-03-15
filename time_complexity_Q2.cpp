#include <iostream>
using namespace std;

int main()
{
    int n = 10;                 // 1 because every single statement takes 1 unit of time
    for (int i = 0; i < n; i++) // i = 0  takes 1 , i<n  will takes n+1 because it checks the condition n+1 time , i++ will run n time
    {
        cout << i << endl; // cout condition will also run n time
    }
} // so it will takes order of n times 
// Tower of hanoi
#include <iostream>
using namespace std;
void TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        cout << "From " << A<<" " << "To " << C << endl;
        TOH(n - 1, B, A, C);
    }
}
int main()
{
    int x = 3;
    int i = 1;
    int j = 2;
    int k = 3;
    TOH(x, i, j, k);
    return 0;
}
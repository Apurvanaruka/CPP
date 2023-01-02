#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 0, 9, 11, 22};
    for (int col = 0; col < 3; col++)
    {
        for (int row = 0; row < 4; row++)
        {
            cout << arr[col][row] << " ";
        }
        cout << endl;
    }
    return 0;
}
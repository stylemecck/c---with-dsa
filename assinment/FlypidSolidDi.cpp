#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        cout << endl;
    }
    
    for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n - row; col++)
            {
                cout << "  ";
            }
            for (int col = 0; col < 2 * row + 1; col++)
            {
                cout << "- ";
            }
            cout << endl;
        }
}
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row=0; row<n; row++)
    {
        cout<<row+1;
        for(int col=0; col<=row; col++)
        {
            cout<<"*"<<row+1;
        }
        cout<<endl;
    }
}
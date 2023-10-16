//Sum of even number upto 1-n
#include<iostream>
using namespace std;
void SumEven(int num)
{
    int sum;
    for(int i=1; i<=num%2==0; i++)
    {
          sum=num*(num+1)/2;
    }
    cout<<sum<<endl;
}
int main()
{
    int term;
    cin>>term;
    SumEven(term);
}
//Sum of even number upto 1-n
#include<iostream>
using namespace std;
void SumEven(int num)
{
    int sum;
    for(int i=2; i<=num; i=i+2)
    {
          sum+=i;
    }
    cout<<sum<<endl;
}
int main()
{
    int term;
    cin>>term;
    SumEven(term);
}
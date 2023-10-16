//Sum of no upto 1 to N
#include<iostream>
using namespace std;
void Sum1toN(int num)
{
    int sum;
    for(int i=1; i<=num; i++)
    {
      sum = num*(num+1)/2;
    }
     cout<<sum<<endl;
}
int main()
{
    int term;
    cin>>term;
    Sum1toN(term);
}
#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;

  for(int row= 0 ; row<n;row++){
    cout<<row+1;
    for(int i = 0; i<=row-1; i++){
      cout<<"*"<<row+1;
    }
    cout<<endl;
  }
}

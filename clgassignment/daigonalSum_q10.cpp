// C++ program to show the sum of main diagonal elements by using nested for loop
#include<iostream>
using namespace std;

int SumMainDiagonal(int matrix[][100], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (i == j){
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int main(){
    int n; 
    cout<<"Enter the size of square matrix: ";
    cin>>n;

    int matrix [100][100];
    cout<<"Enter the elements of the matrix: " <<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }

    int sum = SumMainDiagonal(matrix, n);
    cout<<"The sum of main diagonal elements is: "<<sum << endl;
}
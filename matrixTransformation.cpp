#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"Enter Matrix : "<<endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[i][j+1];
            arr[i][j+1] = temp;
        }
        for(int k = 0; k<1; k++){
            int temp = arr[i][k];
            arr[i][k] = arr[i][k+1];
            arr[i][k+1] = temp;
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int col = 2;
    int row = 0;
    for(int i = 0; i<3; i++){
        for(int j = col; j>=0; j--){
            int temp = arr[i][j];
            arr[i][j] = arr[row][col];
            arr[row][col] = temp;
            row++;
        }
        col--;
        row = i+1;
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
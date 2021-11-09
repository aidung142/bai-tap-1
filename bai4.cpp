#include <iostream>
using namespace std;
  
int main(){
    int rows, cols, i, j;
    int one[50][50], two[50][50], sum[50][50];
     
    cout <<"Nhap hang va cot ma tran\n";
    cin >> rows >> cols;
      
    cout <<"Nhap kich thuoc ma tran dau "<<rows<<" X "<<cols;
    
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cin >> one[i][j];
        }
    }
 
    cout <<"\nNhap kich thuoc ma tran 2 "<<rows<<" X "<<cols;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cin >> two[i][j];
        }
    }
   
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            sum[i][j] = one[i][j] + two[i][j];
        }
    }
      
    cout <<"Tong 2 ma tran\n";
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }
 
    return 0;
}

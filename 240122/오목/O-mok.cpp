#include <iostream>
using namespace std;


int arr[19][19];


void checkWin(){  //가로 
    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 15; j++){
            if(arr[i][j] == 1 && arr[i][j+1] == 1 && arr[i][j+2] == 1  && arr[i][j+3] == 1  && arr[i][j+4] == 1){
                cout << 1 << "\n" << i+1 << " " << j+3;
                return;
            }
            else if(arr[i][j] == 2 && arr[i][j+1] == 2 && arr[i][j+2] == 2  && arr[i][j+3] == 2  && arr[i][j+4] == 2){
                cout << 2 << "\n" << i+1 << " " << j+3;
                return;
            }
        }
        
    }

    for(int i = 0; i < 15; i++){ // 세로
        for(int j = 0; j < 19; j++){
            if(arr[i][j] == 1 && arr[i+1][j] == 1 && arr[i+2][j] == 1  && arr[i+3][j] == 1  && arr[i+4][j] == 1){
                cout << 1 << "\n" << i+3 << " " << j +1;
                return;
            }
            else if(arr[i][j] == 2 && arr[i+1][j] == 2 && arr[i+2][j] == 2  && arr[i+3][j] == 2  && arr[i+4][j] == 2){
                cout << 2 << "\n" << i+3 << " " << j + 1;
                return;
            }
        }
    }


    for(int i = 0; i < 15; i++){ // 왼쪽 대각선
        for(int j = 4; j < 19; j++){
            if(arr[i][j] == 1 && arr[i+1][j-1] == 1 && arr[i+2][j-2] == 1  && arr[i+3][j-3] == 1  && arr[i+4][j-4] == 1){
                cout << 1 << "\n" << i+3 << " " << j-1;
                return;
            }
            else if(arr[i][j] == 2 && arr[i+1][j-1] == 2 && arr[i+2][j-2] == 2  && arr[i+3][j-3] == 2  && arr[i+4][j-4] == 2){
                cout << 2 << "\n" << i+3 << " " << j-1;
                return;
            }
        }
    }


    for(int i = 0; i < 15; i++){ // 오른쪽 대각선
        for(int j = 0; j < 15; j++){
            if(arr[i][j] == 1 && arr[i+1][j+1] == 1 && arr[i+2][j+2] == 1  && arr[i+3][j+3] == 1  && arr[i+4][j+4] == 1){
                cout << 1 << "\n" << i+3 << " " << j+3;
                return;
            }
            else if(arr[i][j] == 2 && arr[i+1][j+1] == 2 && arr[i+2][j+2] == 2  && arr[i+3][j+3] == 2  && arr[i+4][j+4] == 2){
                cout << 2 << "\n" << i+3 << " " << j+3;
                return;
            }
        }
    }

    cout << 0;
}


int main() {
    
    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            cin >> arr[i][j];
        }
    }

    checkWin();


    return 0;
}
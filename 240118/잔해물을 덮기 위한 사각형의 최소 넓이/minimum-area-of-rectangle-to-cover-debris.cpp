#include <iostream>
using namespace std;

int arr[2001][2001];

int main() {
    int a,b,c,d;
    int q,w,e,r;
    cin >> a >> b >> c >> d;
    for(int j = a; j < c; j++){
        for(int k = b; k < d; k++){
            arr[j+1000][k+1000] = 1;
        }
    }


    cin >> q >> w >> e >> r;
    for(int j = q; j < e; j++){
        for(int k = w; k < r; k++){
            if(arr[j+1000][k+1000] == 1){
                arr[j+1000][k+1000] = 0;
            }
        }
    }
    int maxrowSum = 0;
    int maxcolSum = 0;
    for(int i = 0; i < 2001; i++){
        int rowSum = 0;
        for(int j = 0; j < 2001; j++){
            rowSum += arr[i][j];
        }
        if(rowSum > maxrowSum){
            maxrowSum = rowSum;
        }

    }

    for(int i = 0; i < 2001; i++){
        int colSum = 0;
        for(int j = 0; j < 2001; j++){
            colSum += arr[j][i];
        }
        if(colSum > maxcolSum){
            maxcolSum = colSum;
        }

    }



    cout << maxcolSum * maxrowSum;

    return 0;
}
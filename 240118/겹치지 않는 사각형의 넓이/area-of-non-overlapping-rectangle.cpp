#include <iostream>
using namespace std;


int arr[2001][2001];

int main() {

    for(int i = 0; i < 2; i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = x1; j < x2; j++){
            for(int k = y1; k < y2; k++){
                arr[j+1000][k+1000] = 1;
            }
        }
    }
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    for(int j = x1; j < x2; j++){
        for(int k = y1; k < y2; k++){
            arr[j+1000][k+1000] = 0;
        }
    }
            


    int sum = 0;
    for(int i = 0; i < 2001; i++){
        for(int j = 0; j < 2001; j++){
            sum += arr[i][j];
        }

    }

    cout << sum;



    return 0;
}
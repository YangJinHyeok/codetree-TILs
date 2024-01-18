#include <iostream>
using namespace std;


int arr[201][201];

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = x1; j < x2; j++){
            for(int k = y1; k < y2; k++){
                arr[j+100][k+100] = 1;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < 201; i++){
        for(int j = 0; j < 201; j++){
            sum += arr[i][j];
        }

    }

    cout << sum;



    return 0;
}
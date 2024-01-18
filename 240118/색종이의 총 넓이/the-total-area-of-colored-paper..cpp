#include <iostream>
using namespace std;

int arr[201][201];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        for(int j = a; j < a+8; j++){
            for(int k = b; k < b + 8; k++){
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
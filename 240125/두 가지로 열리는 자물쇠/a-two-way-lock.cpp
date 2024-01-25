#include <iostream>
using namespace std;

int arr[3];
int arr2[3];
int n;

int main() {
    
    cin >> n;

    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < 3; i++){
        cin >> arr2[i];
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                if((abs(arr[0] - i) <= 2 || abs(arr[0] - i) >= n - 2) && (abs(arr[1] - j) <= 2 || abs(arr[1] - j) >= n - 2) && (abs(arr[2] - k) <= 2 || abs(arr[2] - k) >= n - 2)){
                    cnt++;
                }
                else if((abs(arr2[0] - i) <= 2 || abs(arr2[0] - i) >= n - 2) && (abs(arr2[1] - j) <= 2 || abs(arr2[1] - j) >= n - 2) && (abs(arr2[2] - k) <= 2 || abs(arr2[2] - k) >= n - 2)){
                    cnt++;
                }
            }
        }
    }


    cout << cnt;

    return 0;
}
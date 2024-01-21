#include <iostream>
using namespace std;

#define MAX_NUM 100

char arr[MAX_NUM];


int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                if(arr[i] == 'C' && arr[j] == 'O' && arr[k] == 'W'){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}
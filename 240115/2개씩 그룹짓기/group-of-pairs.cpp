#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int m = n * 2;
    int arr[m];
    for(int i = 0; i < m; i++){
        cin >> arr[i];
    }

    sort(arr, arr + m);
    int max;
    for(int i = 0; i < n; i++){
        if(arr[i] + arr[m - i - 1] > max){
            max = arr[i] + arr[m - i - 1];
        }
    }

    cout << max;
    return 0;
}
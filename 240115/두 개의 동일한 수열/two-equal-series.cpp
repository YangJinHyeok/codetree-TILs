#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[n];
    int arr1[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    sort(arr, arr+n);
    sort(arr1, arr1+n);

    for(int i = 0; i < n; i++){
        if(arr[i] != arr1[i]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int arr[a];
    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }
    sort(arr, arr+a);
    cout << arr[b-1];
    return 0;
}
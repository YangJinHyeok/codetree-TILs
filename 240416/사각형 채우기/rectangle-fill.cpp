#include <iostream>
using namespace std;
#define MAX 1001

int arr[MAX];


int main() {
    
    int n;
    cin >> n;

    arr[0] = 1;
    arr[1] = 1;

    for(int i = 2; i <= n; i++){
        arr[i] = (arr[i-1] + arr[i-2]) % 10007;
    }

    cout << arr[n];

    return 0;
}
#include <iostream>
using namespace std;
#define MAX 1000
#define LOL 1000000007

long long arr[MAX + 1];


int main() {
    
    int n;
    cin >> n;

    arr[0] = 1;
    arr[1] = 2;

    for(int i = 2; i <= n; i++) {
        arr[i] = (arr[i - 1] * 2 + arr[i - 2] * 3) % LOL;
        for(int j = i - 3; j >= 0; j--)
            arr[i] = (arr[i] + arr[j] * 2) % LOL;
    }

    cout << arr[n];

    return 0;
}
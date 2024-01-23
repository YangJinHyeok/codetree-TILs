#include <iostream>
using namespace std;

int arr[101];


int main() {
    
    int n,k;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        arr[b] += a;
    }
    int max_sum = 0;
    for(int i = k; i < 101-k; i++){
        int sum = 0;
        for(int j = i-k; j <= i+k; j++){
            sum += arr[j];
        }

        max_sum = max(max_sum, sum);
    }

    cout << max_sum;

    return 0;
}
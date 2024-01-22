#include <iostream>
#include <algorithm>
using namespace std;

char arr[10001];

int main() {
    
    int n,k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int a;
        char b;
        cin >> a >> b;
        arr[a] = b;
    }
    int max_sum = 0;
    for(int i = 1; i <= 10001 - k + 1; i++){
        int sum = 0;
        for(int j = i; j <= i + k; j++){
            if(arr[j] == 'G'){
                sum += 1;
            }
            else if(arr[j] == 'H'){
                sum += 2;
            }
        }

        max_sum = max(max_sum, sum);
    }

    cout << max_sum;

    return 0;
}
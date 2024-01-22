#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int arr[100];


int main() {
    
    int n,s;
    cin >> n >> s;
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    int min_diff = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int cnt = sum;
            cnt -= arr[i] + arr[j];
            int diff = abs(cnt - s);
            min_diff = min(min_diff, diff);
        }
    }

    cout << min_diff;

    
    return 0;
}
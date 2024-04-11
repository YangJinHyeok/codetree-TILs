#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;
#define MAX 100000

int arr[MAX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;
    cin >> n >> s;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MAX;
    int sum_val = 0;
    int j = 0;
    for (int i = 0; i < n; i++) {
        while (j + 1 <= n) {
            if (sum_val >= s) {
                break;
            }
            sum_val += arr[j + 1];
            j++;
        }

        
        ans = min(ans, j - i + 1);
        
        sum_val -= arr[i];
    }


    cout << ans;
    return 0;
}
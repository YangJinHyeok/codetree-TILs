#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i].first;
        arr[i].second = i;
    }

    sort(arr.begin(), arr.end());

    vector<int> ans(N);
    for(int i = 0; i < N; i++) {
        ans[arr[i].second] = i+1;
    }

    for(int i = 0; i < N; i++) {
        cout << ans[i] << ' ';
    }

    return 0;
}
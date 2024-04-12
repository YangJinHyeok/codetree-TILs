#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[8] = {0, 2, 1, 2, 2, 1, 3, 1};
    int count_array[4] = {};
    int n = 7;

    // 가능한 구간 중 최대 크기를 구합니다.
    int ans = 0;
    
    // 구간을 잡아봅니다.
    int j = 0;
    for(int i = 1; i <= n; i++) {
        // 같은 숫자가 3개가 되기 전까지 계속 진행합니다.
        while(j + 1 <= n && count_array[arr[j + 1]] < 1) {
            count_array[arr[j + 1]]++;
            j++;
        }
        
        // 현재 구간 [i, j]는 
        // i를 시작점으로 하는
        // 가장 긴 구간이므로
        // 구간 크기 중 최댓값을 갱신합니다.
        ans = max(ans, j - i + 1);

        // 다음 구간으로 넘어가기 전에
        // arr[i]에 해당하는 값은 count_array에서 지워줍니다.
        count_array[arr[i]]--;
    }

    // 조건을 만족하는 가장 큰 구간의 크기는
    // [1, 2, 2, 1, 3]로 5가 됩니다.
    cout << ans;
    return 0;
}
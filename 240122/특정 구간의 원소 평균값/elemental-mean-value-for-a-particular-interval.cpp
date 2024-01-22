#include <iostream>
#include <algorithm>
using namespace std;

int arr[101];

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }


    int ans = 0;
    for(int i = 1; i <= n; i++)
        for(int j = i; j <= n; j++) {
            int cnt = 0;
            int sum_val = 0;
            for(int k = i; k <= j; k++){
                sum_val += arr[k];
                cnt++;
            }
            double avg = (double)sum_val / cnt;

            for(int k = i; k <= j; k++){
                if(arr[k] == avg){
                    ans++;
                    break;
                }
            }
        }
    
    cout << ans;
    
    return 0;
}
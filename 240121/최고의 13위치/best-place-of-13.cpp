#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;



int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n)); 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int max_sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 2; j++){
            max_sum = max(max_sum, arr[i][j] + arr[i][j+1] + arr[i][j+2]);
        }
    }

    cout << max_sum;

    
    return 0;
}
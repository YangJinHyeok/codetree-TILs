#include <iostream>
using namespace std;
#define MAX 1001

int memo[MAX];

int main() {
    
    int n;
    cin >> n;

    memo[0] = 1;
    memo[1] = 0;
    memo[2] = 1;
    memo[3] = 1;

    for(int i = 4; i <= n; i++){
        memo[i] = (memo[i-2] + memo[i-3]) % 10007;
    }

    cout << memo[n];




    return 0;
}
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
#define MAX 20

int n,m;
int arr[MAX][MAX];
int ans = INT_MIN;

bool checkAbs(int x1, int y1, int x2, int y2){
    for(int i = x1; i <= x2; i++){
        for(int j = y1; j <= y2; j++){
            if(arr[i][j] < 0){
                return false;
            }
        }
    }
    return true;
}


int getSize(int x1, int y1, int x2, int y2){
    int cnt = 0;
    for(int i = x1; i <= x2; i++){
        for(int j = y1; j <= y2; j++){
            cnt++;
        }
    }

    return cnt;
}

int main() {

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int k = i; k < n; k++){
                for(int l = j; l < m; l++){
                    if(checkAbs(i,j,k,l)){
                        ans = max(ans, getSize(i,j,k,l));
                    }
                }
            }
        }
    }
    if(ans == INT_MIN){
        cout << -1;
    }
    else{
        cout << ans;
    }

    return 0;
}
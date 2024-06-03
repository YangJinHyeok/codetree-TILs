#include <iostream>
using namespace std;
#define MAX 101

int arr[MAX][MAX];
int n,m;
int ans = 0;
void garo(){
    for(int i = 0; i < n; i++){
        int max_cnt = 0;
        int cnt = 1;
        if(n == 1){
            ans++;
            break;
        }
        for(int j = 0; j < n-1; j++){
            if(arr[i][j] == arr[i][j+1]){
                cnt++;
            }
            else{
                cnt = 1;
            }
            max_cnt = max(max_cnt, cnt);
        }
        if(max_cnt >= m){
            ans++;
        }
    }
}


void sero(){
    for(int i = 0; i < n; i++){
        int max_cnt = 0;
        int cnt = 1;
        if(n == 1){
            ans++;
            break;
        }
        for(int j = 0; j < n-1; j++){
            if(arr[j][i] == arr[j+1][i]){
                cnt++;
            }
            else{
                cnt = 1;
            }
            max_cnt = max(max_cnt, cnt);
        }
        if(max_cnt >= m){
            ans++;
        }
    }
}


int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    garo();
    sero();

    cout << ans;
    

    return 0;
}
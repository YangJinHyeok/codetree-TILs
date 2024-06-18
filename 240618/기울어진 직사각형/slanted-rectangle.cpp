#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 20
#define NUM 4

int arr[MAX][MAX];
int n;
int ans = 0;

bool canGo(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < n;
}


int move(int x, int y, int k, int l){
    int dx[NUM] = {1, -1, -1,1};
    int dy[NUM] = {-1, -1, 1,1};
    // {-1, -1, 1, 1};
    // {1, -1, -1, 1};
    int move_dir[NUM] = {k,l,k,l};

    int sum = 0;

    for(int d = 0; d < NUM; d++){
        for(int q = 0; q < move_dir[d]; q++){
            x += dx[d]; y += dy[d];

            if(!canGo(x,y)){
                return 0;
            }

            sum += arr[x][y];
        }
    }

    return sum;
}



int main(){


    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 1; k < n; k++){
                for(int l = 1; l < n; l++){
                    ans = max(ans, move(i,j,k,l));
                }
            }
        }
    }

    cout << ans;
    


    return 0;
}
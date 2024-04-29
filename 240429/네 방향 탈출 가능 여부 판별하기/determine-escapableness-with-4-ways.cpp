#include <iostream>
#include <queue>
using namespace std;
#define MAX 100

int n,m;
int arr[MAX][MAX];
bool visited[MAX][MAX];
queue<pair<int,int>> q; 


bool inrange(int x, int y){
    return x >= 0 && x <= n && y >= 0 && y <= m;
}

bool cango(int x, int y){
    return inrange(x, y) && arr[x][y] && !visited[x][y];
}


void bfs(){
    while(!q.empty()){
        pair<int, int> curr_pos = q.front();
        int x = curr_pos.first, y = curr_pos.second;
        q.pop();

        int dx[4] = {1,0,-1, 0};
        int dy[4] = {0,1, 0,-1};

        for(int i = 0; i < 4; i++){
            int dirx = x + dx[i];
            int diry = y + dy[i];

            if(cango(dirx,diry)){
                q.push({dirx, diry});
                visited[dirx][diry] = true;
            }
        }
    }
}


int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    q.push({0,0});
    visited[0][0] = true;

    bfs();


    cout << visited[n-1][m-1];

    return 0;
}
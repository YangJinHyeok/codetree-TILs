#include <iostream>
#include <vector>
using namespace std;
#define MAX 1000


vector<int> arr[MAX + 1];
bool visited[MAX + 1];
int ans;

void DFS(int num){

    for(int i = 0; i < (int)arr[num].size(); i++){
        int c = arr[num][i];

        if(!visited[c]){
            visited[c] = true;
            ans++;
            DFS(c);
        }
    }
}



int main(){

    int n, m;
    cin >> n >> m;
    int v1, v2;
    for(int i = 0; i < m; i++){
        cin >> v1 >> v2;
        arr[v1].push_back(v2);
        arr[v2].push_back(v1);
    }

    visited[1] = true;
    DFS(1);

    cout << ans;

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

vector<pair<int, int>> v;

int visited[1001];

#define X first
#define Y second

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    int max_ans = INT_MIN;
    for(int i = 0; i < n; i++){
        int ans = 0;
        for(int j = 0; j < 1001; j++){
            visited[j] = 0;
        }

        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            for(int k = v[j].X; k < v[j].Y; k++){
                visited[k]++;
            }
        }

        for(int j = 0; j < 1001; j++){
            if(visited[j] != 0){
                ans++;
            }
        }

        max_ans = max(max_ans, ans);

    }
    
    cout << max_ans;
    
    return 0;
}
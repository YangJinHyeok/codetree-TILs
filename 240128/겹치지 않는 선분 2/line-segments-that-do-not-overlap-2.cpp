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
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(v[i].X < v[j].X && v[i].Y > v[j].Y){
                cnt++;
            }
            else if(v[i].X > v[j].X && v[i].Y < v[j].Y){
                cnt++;
            }
        }
    }

    cout << n - (cnt * 2);
    
     
    
    return 0;
}
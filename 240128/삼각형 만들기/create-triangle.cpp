#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

vector<pair<int, int>> v;

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
    int ans = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                if(i == k || j == k || i == j){
                    continue;
                }
                int Xmax = max({v[i].X, v[j].X, v[k].X});
                int Ymax = max({v[i].Y, v[j].Y, v[k].Y});
                int Xmin = min({v[i].X, v[j].X, v[k].X});
                int Ymin = min({v[i].Y, v[j].Y, v[k].Y});

                if(v[i].X == v[j].X){
                    if(v[i].Y == v[k].Y || v[j].Y == v[k].Y){
                        ans = max(ans, ((Xmax - Xmin) * (Ymax - Ymin)));
                    }
                }
                else if(v[i].X == v[k].X){
                    if(v[i].Y == v[j].Y || v[k].Y == v[j].Y){
                        ans = max(ans, ((Xmax - Xmin) * (Ymax - Ymin)));
                    }
                }
                else if(v[j].X == v[k].X){
                    if(v[j].Y == v[i].Y || v[k].Y == v[i].Y){
                        ans = max(ans, ((Xmax - Xmin) * (Ymax - Ymin)));
                    }
                }
            }          
        }
    }
    
    cout << ans;
    
    return 0;
}
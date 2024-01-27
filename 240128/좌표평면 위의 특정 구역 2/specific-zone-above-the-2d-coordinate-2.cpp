#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

#define X first
#define Y second

vector<pair<int,int>> v;

int countRect(){

}



int main() {
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    int ans = INT_MAX;
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                int xmax = max({v[i].X, v[j].X, v[k].X});
                int ymax = max({v[i].Y, v[j].Y, v[k].Y});
                int xmin = min({v[i].X, v[j].X, v[k].X});
                int ymin = min({v[i].Y, v[j].Y, v[k].Y});

                int recsize = (xmax - xmin) * (ymax - ymin);

                ans = min(ans, recsize);                
            }
        }
    }

    cout << ans;

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

#define X first
#define Y second
#define MAX_NUM 40000
vector<pair<int,int>> v;




int main() {
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
    }

    int ans = INT_MAX;


    if(n == 3){
        for(int i = 0; i < n - 1; i++){
            int xmax;
            int ymax;
            int xmin;
            int ymin;
            for(int j = i + 1; j < n; j++){
                xmax = max({v[i].X, v[j].X});
                ymax = max({v[i].Y, v[j].Y});
                xmin = min({v[i].X, v[j].X});
                ymin = min({v[i].Y, v[j].Y});

                int recsize = (xmax - xmin) * (ymax - ymin);

                ans = min(ans, recsize);                
            }
        }
    }
    else{
        for(int i = 0; i < n; i++){
            int xmin = MAX_NUM, xmax = 1;
            int ymin = MAX_NUM, ymax = 1;
            for(int j = 0; j < n; j++){
                if(j == i){
                    continue;
                }
                xmax = max({xmax, v[j].X});
                ymax = max({ymax, v[j].Y});
                xmin = min({xmin, v[j].X});
                ymin = min({ymin, v[j].Y});
            
            }
            int recsize = (xmax - xmin) * (ymax - ymin);

            ans = min(ans, recsize);    
        }
    }
    
    

    cout << ans;

    return 0;
}
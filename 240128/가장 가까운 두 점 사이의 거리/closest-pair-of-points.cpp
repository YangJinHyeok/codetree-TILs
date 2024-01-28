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
    int min_dis = INT_MAX;
    for(int i = 0; i < n; i++){
        int x1,x2,y1,y2;
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            x1 = v[i].X;
            x2 = v[j].X;
            y1 = v[i].Y;
            y2 = v[j].Y;

            min_dis =  min(min_dis, (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
           
        }
    }

    cout << min_dis;


    return 0;
}
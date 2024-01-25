#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b){
    return a.second < b.second;
}

int main() {

    int n,h,t;
    vector<pair<int,int>> v;
    cin >> n >> h >> t;

    for(int i = 0; i < n; i++){
        int a,diff;
        cin >> a;
        diff = abs(h - a);
        v.push_back({a,diff});
    }
    int min_sum = INT_MAX;
    for(int i = 0; i < n - t; i++){
        int sum = 0;
        for(int j = i; j < i+t; j++){
            sum += v[j].second;
        }

        min_sum = min(min_sum, sum);
    }

    cout << min_sum;




    return 0;
}
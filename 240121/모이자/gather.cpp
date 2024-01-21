#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int min_sum = INT_MAX;
    for(int i = 0; i < n; i++){
        int diff;
        int sum = 0;
        for(int j = 0; j < n; j++){
            diff = abs(j - i);
            sum += (v[j] * diff);
        }

        if(sum <= min_sum){
            min_sum = sum;
        }
    }

    cout << min_sum;
    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, B;
    cin >> N >> B;
    
    vector<int> result;
    while(N > 0) {
        result.push_back(N % B);
        N /= B;
    }

    for(int i = result.size() - 1; i >= 0; --i) {
        cout << result[i];
    }

    return 0;
}
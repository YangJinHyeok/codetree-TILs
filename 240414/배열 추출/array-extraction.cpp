#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> pq;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x > 0){
            pq.push(x);
        }
        else if(x == 0){
            if(pq.empty()){
                cout << 0 << "\n";
            }
            else{
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }
    return 0;
}
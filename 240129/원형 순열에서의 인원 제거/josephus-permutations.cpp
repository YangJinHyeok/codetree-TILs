#include <iostream>
#include <queue>
using namespace std;

int main() {

    int n,k;
    queue<int> q;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        q.push(i);
    }

    while(q.size() != 0){
        for(int i = 0; i < k; i++){
            if(i == k-1){
                cout << q.front() << " ";
                q.pop();
            }
            else{
                q.push(q.front());
                q.pop();
            }
        }
    }

    return 0;
}
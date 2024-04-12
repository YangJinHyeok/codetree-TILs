#include <iostream>
#include <queue>
using namespace std;
#define MAX 100000

int arr[MAX];

priority_queue<int> pq;

int main() {
    int n,m;
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        pq.push(a);
    }

    for(int i = 0; i < m; i++){
        int b = pq.top() - 1;
        pq.pop();
        pq.push(b);
    }
    cout << pq.top();


    return 0;
}
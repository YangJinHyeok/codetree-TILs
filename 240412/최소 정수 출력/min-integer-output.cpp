#include <iostream>
#include <queue>
using namespace std;
#define MAX 200000

int arr[MAX];

priority_queue<int> pq;

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a == 0){
            if(pq.size() == 0){
                cout << 0 << "\n";
            }
            else{
                cout << -pq.top() << "\n";
                pq.pop();
            }
        }
        else{
            pq.push(-a);
        }
    }

    return 0;
}
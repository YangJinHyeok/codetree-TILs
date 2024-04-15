#include <iostream>
#include <queue>
using namespace std;


priority_queue<int> pq;
priority_queue<int> pq2;
int main() {
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        int sum = 1;
        cin >> a;
        pq.push(-a);
        if(pq.size() < 3){
            cout << -1 << "\n";
        }
        else{
            for(int j = 0; j < 3; j++){
                pq2.push(pq.top());
                sum *= -pq.top();
                pq.pop();
            }
            for(int j = 0; j < 3; j++){
                pq.push(pq2.top());
                pq2.pop();
            }
            cout << sum << "\n";
        }
    }


    return 0;
}
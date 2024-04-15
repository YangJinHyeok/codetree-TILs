#include <iostream>
#include <queue>
using namespace std;




int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        priority_queue<int> pq;
        priority_queue<int> pq2;
        int m;
        cin >> m;
        for(int j = 1; j <= m; j++){
            int a;
            cin >> a;
            pq.push(a);
            if(j % 2 == 1){
                if(pq.size() == 0){
                    cout << pq.top() << " ";
                }
                else{
                    int pq_size = pq.size() / 2;
                    for(int k = 0; k < pq_size; k++){
                        pq2.push(pq.top());
                        pq.pop();
                    }
                    cout << pq.top() << " ";
                    for(int k = 0; k < pq_size; k++){
                        pq.push(pq2.top());
                        pq2.pop();
                    }
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
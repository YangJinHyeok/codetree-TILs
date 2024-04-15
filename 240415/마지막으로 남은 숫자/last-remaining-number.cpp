#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

priority_queue<int> pq;

int main() {
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        pq.push(a);
    }
    
    int b,c;

    while(pq.size() > 1){
        b = pq.top();
        pq.pop();
        c = pq.top();
        pq.pop();
        int d = abs(b-c);
        if(d == 0){
            continue;
        }
        else{
            pq.push(d);
        }
    }
    

    if(pq.size() == 0){
        cout << -1;
    }   
    else{
        cout << pq.top();
    }



    return 0;
}
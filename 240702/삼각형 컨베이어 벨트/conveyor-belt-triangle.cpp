#include <iostream>
#include <deque>
using namespace std;

int n,t,a,b,c;
deque<int> q;
deque<int> q2;
deque<int> q3;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> t;

    for(int i = 0; i < n; i++){
        cin >> a;
        q.push_back(a);
    }


    for(int i = 0; i < n; i++){
        cin >> b;
        q2.push_back(b);
    }

    for(int i = 0; i < n; i++){
        cin >> c;
        q3.push_back(c);
    }

    for(int i = 0; i < t; i++){
        int qf = q.back();
        q.pop_back();
        q2.push_front(qf);
        int qf2 = q2.back();
        q2.pop_back();
        q3.push_front(qf2);
        int qf3 = q3.back();
        q3.pop_back();
        q.push_front(qf3);
    }
    
    for(int i = 0; i < n; i++){
        cout << q.front() << " ";
        q.pop_front();
    }
    cout << "\n";
    for(int i = 0; i < n; i++){
        cout << q2.front() << " ";
        q2.pop_front();
    }
    cout << "\n";
    for(int i = 0; i < n; i++){
        cout << q3.front() << " ";
        q3.pop_front();
    }
    return 0;
}
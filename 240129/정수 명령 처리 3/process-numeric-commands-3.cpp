#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<int> q;
    int n;
    string a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == "push_front"){
            int b;
            cin >> b;
            q.push_front(b); 
        }
        else if(a == "push_back"){
            int b;
            cin >> b;
            q.push_back(b);
        }
        else if(a == "pop_front"){
            cout << q.front() << endl; 
            q.pop_front();
        }
        else if(a == "pop_back"){
            cout << q.back() << endl; 
            q.pop_back();
        }
        else if(a == "size"){
            cout << q.size() << endl;
        }
        else if(a == "empty"){
            cout << q.empty() << endl;
        }
        else if(a == "front"){
            cout << q.front() << endl;
        }
        else if(a == "back"){
            cout << q.back() << endl;
        }
    }

    return 0;
}
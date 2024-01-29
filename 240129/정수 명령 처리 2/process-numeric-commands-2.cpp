#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<int> q;
    int n;
    string a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == "push"){
            int b;
            cin >> b;
            q.push(b); 
        }
        else if(a == "pop"){
            cout << q.front() << endl;
            q.pop();
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
    }

    return 0;
}
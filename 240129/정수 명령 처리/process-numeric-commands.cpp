#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;              // 정수를 관리할 stack을 선언합니다. => 빈 스택
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string a;
        cin >> a;

        if(a == "push"){
            int b;
            cin >> b;
            s.push(b); 
        }
        else if(a == "size"){
            cout << s.size() << endl;
        }
        else if(a == "empty"){
            cout << s.empty() << endl;
        }
        else if(a == "pop"){
            cout << s.top() << endl;
            s.pop();
        }
        else if(a == "top"){
            cout << s.top() << endl;
        }
    }

    return 0;
}
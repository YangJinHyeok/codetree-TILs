#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<int> s;
    string a;
    cin >> a;

    for(int i =0 ; i < a.size(); i++){
        if(a[i] == '('){
            s.push(a[i]);
        }
        else{
            if(s.empty()){
                cout << "No";
                return 0;
            }
            else{
                if(s.top() == '('){
                    s.pop();
                }
            }
        }
    }
    if(s.empty()){
        cout << "Yes";
    }
    else{
        cout << "No";
    }


    return 0;
}
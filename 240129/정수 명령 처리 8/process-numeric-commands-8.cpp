#include <iostream>
#include <list>

using namespace std;
list<int> l;
int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string a;
        int b;
        cin >> a;
        if(a == "push_back"){
            cin >> b;
            l.push_back(b);
        }
        else if(a == "push_front"){
            cin >> b;
            l.push_front(b);
        }
        else if(a == "pop_front"){
            cout << l.front() << endl;
            l.pop_front();            
        }
        else if(a == "pop_back"){
            cout << l.back() << endl;
            l.pop_back();
        }
        else if(a == "front"){
            cout << l.front() << endl;
        }
        else if(a == "back"){
            cout << l.back() << endl;
        }
        else if(a == "empty"){
            cout << l.empty() << endl;
        }
        else if(a == "size"){
            cout << l.size() << endl;
        }
    }
    

    return 0;
}
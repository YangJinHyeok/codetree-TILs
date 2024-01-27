#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;

        if(a == "push_back"){
            int b;
            cin >> b;
            v.push_back(b);
        }
        else if(a == "get"){
            int b;
            cin >> b;
            cout << v[b-1] << endl;
        }   
        else if(a == "size"){
            cout << v.size() << endl;
        }
        else if(a == "pop_back"){
            v.pop_back();
        }
    }


    return 0;
}
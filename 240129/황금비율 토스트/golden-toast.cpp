#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string bread;
    cin >> bread;

    list<char> breadList(bread.begin(), bread.end());
    list<char>::iterator it;
    it = breadList.end();

    for (int i = 0; i < m; ++i) {
        char command;
        cin >> command;

        if (command == 'L') {
            if (it != breadList.begin()) {
                --it;
            }
        } else if (command == 'R') {
            if (it != breadList.end()) {
                ++it;
            }
        } else if (command == 'D') {
            if (it != breadList.end()) {
                it = breadList.erase(it);
            }
        } else if (command == 'P') {
            char newBread;
            cin >> newBread;
            breadList.insert(it, newBread);
        }
    }

    for (char c : breadList) {
        cout << c;
    }

    return 0;
}
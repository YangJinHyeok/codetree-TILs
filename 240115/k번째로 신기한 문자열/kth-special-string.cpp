#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n, k;
string t;
int cnt;

string str[MAX_N];
string words[MAX_N];

bool StartsWith(string a, string b) {
    if((int) a.size() < (int) b.size())
        return false;
    
    for(int i = 0; i < (int) b.size(); i++)
        if(a[i] != b[i])
            return false;
    
    return true;
}

int main() {
    cin >> n >> k >> t;
    for(int i = 0; i < n; i++) {
        cin >> str[i];
        if(StartsWith(str[i], t))
            words[cnt++] = str[i];
    }
    sort(words, words + cnt);
    
    cout << words[k - 1];
    return 0;
}
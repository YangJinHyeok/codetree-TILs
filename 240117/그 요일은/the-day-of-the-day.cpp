#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    int elapsed_days = 1;
    string a;
    
    int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int count[7] = {0,0,0,0,0,0,0};
    cin >> m1 >> d1 >> m2 >> d2 >> a;

    while(true) {
        if(m1 == m2 && d1 == d2)
            break;

        if(m1 < m2 || (m1 == m2 && d1 < d2)) {
            elapsed_days++;
            d1++;

            if(d1 > num_of_days[m1]) {
                m1++;
                d1 = 1;
            }
        } else {
            elapsed_days--;
            d1--;

            if(d1 < 1) {
                m1--;
                d1 = num_of_days[m1];
            }
        }
    }
    int v = elapsed_days / 7;
    int w = elapsed_days % 7;
    for(int i = 0; i < 7; i++){
        count[i] = v;
    }

    for(int i = 0; i < w; i++){
        count[i]++;
    }

    for(int i = 0; i < 7; i++){
        if(days[i] == a){
            cout << count[i];
        }
    }
    
    
    
    
    return 0;
}
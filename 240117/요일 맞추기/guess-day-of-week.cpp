#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    int elapsed_days = 0;
    
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    cin >> m1 >> d1 >> m2 >> d2;

    while(true) {
        if(m1 == m2 && d1 == d2)
            break;

        if(m1 < m2 || (m1 == m2 && d1 < d2)) { // 시작 날짜가 끝 날짜보다 이른 경우
            elapsed_days++;
            d1++;

            if(d1 > num_of_days[m1]) {
                m1++;
                d1 = 1;
            }
        } else { // 시작 날짜가 끝 날짜보다 늦은 경우
            elapsed_days--;
            d1--;

            if(d1 < 1) {
                m1--;
                d1 = num_of_days[m1];
            }
        }
    }
    
    cout << days[(elapsed_days % 7 + 7) % 7]; // -6 ~ 6 범위를 0 ~ 6 범위로 변환
    
    return 0;
}
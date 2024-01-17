#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

class Distance{
    public:
        int sum,num;


        Distance(int sum, int num){
            this->sum = sum;
            this->num = num;
        }

        Distance(){}
};

bool cmp(Distance a, Distance b){
    if(a.sum == b.sum){
        return a.num < b.num;
    }
    return a.sum < b.sum;
}

int main() {

    int n;
    cin >> n;
    Distance distance[n];
    int cnt = 1;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        int sum = abs(a) + abs(b);
        distance[i] = Distance(sum,cnt);
        cnt++;
    }

    sort(distance, distance + n, cmp);

    for(int i = 0; i < n; i++){
        cout << distance[i].num << endl;
    }
    





    return 0;
}
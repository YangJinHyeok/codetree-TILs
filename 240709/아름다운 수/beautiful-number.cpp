#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> v;
int ans = 0;

bool IsBeautiful() {
    // 연달아 같은 숫자가 나오는 시작 위치를 잡습니다.
	for(int i = 0; i < n; i += v[i]) {
        // 만약 연속하여 해당 숫자만큼 나올 수 없다면
        // 아름다운 수가 아닙니다.
		if(i + v[i] - 1 >= n)
            return false;
        // 연속하여 해당 숫자만큼 같은 숫자가 있는지 확인합니다.
        // 하나라도 다른 숫자가 있다면
        // 아름다운 수가 아닙니다.
        for(int j = i; j < i + v[i]; j++)
            if(v[j] != v[i])
                return false;
	}
	return true;
}


void choose(int num){
    if(num == n){
        if(IsBeautiful())
			ans++;
        return;
    }

    for(int i = 1; i <= 4; i++){
        v.push_back(i);
        choose(num + 1);
        v.pop_back();
    }

}



int main() {
    
    cin >> n;

    choose(0);

    cout << ans;

    return 0;
}
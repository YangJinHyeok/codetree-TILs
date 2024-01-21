#include <iostream>
#include <climits>
using namespace std;

#define MAX_NUM 1003

int arr[MAX_NUM];

int main() {
    int n;
    cin >> n;


    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
	int min_sum = INT_MAX;
    for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = 0; j < n; j++){
			int dist = (j + n - i) % n;
			sum += dist * arr[j];
		}
		if(sum <= min_sum){
			min_sum = sum;
		}
    }

	cout << min_sum;

    return 0;
}
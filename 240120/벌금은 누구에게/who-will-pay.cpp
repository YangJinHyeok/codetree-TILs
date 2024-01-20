#include <iostream>
#include <vector>
using namespace std;
int arr[101];
int main(){

    int n,m,k;
    cin >> n >> m >> k;
    vector<int> v;
    for(int i = 0; i < m; i++){
        int a;
        cin >> a;
        arr[a]++;
        for(int j = 0; j < 101; j++){
            if(arr[j] >= k){
                cout << j;
                return 0;
            }
        }
    }

    cout << -1;


    return 0;
}




// int target_nums[3] = {5, 10, 8};
// int candy_nums[3] = {3, 3, 3};
// int queries[5] = {'first query', 'second query', ...};

// for(int query = 0; query < 5; query++)
//     for(int num = 0; num < 3; num++)
//         if(MeetTheCondition(query, num))
//             candy_nums[num]--;
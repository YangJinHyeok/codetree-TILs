#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
#define MAX 100000

int arr[MAX];

int main(){

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int m;
        cin >> m;
        for(int j = 0; j < m; j++){
            cin >> arr[j];            
        }
        int mid = arr[0];  
        priority_queue<int> max_pq;
        priority_queue<int> min_pq;
        cout << mid << " ";
        for(int j = 1; j < m; j++){
            if(j % 2 == 1){
                if(arr[j] < mid){
                    max_pq.push(arr[j]);
                }
                else{
                    min_pq.push(-arr[j]);
                }
            }
            else{
                int next;  
                if(max_pq.size() > min_pq.size()){
                    next = max_pq.top();
                    max_pq.pop();
                }
                else{
                    next = -min_pq.top();
                    min_pq.pop();
                }
                int num[] = {mid, arr[j], next};
                sort(num, num+3);

                min_pq.push(-num[2]);
                mid = num[1];
                max_pq.push(num[0]);

                cout << mid << " ";


            }

        }
        cout << "\n";
    }




    return 0;
}
#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int arr[5];


int diff(int i, int j, int k, int l){

    int sum = 0;

    for(int u = 0; u < 5; u++){
        sum += arr[u];
    }

    int team1 = arr[i] + arr[j];
    int team2 = arr[k] + arr[l];
    int team3 = sum - team1 - team2;

    if(team1 == team2 || team1 == team3 || team2 == team3){
        return INT_MAX;
    }

    int max_team = max({team1, team2, team3});
    int min_team = min({team1, team2, team3});

    return abs(max_team - min_team);
}





int main() {
    
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    int min_ans = INT_MAX;
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){

            for(int k = 0; k < 5; k++){
                for(int l = k+1; l < 5; l++){
                    if(i == k || i == l || j == k || j == l){
                        continue;
                    }

                    min_ans = min(min_ans, diff(i,j,k,l));
                }
            }
        }
    }
    if(min_ans == INT_MAX){
        cout << -1;
    }
    else{
        cout << min_ans;
    }

    return 0;
}
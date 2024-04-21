#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 25
#define DIR 4

int n;
int grid[MAX+1][MAX+1];
bool visited[MAX+1][MAX+1];
vector<int> people;
int people_num;

bool inrange(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < n;
}


bool cango(int x, int y){
    if(!inrange(x,y)){
        return false;
    }
    if(visited[x][y] || grid[x][y] == 0){
        return false;
    }
    return true;
}

void DFS(int x, int y){
    int dir_x[DIR] = {0,1, 0, -1}; //오른쪽,아래,왼쪽,위
    int dir_y[DIR] = {1,0,-1,  0};

    for(int i = 0; i < DIR; i++){
        int new_x = x + dir_x[i];
        int new_y = y + dir_y[i];
        
        if(cango(new_x, new_y)){
            visited[new_x][new_y] = true;
            people_num++;
            DFS(new_x, new_y);
        }
    }
}


int main() {
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(cango(i,j)){
                visited[i][j] = true;
                people_num = 1;

                DFS(i,j);

                people.push_back(people_num);
            }
        }
    }

    sort(people.begin(), people.end());

    cout << people.size() << endl;
    for(int i = 0; i < (int) people.size(); i++)
        cout << people[i] << endl;
    
    return 0;
}
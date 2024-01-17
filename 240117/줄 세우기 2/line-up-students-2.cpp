#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int height, weight, num;

        Student(int height, int weight, int num){
            this->height = height;
            this->weight = weight;
            this->num = num;
        }

        Student(){}
};

bool cmp(Student a, Student b){
    if(a.height == b.height){
        return a.weight > b.weight;
    }
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;
    Student student[n];
    int cnt = 1;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        student[i] = Student(a,b,cnt);
        cnt++;
    }

    sort(student, student+n, cmp);

    for(int i = 0; i < n; i++){
        cout << student[i].height << " " << student[i].weight << " " << student[i].num << endl;
    }


    return 0;
}
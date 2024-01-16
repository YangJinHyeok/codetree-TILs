#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Student {
    public:
        string name;
        int gook, young, su;

        Student(string name, int gook, int young, int su) {
            this->name = name;
            this->gook = gook;
            this->young = young;
            this->su = su;
        }

        Student(){}
};

bool cmp(Student a, Student b) { 
    if(a.gook == b.gook){
        if((a.young == b.young)){
            return a.su > b.su;
        }
        return a.young > b.young;
    }
    return a.gook > b.gook; 
}

int main() {
    int a;
    cin >> a;
    Student students[a];

    for(int i = 0; i < a; i++){
        string b;
        int c, d, e;
        cin >> b >> c >> d >> e;
        students[i] = Student(b,c,d,e);
    }


    sort(students, students + a, cmp);

    for(int i = 0; i < a; i++)
        cout << students[i].name << " " << students[i].gook << " " << students[i].young << " " << students[i].su << endl;

    return 0;
}
//yashrastogi
//exp-12
#include<iostream>
using namespace std;
class Student {
    int Rollnum;
    char math_grade,cpp_grade,EDC_grade,DCLD_grade;
public:
    Student(char m,char c,char e,char d) {
        math_grade=m;
        cpp_grade=c;
        EDC_grade=e;
        DCLD_grade=d;
    }
    Student(const Student &s) {
        math_grade=s.math_grade;
        cpp_grade=s.cpp_grade;
        EDC_grade=s.EDC_grade;
        DCLD_grade=s.DCLD_grade;
    }
    void display() {
        cout<<"Math Grade: "<<math_grade<<endl;
        cout<<"C++ Grade: "<<cpp_grade<<endl;
        cout<<"EDC Grade: "<<EDC_grade<<endl;
        cout<<"DCLD Grade: "<<DCLD_grade<<endl;
    }
};
int main() {
    Student s1('A','B','A','C');
    cout<<"Original Student Grades:"<<endl;
    s1.display();
    Student s2=s1;
    cout<<"\nCopied Student Grades:"<<endl;
    s2.display();
    return 0;
}
/*
Output:
Original Student Grades:
Math Grade: A
C++ Grade: B
EDC Grade: A
DCLD Grade: C

Copied Student Grades:
Math Grade: A
C++ Grade: B
EDC Grade: A
DCLD Grade: C
*/

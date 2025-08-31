//yashrastogi
//exp-12
#include<iostream>
using namespace std;
class Destruct {
    static int count;
public:
    Destruct() {
        count++;
        cout<<"Object created. Total objects: "<<count<<endl;
    }
    ~Destruct() {
        count--;
        cout<<"Object destroyed. Remaining objects: "<<count<<endl;
    }
};
int Destruct::count=0;
int main() {
    Destruct a1,b1,c1,s1;
    return 0;
}
/*
Output:
Object created. Total objects: 1
Object created. Total objects: 2
Object created. Total objects: 3
Object created. Total objects: 4
Object destroyed. Remaining objects: 3
Object destroyed. Remaining objects: 2
Object destroyed. Remaining objects: 1
Object destroyed. Remaining objects: 0
*/

#include <iostream>
#include <string>
using namespace std;

class teacher{
    private:
    double salary;
    
    public:
    string name;
    string subject;
    string dept;

    void changeDept( string newDept){
        dept = newDept;
    }

};

int main(){
    teacher T;

    T.name = " Misson";
    cout<<T.name;

    return 0;
}

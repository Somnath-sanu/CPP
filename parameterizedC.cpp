#include <iostream>
using namespace std;

class B {
    int a;
    public:
    B(int x){
        a =x;
    }

    void show(){
        cout<<"Value of a :"<<a<<endl;
    }
};

int main(){

    B bb = B(5);//explicit call
    B cc(10);//implicit call

    bb.show();
    cc.show();




    return 0;
}
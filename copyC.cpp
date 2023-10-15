#include <iostream>
using namespace std;

class A{
    int a;
    public:
    A(){
        a= 5;
    
    }

    A(int x){
        a =x;

    }

    A(A &o){
        a = o.a;
    }

    void show(){
        cout<<"Value is :"<<a<<endl;
    }
};

int main(){

    A aa;

    aa.show();//5

    A bb(10);

    bb.show(); //10

    A cc(aa);//implicit call
    cc.show();//5

    A dd = bb;//explicit call

    dd.show();//10


        



    return 0;
}
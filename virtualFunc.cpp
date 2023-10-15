#include <iostream>
using namespace std;

class A{
    public:
    virtual void show(){
        cout<<"Base class"<<endl;

    }

};

class B : public A{
    public:
    void show(){
        cout<<"Derived class"<<endl;

    }
};

int main(){
    A a;
    A *ptr;

    ptr = &a;

    ptr->show();

    B b;
    ptr = &b;

    ptr->show();

    return 0;
}
#include <iostream>
using namespace std;

class A{

    protected:
    int a;
    
};

class B:public A{
    public:

    void set( int x){
       
       
        a =x;
    }
    void show(){
        
        cout<<a;
    }
};

int main(){

    B obj;

    obj.set(10);
    obj.show();
  

    return 0;
}
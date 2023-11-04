
using namespace std;


class A{
    int a;
    public:
    A(){
        a =5;
    }

    void show(){
        cout<<"Value of a is :"<<a;
    }
};

int main(){

    A aa;

    aa.show();

    return 0;
}
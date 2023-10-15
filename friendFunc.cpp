#include <iostream>
using namespace std;

class Sum {
        int value ;

        public:

        void setValue(int a){
                value = a;
        }

        friend void show(Sum obj);
};

void show(Sum obj){
        cout<< "Value is :"<<obj.value;
}

int main(){
        Sum s;

        s.setValue(10);

        show(s);

        return 0;
}
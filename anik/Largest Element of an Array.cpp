#include <iostream>
using namespace std;

class abcd{
    public:

    int ary[10] = {10, 20, 208, 1, 98, 45};
    int flag = 0;


    void runIt(){
        for (int i=0; i<10; i++){
            if (ary[i] > ary[flag])
                flag = i;
        }
    }
    void display(){
        cout<<"Largest number is"<<ary[flag];
    }
};

int main (){
    abcd obj;
    obj.runIt();
    obj.display();
    return 0;
}

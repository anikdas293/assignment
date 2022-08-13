#include <iostream>
using namespace std;
class abcd{

    public:
    int number, flag = 0;
    void usrInput(){
        cout<< "Enter the number: ";
        cin>>number;
    }

    void process(){
        for (int i=2; i<(int)number/2; i++)
            if (number%i==0)
                flag = 1;
    }

    void display(){
        if(flag == 1)
            cout<< "Number "<<number<<" is not a prime number";
        else
            cout<< "Number "<<number<<" is a prime number";
    }

};

int main(){
    abcd obj;
    obj.usrInput();
    obj.process();
    obj.display();
    return 0;
}

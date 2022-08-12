#include <iostream>
using namespace std;

class abcd{
    public:
     int getUserData;
     float x1, x2, output;

     void display(float data){
        cout<< "Result is: "<< data;
     }

     float toSum(float x1, float x2){
        output = x1+x2;
        display(output);
        return 0;
     };

     float toSubtraction(float x1, float x2){
        output = x1-x2;
        display(output);
        return 0;
     }

     float toMultiply(float x1, float x2){
        output = x1*x2;
        display(output);
        return 0;
     }

     float toDivision(float x1, float x2){
        output = x1/x2;
        display(output);
        return 0;
     }

     int dataInput(){
        cin>>x1>>x2;
     }
};

int main(){
    abcd obj;
    cout<< "Please select your choose"<<endl<<"1. Sum (+)"<<endl<<"2. subtraction(-)"<<endl<<"3. multiplication(*)"<<endl<<"4. division(/)"<<endl;
    cin>>obj.getUserData;
    cout<<endl;
    cout<<"Enter two numbers : ";
    obj.dataInput();

    switch (obj.getUserData) {
        case 1:
            obj.toSum(obj.x1, obj.x2);
        break;

        case 2:
            obj.toSubtraction(obj.x1, obj.x2);
        break;

        case 3:
            obj.toMultiply(obj.x1, obj.x2);
        break;

        case 4:
            obj.toDivision(obj.x1, obj.x2);
        break;

        default:
            cout<<"You enterd Wrong operation";
        break;
    };
}

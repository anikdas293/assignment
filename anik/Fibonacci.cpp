#include <iostream>
using namespace std;
int main(){
    int n, pre1=1, pre2=0, mid;
    cin>>n;

    cout<<pre2<<", "<<pre1<<", ";
    for(int i=3; i<=n; i++){
        mid = pre1 + pre2;
        pre2 = pre1;
        pre1 = mid;
        cout <<pre1<<" ";
    }

    return 0;
}

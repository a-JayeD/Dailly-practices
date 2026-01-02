#include <iostream>
using namespace std;

int main(){
    int a=5;
    int b=7;

    //swaping
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"value of a: "<< a << "\nValue of b: "<< b << endl;

    return 0;
}

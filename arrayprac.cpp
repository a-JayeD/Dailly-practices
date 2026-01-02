#include <iostream>
using namespace std;

int main(){
    int numbers[100];
    for(int i = 0; i < 100; i++)
        numbers[i] = rand() % 2 + 1; //random numbers between 1 and 2

    cout << "Even numbers: " << endl;
    for(int i = 0; i < 100; i++)
        if(numbers[i] % 2 == 0)
            cout << numbers[i]<< " ";


    cout << "\n\nOdd numbers: " << endl;
    for(int i = 0; i < 100; i++)
        if(numbers[i] % 2 != 0)
            cout << numbers[i] << " ";

    return 0;
}
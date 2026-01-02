#include<iostream>
using namespace std;

int main(){
    int numbers[100];
    cout << "Enter 10 numbers: " << endl;
    for(int i = 0; i < 100; i++)
        numbers[i] = rand() % 10000 + 1; //random numbers between 1 and 10000

    int largest = -1, secondLargest = -1;

    for(int i=0; i<100;i++){
        if(numbers[i]> largest){
            secondLargest= largest;
            largest= numbers[i];
        }
    }
    
    cout<<"Numbers: "<<" ";
    for(int i=0; i<100; i++){
        cout<<numbers[i]<<" ";
    }
    
    cout<<"\n\n\n\nLargest: "<< largest<<endl;
    cout<<"Second Largest: "<< secondLargest<<endl;
    
    return 0;
}
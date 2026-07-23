#include<iostream>
using namespace std;

int main(){

    int marks[5] = { 100, 99, 98 , 78, 85};
    int size =5;

    //loops : 0 to size-1

    for(int i=0 ; i < size ; i++){

        cout<< marks[i] << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

void changeArr (int arr[], int size){

    cout << "In function\n"; //function starts

    for(int i=0; i<size; i++){ // loop doubles

        arr[i] = 2* arr[i];
    }
}
int main(){
    
    int arr[] = { 1, 2, 3}; //initially array

    changeArr (arr,3);      //call function

    cout << " In main\n";  //back to main function

    for(int i=0; i<3; i++){  // print in main

        cout<< arr[i]<< " ";
    }

    cout <<endl;

    return 0;

}
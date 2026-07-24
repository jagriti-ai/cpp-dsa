#include <iostream>
using namespace std;

int LinearSearch (int arr[], int size, int target){
for(int i=0; i < size; i++){

        if(arr[i] == target){
            
            return i; //target found
        }

    }
    return -1; // target not found
}
    
int main(){

    int arr[] = {10, -11, 8, 22, -3};
    int size = 5;
    int target = 2;

    cout << LinearSearch(arr, size, target)<< endl;

    return 0;
    
}
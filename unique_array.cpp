#include <iostream> 
using namespace std;

void printUnique(int arr[],int size){  //function to print unique elements in an array

for(int i=0; i< size; i++){ 

    bool isUnique = true; //assume the current value to be unique


for(int j=0; j<size; j++){ //loop to check if the current value is unique or not

 if( i!= j &&  arr[i] == arr[j]){  // to find unique elements in an array

        isUnique = false; 
        break;
    }
}
if (isUnique) {

    cout << arr[i] <<" "; // print unique elements
}
}
}
int main(){

int arr [] = {10, 5, 8, 1, 2, 16, 10 };
int size = 7;

cout << "Unique elements = "<< endl;
printUnique(arr, size); //call function to print unique elements

return 0;
}
// Output: Unique elements = 5 8 1 2 16

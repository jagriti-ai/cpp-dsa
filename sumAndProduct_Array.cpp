#include <iostream>
using namespace std;

void sumAndProduct (int arr[], int size){

    int sum = 0;
    int product = 1;

    for( int i=0; i<size ; i++){

        sum = sum + arr[i];
        product = product*arr[i];

    }
    cout<< "Sum = " << sum << endl;
    cout <<  "Product = " << product << endl;
    
}
int main(){

    int arr[] = { 10, 15, -6, -9, 20};
    int size = 5;

     sumAndProduct( arr, size);

     return 0;

}

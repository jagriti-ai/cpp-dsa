#include <iostream> 
#include <algorithm>  // for std::swap
using namespace std;


void reverseArray(int arr[], int size ){ //define function

    int start = 0, end = size-1; // updations
    
     while(start<end){
        swap(arr[start] ,arr[end]); // 2 pointer approach
        start++ ;
        end--;
          
 }
}

int main(){

    int arr[] = {10, 9 ,-4, 12, 15};
    int size = 5;

    reverseArray(arr, size); // call function

    for(int i=0; i<size; i++){
 
        cout<< arr[i] <<" ";

    }
    cout << endl;
    return 0;

}

    
        
    



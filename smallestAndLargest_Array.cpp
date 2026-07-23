#include <iostream>
# include <climits> //for INT_MAX / INT_MIN
using namespace std;

int main() {

    int num[]={10, -4, 0, 12, -9, 11};

    int size =6;    
int smallest = INT_MAX ; // used for compare 
int largest = INT_MIN;

    for(int i=0; i< size; i++){

   
    smallest =min(num[i], smallest); 
    largest = max(num[i],largest );
       }
          
cout <<"smallest= "<< smallest <<endl; // output = -9
cout <<"largest= " << largest <<endl; //output= 12

return 0;
    }
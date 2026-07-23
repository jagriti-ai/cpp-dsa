#include <iostream>
# include <climits> //for INT_MIN
using namespace std;

int main() {

    int num[]={10, -4, 0, 12, -9, 11};

    int size =6;    
int largest = INT_MIN;// used for comparing

    for(int i=0; i< size; i++){

    if(num[i]>largest){
        
    largest = num[i];
       }
          }
cout<<"largest = " << largest << endl;
return 0;
}
#include <iostream>
# include <climits>
using namespace std;

int main() {

    int num[]={10, -4, 0, 12, -9, 11};

    int size =6;    
int smallest = INT_MAX ;

    for(int i=0; i< size; i++){

    if(num[i]< smallest){
    smallest = num[i];
       }
          }
cout<<"smallest= "<< smallest <<endl;
return 0;
}
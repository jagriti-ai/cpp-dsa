#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <char> vec = {'a' , 'b', 'c', 'd','e' }; // size = 5 

    cout <<"size = "<< vec.size() <<endl;

    for(char val: vec){

        cout << val<< endl;
    }
    return 0;
}

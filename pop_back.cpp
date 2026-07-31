#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> vec;

    cout << "size = " << vec.size() <<endl; //0

    vec.push_back(25); //used to add values in vectors
    vec.push_back(35);
    vec.push_back(10);

    cout<< "after push back size = "<< vec.size() << endl; // 3

    vec.pop_back(); // used delete the last value of the vector

    for(int val:vec){

        cout<< val << endl; 
    }
    return 0;
}

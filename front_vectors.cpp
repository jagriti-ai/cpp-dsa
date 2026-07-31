#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> vec;

    vec.push_back(25); //used to add values in vectors
    vec.push_back(35);
    vec.push_back(10);

    cout<< "after push back size = "<< vec.size() << endl; // 3

    cout << vec.front() <<endl; // 25
    return 0;
}

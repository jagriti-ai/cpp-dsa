#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> vec = { 10, 15, 11, 24, 90, 46};

    for(int i: vec){ // for each loop
    cout<< i << endl;

}
return 0;
}
//Output => 10
//          15
//          11
//          24
//          90
//          46

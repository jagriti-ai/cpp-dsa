#include<iostream>
using namespace std;
#include<cstring>

void f(int i,char str[],int n){
    if(i>=n/2){
        cout<<"True";
        return;
    }if(str[i]!=str[n-i-1]){
        cout<<"False";
        return;
    }
    return f(i+1,str,n);
}
int main(){
    
    char str[100];
    cin.getline(str,100);
    int n = std::strlen(str);
    f(0,str,n);

    return 0;
}
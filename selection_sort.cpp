#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    int min,temp;
    for(int i=0;i<=n-1;i++){
       min = i;
    for(int j=i;j<=n-1;j++){
       if(arr[j]<arr[min]){
        min=j;
       }
       temp = arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:  ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

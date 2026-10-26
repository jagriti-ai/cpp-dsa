#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr,int st,int mid,int end){
   
    vector<int>temp;
    int i =st;
    int j = mid+1;
    while(i<=mid && j<=end){
        if(arr[i]>=arr[j]){ //descending order
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){ //left half
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){ //right half
        temp.push_back(arr[j]);
        j++;
    }
    for(int index =0;index<temp.size();index++){
        arr[index+st] = temp[index];
    }
}
void mergeSort(vector<int>&arr, int st, int end){
    if(st<end){
        int mid = st+(end-st)/2;

      mergeSort(arr,st,mid); //left half
      mergeSort(arr,mid+1,end); //right half
      
      merge(arr,st,mid,end);
    }
}
int main(){
    vector<int>arr = {12,31,82,35,8};
    mergeSort(arr,0,arr.size()-1);

    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
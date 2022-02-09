#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s,int e){
int i=s-1;

int pivot=arr[e];
 for(int j=s;j<e;j++){
      if(arr[j]<pivot){
          i++;
          swap(arr[i],arr[j]);
          
      }
 }
  swap(arr[i+1],arr[e]);
  return i+1;
}

void quicksort(vector<int> &arr,int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
int main(){
    vector<int> arr={1,5,4,7,3,8,6};
    int s=0;int e=arr.size()-1;
   
    quicksort(arr,s,e);
     for(int x:arr){
        cout<<x<<" ";
    }
}

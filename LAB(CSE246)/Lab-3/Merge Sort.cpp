#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int left,int mid,int right){
    int n1=mid-left+1;
    int n2=right-mid;

    //create temp array
    int l[n1],r[n2];

    //copy data to temp array
    for(int i=0;i<n1;i++){
        l[i]=arr[left+i];
    }
    for(int j=0;j<n2;j++){
        r[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=left;

    //merge the temp array
    while(i<n1 && j<n2){
        if(l[i] <= r[j]){
        arr[k] = l[i];
         i++;
        } else {
    arr[k] = r[j];
    j++;
}

        k++;

    }
    // Copy remaining elements
    while (i < n1) {
        arr[k] = l[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = r[j];
        j++;
        k++;
    }
}

//recursive merge sort
void mergesort(int arr[],int left,int right){
    if(left>=right)
        return;

    int mid=left+(right-left)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right);
}

void print(int arr[],int n){
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }

}


int main(){

    int n;
    cout<<"Size of array: ";
    cin >>n;
    cout <<"Element: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     mergesort(arr,0,n-1);
     print(arr,n);
}






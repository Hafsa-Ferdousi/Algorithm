#include <bits/stdc++.h>
using namespace std;
void mergeArray(vector<int> &arr ,int l,int mid,int r){
    vector<int> temp;
    int i=l;
    int j=mid+1;


    while(i<=mid && j<=r) {
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{temp.push_back(arr[j]);
            j++;
        }
    }
    //remain ele
    while(i<=mid){
       temp.push_back(arr[i]);
            i++;
    }

    while(j<=r){
       temp.push_back(arr[j]);
            j++;
    }
//copy merged values back to original array


for(int k=l;k<=r;k++){
    arr[k]=temp[k-l];
}


}
void mergesort(vector<int> &arr, int l,int r){
    if(l>=r){
        return;
    }

    int mid=(l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    mergeArray(arr,l,mid,r);
}
int main(){
    vector<int> arr={ 3,43,4,5};
    mergesort(arr,0,arr.size()-1);


    cout<<"sorted: ";


    for (int x : arr) {
        cout << x << " ";
    }

    return 0;

}



















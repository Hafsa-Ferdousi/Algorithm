
#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  //  pivot
    int i = low - 1;        // index of smaller element
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);  //  pivot correct position
    return i + 1;                 // return pivot index
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);   // sort l
        quickSort(arr, pi + 1, high);  // sort r
    }
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
     quickSort(arr,0,n-1);
     print(arr,n);
}




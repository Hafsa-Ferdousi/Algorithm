
#include <bits/stdc++.h>
using namespace std;
int LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
    if(arr[i]==key){
        return i;
    }
}
return -1;
}

int main(){
int n;
cout<< "Enter number of element: ";
cin>>n;

int arr[n];
cout<<"Enter " <<n <<" element: ";
for(int i=0;i<n;i++){
        cin>>arr[i];
}
int key;
cout << "Enter element to search: ";
cin >> key;

int result = LinearSearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}

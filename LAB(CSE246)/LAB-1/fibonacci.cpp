#include<bits/stdc++.h>
using namespace std;

    int fibonacci(int n) {

    if(n<=1){
        return n;
    }
    int l=fibonacci(n-1);
    int s=fibonacci(n-2);
    return l+s;
    }
    int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<fibonacci(i)<< " ";
    }
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<=sqrt(n);i++){
    if(n%i==0){
        if(i==n/i){
            c++;
        }else{
        c+=2;
        }
    }

    }
    cout<<c<<endl;
}

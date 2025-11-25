#include <bits/stdc++.h>
using namespace std;
int coinCNG(int coin[],int n,int amot){
    sort(coin,coin+n,greater<int>());
    int c=0;

    for(int i=0;i<n;i++){
        if(amot==0){
            break;
        }
        int take=amot/coin[i];
        c+=take;
        amot-=take*coin[i];
    }

    if(amot!=0){
        return -1;
    }
return c;
}
int main(){
    int coin[]={ 1, 2 ,5};
    int n=3;

    int amot;
    cout<<"Enter amount: ";
    cin>>amot;

    int r=coinCNG(coin,n,amot);
    if(r!=-1)
        cout<<"Minimum number of coins: "<< r<<endl;
    else
        cout<<"sorry";
    return 0;
}

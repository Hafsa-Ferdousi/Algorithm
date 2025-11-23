#include <bits/stdc++.h>
using namespace std;

struct activity{
    int start;
    int finish;
};

bool activitys(activity a , activity b){
   return a.start<b.finish;

}

void actselection(vector<activity> &ac){
    sort(ac.begin(),ac.end(),activitys);

    cout<<"Selected activity: ";

    cout<<"(Start time: " <<ac[0].start <<"Finish time: "<<ac[0].finish<<")\n";

    int last=0;
    for(int i=0;i<ac.size();i++){
       if(ac[i].start >=ac[last].finish) {
        cout<<"(Start time: " <<ac[i].start <<"Finish time: "<<ac[i].finish<<")\n";
        last =i;
       }
    }


}
int main(){
    int n;
    cout<<"enter the number of activity: \n";
    cin>>n;
    vector<activity> ac(n);
    cout<<"enter the start and finish time: \n";
    for(int i=0;i<n;i++){

       cin>>ac[i].start >>ac[i].finish;

    }






actselection(ac);








}



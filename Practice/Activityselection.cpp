#include <bits/stdc++.h>
using namespace std;

struct Activity{
    int start,finish;
};

bool compareActivities(Activity a ,Activity b){
    return a.finish<b.finish;
}

void Activityselection(vector<Activity> &Activites ){

    sort(Activites.begin(), Activites.end(),compareActivities);
    cout <<"selected Activities : \n";

    cout<< "(start: " << Activites[0].start <<" Finish: " <<Activites[0].finish <<")\n";

    int lastselect=0;
    for(int i=0;i<Activites.size();i++){
       if(Activites[i].start>=Activites[lastselect].finish) {
        cout<< "(start: " << Activites[i].start <<" Finish: " <<Activites[i].finish <<")\n";
        lastselect=i;
       }
    }

}

int main(){
    int n;
    cout <<"enter the number of activities: ";
    cin>>n;
    vector<Activity> Activites(n);

    cout <<"enter the start and finish time: \n";
    for(int i=0;i<n;i++){

       cin>> Activites[i].start >> Activites[i].finish ;



}
 Activityselection(Activites);
}

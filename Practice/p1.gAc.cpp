#include <bits/stdc++.h>
using namespace std;

struct Activity{
    int start;
    int finish;

};
bool compareAc(Activity a,Activity b){
   return  a.finish<b.finish;
}
void activitySelection(vector<Activity> &activites){
 sort(activites.begin(),activites.end(),compareAc);

 cout<<"Selected Activity: ";

 cout<< "(start: "<<activites[0].start <<" Finish: " <<activites[0].finish<<")\n";

 int last=0;
 for(int i=0;i<activites.size();i++){
        if(activites[i].start>=activites[last].finish){
   cout<< "(start: "<<activites[i].start <<" Finish: " <<activites[i].finish<<")\n";
    last=i;


 }
}


}

int main(){
    int n;
    cout<<"enter the activity ";

    cin>>n;
    vector<Activity> activites(n);
    cout << "enter the star and finish time: ";

    for(int i=0;i<n;i++){
       cin >>activites[i].start >>activites[i].finish;
    }






activitySelection(activites);












}

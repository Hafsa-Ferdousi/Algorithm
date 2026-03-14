#include <bits/stdc++.h>
using namespace std;

struct node{
    int x,y,g,h;
    int f()
    {return g+h;}
};

int heuristic(int x1,int y1,int x2,int y2){
    return abs(x1-x2)+abs(y1-y2);
}

int main(){
    node s={0,0,0,0};
    node g={2,3,0,0};



cout<< "Heuristic Distance: " << heuristic(s.x,s.y,g.x,g.y);
}

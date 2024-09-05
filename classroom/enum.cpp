#include<bits/stdc++.h>
using namespace std;
int main(){
    enum days{sun,mon,tues};
    days day1,day2;
    day1=sun;
    day2 = mon;
    if(day1>day2){
        cout <<"day1 comes after day2";
    }
    else{
        cout <<"day1 before after day2";
    }
}
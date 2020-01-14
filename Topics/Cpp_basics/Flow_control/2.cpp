#include<iostream>
using namespace std;
int main()
{
/*learning : strong enum vs conventional enums*/
enum class day {mon=0,tue,wed,thu,fri,sat,sun};
enum direction {north , south , east ,west};/*conventional enum as used in c*/
direction d;
d=north;
if(d==0)
{
cout<< "north direction using conventional macros"<<endl;
}
day g;
/*  g=0; gives an error because day is strong enum !*/
g=day::tue;/*be classy its c++*/
/*if (g=tue) again error bieng classless!!*/
if(g==day::tue)/*perfectly fine*/
{
cout<<"hey its tuesday!!"<<endl;
}

}

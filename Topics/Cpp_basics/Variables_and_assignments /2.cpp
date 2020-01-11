#include<iostream>
using namespace std;
int main()
{
/*Learning: to notice here is basic naming conventions and input output in c++*/
int _;/*valid*/
_=5;/*valid*/
int _abc; /*valid*/
/*int 1a; invalid*/
/* int 12; invalid*/
int abc_12;/*valid*/

cout<<_<<endl;/*cout used to print any variable to stdout relatable to printf in C */
cout<<"enter a value abc"<<endl;
cin>>abc_12;/*cin used to input any value from stdin, notice the arrow direction*/
cout<<abc_12<<endl;


}

#include<iostream>
using namespace std;
void fun(bool b);
int main()
{
 int a;
 int b;
 int c;
 bool d;
 bool r;
 bool p;
 a=1;
 b=1;
 c=1;
 d=c&&b;
 fun(d);
 r=c&&b&&a==b;/*check the precedence*/
 p=c==c&&b&&a<c;/*check the precedence*/
 fun(r);
cout<<"r "<<r<<endl;
cout<<"p "<<p<<endl;

}
void fun(bool b)
{

 if(b)
 {
  cout<<"true"<<endl;
 }
 else
 {
  cout<<"false"<<endl;
 }

}

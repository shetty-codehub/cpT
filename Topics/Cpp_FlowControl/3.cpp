
/*learning: about scope of extern storage class*/
/*its more than what is here but its enough for time bieng lets discover more in future topics*/
#include<iostream>
using namespace std;
void fun(void);
//int a;
extern int a;/*definition or declaration?*/
int main()
{
 a=11;/*what happens to this value is 1$ question haha!!!*/
 if(a>0)
 {
 int b=14;/*learning scope of variables*/
 b=a+10;
 cout<<b<<endl;
 }
  int b=15;
 cout<<b<<endl;
 
fun();
}
int a=10;
void fun(void)
{
//int a=100;/**activate to see changes and determine scope i hope now its clear*/
cout<<a<<"::inside fun"<<endl;

}

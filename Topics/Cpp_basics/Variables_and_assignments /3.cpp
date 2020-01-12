#include<iostream>
using namespace std;
void fun(void);
int h;
int main(void)
{
/*Learning : assignment statements*/ 
 int a(5);/*notice difference in assignment from conventional C */
 int b;
 cout<<a<<endl;
 cout<<b<<endl;
 cout<<h<<endl;
 fun();
}
void fun(void)
{
int f;/*garbage value */
cout<<f<<endl;
}

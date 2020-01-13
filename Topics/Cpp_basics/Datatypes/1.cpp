#include <limits>
#include <float.h>
#include <iostream>
using namespace std;
int main()
{
 unsigned int a;
long  long int b;/*another long is useless is what i feel*//*its acting like unsigned! */
 int z;
 long int w;
 double c;
 double d;
a=4294967295;/*perfectly fine*/
b=(-1)*a;/*okay still works*/
w=a;
z=a;/*you could guess what happens here */
cout<<"a: "<<a<<endl;/*right*/
cout<<"w: "<<w<<endl;/*right*/
cout<<"b: "<<b<<endl;/*right*/
cout<<"z: "<<z<<endl;/*something is wrong */
c=DBL_MAX;
d=DBL_MIN;
cout<<"c: "<<c<<endl;/*right*/
cout<<"d: "<<d<<endl;/*right*/
}

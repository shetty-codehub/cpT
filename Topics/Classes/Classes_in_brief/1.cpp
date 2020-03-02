#include<iostream>
using namespace std;
#define PI 3.14
class myclass
{
private:
int radius;
public :
float area()
{
 return 2*PI*radius;
}
void setradius(int r){radius=r;}
};


int main()
{
 myclass m;
 m.setradius(10);
 cout<< m.area()<<endl;
 
 
}

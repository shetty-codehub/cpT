#include<iostream>
using namespace std;
int main()
{
int a=10;
int p=10;
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(5);/*thisMagic formula helps us to set the output precision of the cout*/
/*you can even use a variable(unsigned int ) in the place of 5, Magics are not real we will reveal them soon!*/  
double price;
price = 75.5056;
cin>>a>>p;
cout<<price<<" "<<a<<endl;

}

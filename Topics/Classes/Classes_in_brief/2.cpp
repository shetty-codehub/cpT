
#include<iostream> 
using namespace std; 
  
class Complex { 
private: 
    int real, imag; 
public: 
    Complex(int r = 0, int i =0)  {real = r;   imag = i;} 
      
    // This is automatically called when '+' is used with 
    // between two Complex objects 
    Complex operator + (Complex const &obj1,Complex const &obj2) { 
         Complex res; 
//	 cout<<real<<endl;
//	 cout<<imag<<endl;
         res.real = obj2.real + obj1.real; 
         res.imag = obj2.imag + obj1.imag; 
         return res; 
    } 
    void print() { cout << real << " + i" << imag << endl; } 
}; 
  
int main() 
{ 
    Complex c1(10, 5), c2(2, 4); 
    Complex l1(13,14),l2(3,5);
   // Complex c3 = c1 + c2; // An example call to "operator+" 
   // Complex c4 = c3 +l2; // An example call to "operator+" 
    c1.print(); 
    c2.print(); 
   // c3.print(); 
    l1.print(); 
    l2.print(); 
   // c4.print(); 
} 


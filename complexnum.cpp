#include<iostream>
using namespace std;

class Complex{
int real;
int imag;
public:
    void get_data(){
    cout<<"Enter read data: ";
    cin>>real;
    cout<<"Enter imaginary data: ";
    cin>>imag;
    }
void sum(Complex c1, Complex c2){
real = c1.real + c2.real;
imag = c1.imag + c2.imag;
}
void display_sum(){
cout<<"The sum is: "<<endl;
cout<<real<<" + i "<<imag<<endl;
}
};
int main(){
Complex c1,c2,c3;
c1.get_data();
c2.get_data();
c3.sum(c1,c2);
c3.display_sum();
return 0;
}

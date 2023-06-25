//Adding complex numbers of two different calsses
#include <iostream>
using namespace std;

class imag;
class real{
	int real1, real2;
	public:
		void getdata(int x, int y){
			real1 = x;
			real2 = y;
		}
		friend void add(real, imag);
};
class imag{
	int imag1, imag2;
	public:
		void getdata(int a, int b){
			imag1 = a;
			imag2 = b;
		}
		friend void add(real, imag);
};
void add(real r1, imag i1){
	int realSum = r1.real1 + r1.real2;
	int imagSum = i1.imag1 + i1.imag2;
	cout<<"The sum is: "<<realSum<<" + "<<imagSum<<"i"<<endl;
}
int main(){
	int a,b,c,d;
	cout<<"Enter first real and imag numbers: "<<endl;
	cin>>a>>b;
	cout<<"Enter second real and imag numbers: "<<endl;
	cin>>c>>d;
	real obj1;
	obj1.getdata(a,c);
	imag obj2;
	obj2.getdata(b,d);
	add(obj1,obj2);
	return 0;
}

//Overloading unary (-) operator using friend function

#include<iostream>
using namespace std;

class home{
	int x;
	int y;
	public:
		home(int a, int b) {
			x =a ;
			y = b;
		}
		void display(){
			cout<<"Value of x is "<<x<<endl;
			cout<<"Value of y is "<<y<<endl;
		}
		friend home operator -(home obj);
};
home operator -(home obj){
	home temp(2,5);
	temp.x = -obj.x;
	temp.y = -obj.y;
	return temp;
}
int main(){
	home obj1(2,5);
	obj1.display();
	home obj2 = -obj1;
	obj2.display();
	return 0;
}

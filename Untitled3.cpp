#include<iostream>
using namespace std;

class B;
class A{
	int num1;
	public:
	A(int x){
		num1 =x;
	}
	friend int fun(A,B);
};
class B{
	int num2;
	public:
	B(int y){
		num2 = y;
	}
	friend int fun(A,B);
};
int fun(A x, B y){
	int sum = x.num1+y.num2;
	return sum;
}
int main(){
	A obj1(5);
	B obj2(5);
	int sum = fun(obj1,obj2);
	cout<<"The sum is: "<<sum;
	return 0;
}

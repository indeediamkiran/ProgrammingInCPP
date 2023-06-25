//swap two numbers using friend function;
#include<iostream>
using namespace std;

class B;
class A {
int a;
	public:
		A(){
			a = 5;
		}
		friend void swap(A,B);	
};		
class B{
	int a;
	public:
		B(){
			a = 10;
		}
		friend void swap(A ,B);	
};
void swap(A obj1,B obj2){
int temp;
	cout<<"Before swapping value of a is "<<obj1.a<<endl;
	cout<<"Before swapping value of   b is "<<obj2.a<<endl<<endl;
	temp=obj1.a;
	obj1.a=obj2.a;
	obj2.a=temp;		
			
	cout<<"Value of   a after swapping is "<<obj1.a<<endl;
	cout<<"Value of   b after swapping is "<<obj2.a<<endl;
		}

int main(void){
	A a1;
	B b2;
	swap(a1,b2);
	
	
	return 0;
}

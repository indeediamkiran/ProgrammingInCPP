//Function overriding
#include<iostream>
using namespace std;
class A{
	public:
	void fun(){
		cout<<"k xa ?"<<endl;
	}
};
class B{
	public:
	void fun(){
		cout<<"thik xa..."<<endl;
	}
};
int main(){
	A obj2;
	obj2.fun();
	
	B obj;
	obj.fun();
	return 0;
}

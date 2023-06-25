#include<iostream>
using namespace std;

class A{
	int a;
	public:
		A(int b){
			a = b;
		}
		void disp(){
			cout<<"Ament: "<<a<<endl;
		}
		A operator ++(){
			A ab(1);
			ab.a = ++a;
			return ab;

		}
};
int main(){
	A obj(9);
	obj.disp();
	A objj = ++obj;

	objj.disp();
	return 0;
}

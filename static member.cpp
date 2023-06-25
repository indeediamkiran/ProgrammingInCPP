#include<iostream>
using namespace std;

class Kiran{
	int a;
	static int x;
	public:
		void get(int z){
			x=z;
		}
		void display(){
			cout<<"value of x is: "<<x<<endl;
		}
		
};
int Kiran :: x;
int main (){
	Kiran obj1, obj2;
	obj1.get(4);
	obj1.display();
	return 0;
}

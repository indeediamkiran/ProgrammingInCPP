/*
//type conversion class to class
#include<iostream>
using namespace std;

class A{
	int cm;
	public:
		int give(int x){
			cm = x;
		}
		void display(){
			cout<<"The output is: "<<cm<<endl;
		}
};
class B{
	int meter, cm;
	public:
		void give(){
			cout<<"Enter:"<<endl;
			cin>>meter;
		}
		operator A(){
			cm = 100 * meter;
			A a1;
			a1.give(cm);
			return a1;
		}
};
int main(){
	B b1;
	b1.give();
	A a2;
	a2 = b1;
	a2.display();
	return 0;
		
}*/

#include<iostream>
using namespace std;

class A{
	int meter;
	public:
		int getdata(){
			cout<<"Enter: "<<endl;
			cin>>meter;
		}
		int getmeter(){
			return meter;
		}
		
};
class B{
	int cm;
	public:
		B(){
		}
		B(A a1){
			int x = a1.getmeter();
			cm = 100 * x;
		}
		void display(){
			cout<<"The output is: "<<cm;
		}
};
int main(){
	A a2;
	a2.getdata();
	B b1;
	b1 = a2;
	b1.display();
}

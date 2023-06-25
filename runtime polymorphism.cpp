//Runtime Polymorphism
#include<iostream>
using namespace std;

class car{
	public:
		virtual void model(){
		cout<<"Model: General Car."<<endl;
		}
};
class supercar: public car{
	public:
		void model(){
			cout<<"Model: Supercar."<<endl;
		}
};
class wondercar:public car{
	public:
		void model(){
			cout<<"Model: Wondercar."<<endl;
		}
};
void get_data(car *c){
	cout<<"Type: Vechicle."<<endl;
	c->model();
}
int main(){
	car *ptr1, *ptr2, *ptr3;
	car obj1;
	supercar obj2;
	wondercar obj3;
	ptr1 = &obj1;
	ptr2 = &obj2;
	ptr3 = &obj3;
	get_data(ptr1);
	get_data(ptr2);
	get_data(ptr3);
	return 0;
}

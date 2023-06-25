#include<iostream>
using namespace std;

class first{
	int bytes;
	public: first (){}
		first(int x){
			bytes = x;
		}
		int get(){
			return bytes;
		}
};

class second{
	int kb;
	public:
		second(){
		}
	second(first obj){
			int x = obj.get();
			kb = x*1024;
		}
		void display(){
			cout<<"it is equal to "<<kb<<" bytes"<<endl;
		}
};
int main(){
	first obj2(5);
	second obj3;
	obj3 = obj2;
	obj3.display();	
	return 0;
}

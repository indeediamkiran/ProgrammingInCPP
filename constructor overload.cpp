#include <iostream>
using namespace std;

class Sum{
	int x, y;
	public:
		
	Sum(){
		x =0;
		y=0;
	}
	Sum(int a){
		x = a;
		y = 0;
	}
	Sum(int c,int d){
		x = c;
		y = d;
	}
	void display_data();
};
void display_data();
void Sum :: display_data(){
	cout<<"x is: "<<x<<endl;
	cout<<"y is: "<<y<<endl;
}
int main(){
	Sum obj1;
	Sum obj2(5);
	Sum obj3(5 , 6);
	obj1.display_data();
	obj2.display_data();
	obj3.display_data();
	
	return 0;
}

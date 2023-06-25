// This pointer
#include <iostream>
using namespace std;
class A{
	int x;
	int y;
	public:
void get_data(int x , int y){
this ->	x = x;
this ->	y = y;
}
void display_data(){
	cout<<"Value of x: "<<x<<endl;
	cout<<"Value of y: "<<y<<endl;
}
};
int main(){
	A obj1;
	obj1.get_data(5,6);
	obj1.display_data();
	return 0;
}

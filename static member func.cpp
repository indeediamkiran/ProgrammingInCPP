#include<iostream>
using namespace std;

class Model{
	int x;
	static int y;
	public :
	static void get(int a){
		y = a;
	}
	void display(){
		cout<<"The value of y is: "<<y<<endl;
	}
};
int Model :: y;
int main(){
	Model obj1, obj2;
	Model :: get(5);
	obj1.display();
	obj1.get(5);
	obj2.display();	
	return 0;
}

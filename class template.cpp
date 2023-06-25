#include<iostream>
using namespace std;
template <class T>
class addition{
	T x , y;
	public: 
	void getdata(T a, T b){
		x = a;
		y = b;
	}
	void display(){
		cout<<"Sum is: "<<x+y<<endl;
	}
};
int main(){
	addition <int> a1;
	a1.getdata(5,6);
	a1.display();
	addition <float> a2;
	a2.getdata(8.2,9.1);
	a2.display();
	addition <string> a3;
	a3.getdata("Kiran ", "Pokharel");
	a3.display();
	return 0;
}

#include <iostream>
using namespace std;

template <class T1 , class T2>
class addition{
	T1 x;
	T2 y;
	public:
		void getdata(T1 a, T2 b){
			x = a;
			y = b;
		}
		void display(){
			cout<<x<<" & "<<y<<endl;
		}
};

int main(){
	addition <int , string> obj;
	obj.getdata(5, "Kiran");
	obj.display();
	addition <int, float> obj2;
	obj2.getdata(9,4.6);
	obj2.display();
	return 0;
}

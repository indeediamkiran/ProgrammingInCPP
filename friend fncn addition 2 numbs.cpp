#include<iostream>
using namespace std;

class second;
class first{
	int num1;
	public:
	first(int x){
		num1 = x;
	}
	friend int fun(first, second);
	};
	
class second{
	int num2;
	public:
	second(int y){
		num2 = y;
	}
	friend int fun(first, second);

};
int fun(first x, second y){
	int sum = x.num1 + y.num2;
	return sum;
}
int main(){
	int i,u;
	cout<<"Enter i and u: "<<endl;
	cin>>i>>u;
	first obj1(i);
	second obj2(u);
	int sum = fun(obj1, obj2);
		cout<<"The sum is: "<<sum<<endl;
	
	return 0;
}

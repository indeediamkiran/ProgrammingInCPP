#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	cout<<"Enter a and v: "<<endl;
	cin>>a>>b;
	c = a+b;
	d = a-b;
	try {
		if(d!=0){
			cout<<"Result = "<<c/d<<endl;
		}
		else 
		throw (d);
	}
	catch (int x){
		cout<<"Exception caught: Divided by zero"<<endl;
	}
	cout<<"End";
	return 0;
}

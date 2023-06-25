#include<iostream>
using namespace std;

template <class T1, class T2> void add(T1 num1, T2 num2){
	
	cout<<num1<<" & "<<num2<<endl;
}
int main(){
	cout<<"Integer and floating values: "<<endl;
	add(5,7.89);
	cout<<"Floating point and String: "<<endl;
	add(34.545, "Kiran");
	return 0;
}

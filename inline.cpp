#include<iostream>
using namespace std;

inline int sum(int a, int b){
 	return a+b;
 }
int main (){
	int a, b;
	cout<<"Enter a and b: "<<endl;
	cin>>a>>b;
	cout<<"The sum is: "<<sum(a,b);
	return 0;
}

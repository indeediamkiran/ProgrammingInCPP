#include<iostream>
using namespace std;

inline void fun();

void fun(){
	cout<<"You are in fun";
}

int main(){
	cout<<"You are in main"<<endl;
	fun();
	return 0;
}


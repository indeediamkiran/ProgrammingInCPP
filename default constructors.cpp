/*
#include<iostream>
using namespace std;

class A{
	int x;
	public :
	A(){
	cout<<" x = 190";
	}
};
int main(){
	A obj;
	return 0;
}

#include <iostream>
using namespace std;
class A{
	public:
		A (int a){
	cout<<"x = "<<a;	
		}
};
int main(){
	A obj(5);
	return 0;
} 


#include<iostream>
using namespace std;

class A{
	int x;
	public :
	A(){
	cout<<"x=198"<<endl<<endl;
	}
	A(A &obj){
		cout<<"I am called ?"<<endl<<endl;
		x = obj.x;
	}	
};
int main(){
	A obj1;
	A obj2(obj1);
	A obj3 = obj1;
	return 0;
} */

#include<iostream>

using namespace std;

class A{
	public:
	A(){
	cout<<"x = 10"<<endl;
	}
	
	A(A &obj){
		cout<<"I am copy constructor and I am called. "<<endl<<endl;
	}
};
int main (){
	A obj1;
	A obj2(obj1);
	A obj3 = obj1;	
	return 0;
}

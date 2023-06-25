#include<iostream>
using namespace std;

class Student{
	public:
	Student(){
		cout<<"Constructor called."<<endl;
	}
	~Student(){
		cout<<"Destructor called."<<endl;
	}	
};
int main(){
	Student obj;
	return 0;
}

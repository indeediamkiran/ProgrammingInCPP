#include<iostream>

using namespace std;

class Teacher{
	int tid;
	string subject;
	public:
	void read_data();
	void display_data();
};

void read_data();

void display_data();

void Teacher :: read_data(){
	cout<<"Enter Tid: "<<"Subject"<<endl;
	cin>>tid>>subject;
}
void Teacher :: display_data(){
	cout<<tid<<subject;
}

int main(){
	Teacher obj1, obj2;
	obj1.read_data();
	obj2.read_data();
	
	obj1.display_data();
	obj2.display_data();
	
	return 0;
}

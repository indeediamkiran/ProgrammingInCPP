#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	int sem;
	int rollnum;
	char section;
void getdata(){
	cout<<"Enter name sem rollnum section "<<endl;
	cin>>name>>sem>>rollnum>>section;
}
void displaydata(){
	cout<<name<<endl<<sem<<endl<<rollnum<<endl<<section<<endl;
}
};
int main(){
	Student obj;
	obj.getdata();
	obj.displaydata();
	return 0;
}

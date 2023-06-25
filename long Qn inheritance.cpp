/*
Create a class called Person with suitable data 
members to represent their name and age. Use member functions to initialize 
and display these information. Derive Student and Employee from the Person 
class with their unique features. Initialize objects of these classes using 
constructor and display the information.

*/

#include<iostream>
using namespace std;

class person{
	string name;
	int age;
	public:
		void get_data(string n, int a){
			name = n;
			age = a;
		}
		void display(){
			cout<<"Name "<<name<<endl;
			cout<<"Age "<<age<<endl;
		}
};

class student : public person {
	int rollnum;
	public:
		student(){
			
		}
		student(string name, int age, int r){
			person::get_data(name,age);
			rollnum = r;
		}
	void	display(){
			person::display();
			cout<<"Roll num "<<rollnum<<endl;
		}
};
class employee : public person {
	int i;
	public:
		employee(){
		}
		employee(string name,int age, int id){
			person::get_data(name, age);
			i = id;
		}
	void	display(){
			person::display();
			cout<<"ID "<<i<<endl;
		}
};

int main(){
	student p1("Kiran", 20, 46);
	employee e1("Savin", 21, 45);
	
	cout<<"Student info..."<<endl;
	p1.display();
	
	cout <<"Enployee info..."<<endl;
	e1.display();
	return 0;	
}

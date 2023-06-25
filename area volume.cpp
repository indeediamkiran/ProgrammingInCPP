#include<iostream>
using namespace std;

class Measure{
	float length;
	float breadth;
	float height;
	float area;
	float volume;
public:	
	void get_data(){
	cout<<"Enter length,breadth,height: "<<endl;
	cin>>length>>breadth>>height;
	}
void calculate_area(){
	 area = length * breadth;
}
void calculate_volume(){
	 volume = length * breadth * height;
	
}
void display_data(){
	cout<<"Area is: "<<area<<endl;
	cout<<"Volume is "<<volume<<endl;
}
};
int main(){
	Measure obj;
	obj.get_data();
	obj.calculate_area();
	obj.calculate_volume();
	obj.display_data();
	return 0;
}

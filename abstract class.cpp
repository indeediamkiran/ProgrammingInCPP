//Abstract class
#include<iostream>
using namespace std;
class shape{
	public:
		virtual void draw() =0 ;
};
class circle : public shape {
	public:
		void draw(){
			cout<<"Drawing circle..."<<endl;	
		}
};
class square : public shape{
	public:
		void draw(){
			cout<<"Drawing square..."<<endl;
		}
};
int main(){
	shape *ptr;
	circle c1;
	ptr = &c1;
	
	ptr -> draw();
	square s1;
	ptr = &s1;
	//(
	ptr ->draw();
	//OR
	(*ptr).draw(); //)
	
	return 0;
}

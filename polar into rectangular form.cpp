//polar co-ordinate into rectangular co-ordinate:
//first method
/*
#include<iostream>
#include<math.h>
using namespace std;

class polar{
	public:
	float radius;
	float angle;
	public:
		polar(){
		}
		polar(float r, float a){
			radius = r;
			angle = a;
		}
		void display(){
			cout<<"Polar form is: Radius = "<<radius<<" Angle = "<<angle<<endl<<endl;
		}
};
class rectangle{
	float x;
	float y;
	public:
		rectangle(){
		}
		rectangle(polar obj){
			x = obj.radius*cos(obj.angle);
			y = obj.radius*sin(obj.angle);
		}
		void display(){
			cout<<"Rectangular form is: X = "<<x<<" Y = "<<y<<endl;
		}
};
int main(){
	polar obj1(50, 45);
	obj1.display();
	rectangle obj2;
	obj2 = obj1;
	obj2.display();
	return 0;
}
*/

//second method


#include<iostream>
#include<math.h>
using namespace std;

class rectangle{
	float x,y;
	public:
		void getdata(float a, float b){
			x =a;y=b;
		}
		void display(){
			cout<<"The rectangular form after conversion is: "<<x<<" "<<y<<endl<<endl;
			
		}
};
class polar{
	int radius;
	float angle;
	public:
		void getdata(){
			cout<<"Enter radius and angle: "<<endl;
			cin>>radius>>angle;
		}
		operator rectangle(){
			float x = radius*cos(angle);
			float y = radius*sin(angle);
			rectangle r1;
			r1.getdata(x,y);
			return r1;
		}
	
};
int main(){
	polar p1;
	p1.getdata();
	rectangle r1;
	r1 = p1;
	r1.display();
	return 0;
}

#include<iostream>
using namespace std;
/*
class mass{
	int mg;
	public:
		mass(){
		}
		mass(int k){
			mg = 1000 * k;
		}
		void display(){
		cout<<	"The converted mass is: "<<mg<<endl;
		}
};
 
 
 

int main(){
	mass m1;
	float kg;
	cout<<"Enter mass in kg to convert in grams: "<<endl;
	cin>>kg;		//
	m1 = kg;
	m1.display();



	return 0;
}

*/


#include<iostream>
using namespace std;

class mass{
	int mg;
	public:
		mass(){
		cout<<"Enter mass to convert: "<<endl;
		cin>>mg;
		}
		
		operator int(){
			float m = mg * 1000;
			return m;
		}
};
 
 
 

int main(){
	mass m1;
	int kg;
	kg = m1;
	cout<<"Converted mass is: "<<kg;
	
	



	return 0;
}

/* #include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Enter a "<<endl;
	cin>>a;
	int &b = a;
	cout<<a<<endl<<b;
	a = 100;
	cout<<a<<endl<<b;
	a = 20;
	cout<<a<<endl<<b;
	return 0;
}

#include<iostream>
using namespace std;
 int interchanger(int &x,int &y){
 	int temp;
 	temp = x;
 	x = y;
 	y = temp;
 }

int main(){
	int a = 20, b = 30;
	
	cout<<"Before Interchange"<<endl;
	cout<<"Value of a: "<<a<<endl;
	cout<<"Value of b: "<<b<<endl;
	
	
	interchanger(a,b) ;
	cout<<"After Interchange"<<endl;
	cout<<"Value of a: "<<a<<endl;
	cout<<"Value of b: "<<b<<endl;
		
	return 0;
} 


*/

#include<iostream>

using namespace std;

int interchange (int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main (){
	int k = 102, p = 103;
	cout<<"Before Interchange: "<<endl<<k<<endl<<p<<endl<<endl<<"After Interchange: "<<endl;
	interchange(k,p);
	cout<<endl<<k<<endl<<p<<endl;
	
	return 0;
}

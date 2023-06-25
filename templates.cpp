//Templates in CPP
#include<iostream>
using namespace std;
template <class t> void add(t t1, t t2){
	t sum;
	sum = t1+t2;
	cout<<"The sum is: "<<sum<<endl;
}
int main(){
	cout<<"Calculate integers: "<<endl;
	add(5,6);
	cout<<"Calulate floating values: "<<endl;
	add(5.6,7.3);
	return 0;
}

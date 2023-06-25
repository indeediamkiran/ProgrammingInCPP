
#include<iostream>
using namespace std;

int add(int, int);

int main(){
	int a,b;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	cout<<"The sum is : "<<add(a,b);

}
int add(int x, int y){
	return (x+y);
}

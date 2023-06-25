
#include<iostream>
using namespace std;

class fibo{
	int a,b,c;
	public:
		fibo(){
			a=1;b=-1;c=a+b;
		}
		void show(){
			cout<<"c="<<c<<endl;
		}
		void operator ++(){
			a=b;b=c;c=a+b;
		}
};
int main(){
	fibo f1;
	int n,i;
	cout<<"Enter total series: "<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		f1.show();
		++f1;
	}
	return 0;
}

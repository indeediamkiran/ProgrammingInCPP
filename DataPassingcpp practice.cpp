#include <iostream>
using namespace std;
class thisclass {
	private :
		int a , b, c , d;
	public :
		int e, f, g;
		void setData (int h,int i,int j, int k);
		void getData(){
			cout <<"The value a is "<<a<<endl;
			cout <<"The value b is "<<b<<endl;
			cout <<"The value c is "<<c<<endl;
			cout <<"The value d is "<<d<<endl;
			cout <<"The value e is "<<e<<endl;	
			cout <<"The value f is "<<f<<endl;
			cout <<"The value g is "<<g<<endl;
		}
};
void thisclass :: setData (int h, int i, int j, int k){
	a = h;
	b = i;
	c = j;
	d = k;
	}
int main(){
	thisclass hey;
	hey.e = 5;
	hey.f = 6;
	hey.g = 7;
	hey.setData(1,2,3,4);
	hey.getData();
	return 0;
}

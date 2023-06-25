//multiple catch
#include<iostream>
using namespace std;
int main(){
	
	int a;
	cout<<"Enter the value of a: ";
	cin>>a;
	try{
		if(a == 0) throw int (a);
		else if(a == 1) throw float (a);
		else if(a == 2) throw char (a);
		cout<<"Number: "<<a;
		
	}
	catch (int i){
		cout<<"caught a integer value: "<<endl;
	}
	catch (float y){
		cout<<"Caught a floating value: "<<endl;
	}
	catch (char z){
		cout<<"Caught a charater: "<<endl;
	}
	cout<<"End"<<endl;
	return 0;
}

/*
#include<iostream>
using namespace std;

int main(){
	int num,A;
	cout<<"Enter the total number to store in an array: "<<endl;
	cin>>num;
	cout<<"Enter your numbers: "<<endl;
	int *ptr = new int[num]; // Memorey Allocated
	int i;
	for (i= 0; i < num ; i++){
		cin>>ptr[i];
	}
	
	cout<<"Your numbers are: "<<endl;
	for (i=0;i<num;i++){
		cout<< ptr[i] ;
	}
	delete[] ptr;
	return 0;
}
*/

#include<iostream>
using namespace std;

int main(){
	int num , i;
	cout<<"Enter total numbers to store: "<<endl;
	cin>>num;
	int *A = new int[num]; 
	cout<<"Enter "<<num<<" numbers: "<<endl;
	for(i=0;i<num;i++){
		cin>> A[i];
	}
	cout<<"Your numbers are: "<<endl;
	for(i=0;i<num;i++){
		cout<<A[i]<<endl;
	}
	delete[] A;
	return 0;
}

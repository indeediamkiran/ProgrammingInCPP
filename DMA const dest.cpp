//#include<iostream>
//using namespace std;
//class DMA{
//		int *p;
//		public:
//	DMA(){
//			p = new int;
//			cout<<"Memory allcoated: "<<endl;
//	}
//	~DMA(){
//		delete p;
//		cout<<"Memory dealloacted: "<<endl;
//	}
//	
//};
//
//int main (){
//	DMA obj;
//	return 0;
//}

#include<iostream>
using namespace std;

class kiran{
	int *p;
	public:
		kiran(){
			p = new int;
			cout<<"Mmry allocated."<<endl;
		}
		~kiran(){
			delete p;
			cout<<"Mmry deallocated. "<<endl;
		}
};
int main(){
	kiran obj;
	return 0;
}

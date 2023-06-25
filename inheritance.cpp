//
////Single inheritance
//#include<iostream>
//using namespace std;
//
//class A{
//	public:
//		A(){
//	cout<<"Esh"<<endl;
//}
//};
//class B : public A{
//	public:
//		B(){
//	cout<<"Psh"<<endl;
//}
//};
//int main(){
//	B obj;
//	return 0;
//}
//

//
//
//
//
//
////Multiple Inheritance
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		void display(){
//			cout<<"Esh"<<endl;
//		}
//};
//class B{
//	public:
//	void display(){
//		cout<<"Psh"<<endl;
//	}
//};
//class C: public A, public B{
//	public:
//		void distas(){
//			cout<<"Esh Psh ??"<<endl;
//		}
//};
//int main(){
//	C obj , obj2;
//	obj.A::display(); //solution to ambugity
//	obj.B::display(); //solution to ambugity
//	return 0;
//}
//
//
//
////
//
////Multi-Level Inheritance
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		A(){
//			cout<<"Hehe"<<endl;
//		}
//};
//class B : public A{
//	public:
//		B(){
//			cout<<"Huhu"<<endl;
//		}
//};
//class C : public B{
//	public:
//		C(){
//			cout<<"Haha"<<endl;
//		}
//};
//int main(){
//	C obj;
//	return 0;
//}
////
////
//
//
////Haeraricle Inheritance
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		A(){
//			cout<<"Hey"<<endl;
//		}
//};
//class B: public A{
//	public:
//		B(){
//			cout<<"Yes ?"<<endl;
//		}
//};
//class C : public A{
//	public:
//		C(){
//			cout<<"Nothing..."<<endl;
//		}
//}; 
//int main(){
////	A obj1;
////	B obj2;
//	C obj;
//	return 0;
//}
//
//
//


// Hybrid Inheritance
#include<iostream>
using namespace std;
class A{
 public: 
	A(){
		cout<<"Wanna Go ?"<<endl;
	}
};
class B : virtual public A{
	public:
		B(){
			cout<<"With you ?"<<endl;
		}
};
class C : virtual public A{
	public:
		C(){
			cout<<"No way"<<endl;
		}
};
class D : public B, public C{
	public:
		D(){
			cout<<"how"<<endl;
		}
};

int main(){
	D obj;
	return 0;
}


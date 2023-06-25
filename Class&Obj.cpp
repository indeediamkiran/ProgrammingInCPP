#include<iostream>
using namespace std;
class author{
	string name;
	string qualification;
	public:
		void getdata(){
			cout<<"Enter name and qualificaton: "<<endl;
			cin>>name>>qualification;
		}
		void putdata(){
			cout<<"Name is "<<name<<endl<<endl;
			cout<<"Qualification is "<<qualification<<endl<<endl;
		}
};
class publication{
	string pname;
	public:
		void getdata(){
			cout<<"Enter publication "<<endl;
			cin>>pname;
		}
		void putdata(){
			cout<<"Publication is "<<pname<<endl<<endl;
		}
};
class book: public author, public publication{
	string title;
	float price;
	public:
		void getdata(){
			cout<<"Enter title and price "<<endl;
			cin>>title>>price;
		}
		void putdata(){
			cout<<"Title is "<<title<<endl;
			cout<<"Price is "<<price<<endl;
		}
};
int main(){
	book b;
	b.author::getdata();
	b.author::putdata();
	b.publication::getdata();
	b.publication::putdata();
	b.getdata();
	b.putdata();
	return 0;
}

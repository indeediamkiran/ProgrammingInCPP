/*

//Program 1: Write a program to find the cube of given integer using inline 
//function

#include<iostream>
using namespace std;

inline int passnum(int x){
	return x*x*x;
}
int main(){
	int a;
	cout<<"Enter the integer to find cube: ";
	cin>>a;
	cout<<endl<<"The cube of given integer is: "<<passnum(a);
	return 0;
}






//Program 2: Design a class to represent a bank account with data members 
//name, account-number, account-type, and balance. Define functions to assign 
//initial values, to deposit an amount, to withdraw an amount after checking 
//balance, and to display the name and balance.




#include<iostream>
using namespace std;

class represent{
	string name;
	int acnt_num;
	string acnt_type;
	int balance;
		public:
			void assign(string na, int n, string typ, int b){
				name = na;
				acnt_num = n;
				acnt_type = typ;
				balance = b;
	}
	void display(){
		cout<<"Account name: "<<name;
		cout<<endl<<"Balance is: "<<balance;
	}
};
int main(){
	represent u1;
	u1.assign("Yadav",284392,"Deposit",10000);
	u1.display();
		return 0;
	}






//Program 3: Using a class write a program that receives inputs, principle 
//amount, time and rate. Keeping rate 8% as the default argument, calculate the 
//simple interest for three customers






#include<iostream>
using namespace std;

class SI{
	int principle, time, rate;
	public:
	void get_input(int p, int t, int r = 8){
		principle = p;
		time = t;
		rate = r;
	}
	
	void calculate(){
		cout<<"The simple interest is: "<<(principle*time*rate)/100;
	}
	
};
int main(){
	SI u1,u2,u3;
	u1.get_input(10000, 12);
	u2.get_input(20000, 5);
	u3.get_input(30000, 6);
	
	u1.calculate();
	u2.calculate();
	u3.calculate();	
	return 0;
}




//Program 4: Write a program according to the specification given below: 
//- Create a class Teacher with data members, tid & subject and member 
//functions for reading and displaying data members. 
//- Create another class Staff with data members, sid & position, and 
//member functions for reading and displaying for data members. 
//- Derive a class Coordinator from the Teacher and Staff and the class must 
//have its own data member department and member functions for reading 
//and displaying data members. 
//- Create two objects of the Coordinator class and read and display their 
//details. 





#include<iostream>
using namespace std;

class teacher{
	int tid;
	string subject;
	public:
		void read(int id, string sub){
			tid = id;
			subject = sub;
		}
		void display(){
			
			cout<<"Teacher ID is "<<tid<<endl;
			cout<<"Subject is "<<subject<<endl;
		}
		
};

class staff{
	int sid;
	string position;
	public:
		void read1(int ids, string post){
			sid = ids;
			position = post;
		}
		void displace(){
			cout<<"Staff ID is "<<sid<<endl;
			cout<<"Position is "<<position<<endl;
		}
};

class coordinator : public teacher, public staff {
	
	string department;
	public:
		void read2(int id, string sub, int ids, string post, string d){
			teacher :: read(id,sub);
			staff :: read1(ids, post);
			department = d;
		}
	void displayy(){
		teacher :: display();
		staff :: displace();
		cout<<"Coordinator department is: "<<department<<endl;
	}
};
int main(){
	
	coordinator u1, u2;
	u1.read2(12, "C++", 10, "CEO", "Computer");
	u2.read2(10, "Physics", 19, "Worker","Civil")
	u1.displayy();
	u2.display();
	return 0;
}





//Program 5: Create a class called Mountain with data members name, height, 
//location, a constructor initializes the members to the values passed to it as 
//parameters, a function called CmpHeight( ) to compare two objects and 
//DisplayInf( ) to display the information of Mountain. In main, create two objects 
//of the class mountain and print the information of the mountain which is of 
//greatest height.







#include<iostream>
using namespace std;

class mountain{
	string name;
	int height;
	string location;
	public:
		void get_data(string n, int h, string l){
			name = n;
			height = h;
			location = l;
		}
				
		
		
		void display_inf(){
			cout<<"Name: "<<name<<endl;
			cout<<"Height: "<<height<<endl;
			cout<<"Location: "<<location<<endl;
		}
		
		void cmpHeight(mountain n1, mountain n2){
			if(n1.height > n2.height){
				cout<<endl<<endl<<n1.name<<" is the highest."<<endl;
				
			}
			else
			cout<<endl<<endl<<n2.name<<" is highest mountain."<<endl;
		}
};
int main(){
	mountain m1, m2,m;
	m2.get_data("Everest", 8848, "Nepal");
	m1.get_data("K2", 8611, "Pakistan");
	
	m1.display_inf();
	m2.display_inf();
	

	m.cmpHeight(m2,m1);
	
	return 0;
}





//Program 6: Write a program to input two vectors coordinates from a base class 
//named ‘Base’. Class ‘Derived’ inherits all the properties of class Base. Class 
//‘Derived’ must contain a function named add_vector( ) that add the two vectors 
//input from the base class and finally display the result from a function 
//display() that is friend with the base class.

	
	
	
	
#include <iostream>
using namespace std;
class derived;
class base
{
public:
    int x;
    int y;
    void input()
    {
        cout << "Enter x-axis and y-axis" << endl;
        cin >> x;
        cin >> y;
    }
    friend void display(base);
};
class derived : public base
{
public:
    void add_vector(base &o1, base &o2)
    {
        o1.input();
        o2.input();
        o1.x += o2.x;
        o1.y += o2.y;
    }
};
void display(base o1)
{
    cout << "Sum of two vector is:" << o1.x << "i+" << o1.y << "j" << endl;
}

int main()
{
    base o1, o2, o3;
    derived obj;
    obj.add_vector(o1, o2);
    display(o1);
    return 0;
}





//Program 7: Create a class called Employee with data member Code, Name, 
//Address and Salary. Create a constructor to initialize the member of the class. 
//Also create another constructor so that we can create an object from another 
//object. Define member function display( ) to display the information of the 
//class.






#include<iostream>
using namespace std;

class employee{
	int code, salary;
	string name, address;
	public:
		employee(){
			
		}
		employee(int c, string n, string a, int s){
			code = c;
			salary = s;
			name = n;
			address = a;
		}
		void display(){
			cout<<"Code: "<<code<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Address: "<<address<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
};
int main(){
	employee e1(234, "Vairav", "Kathmandu",10000);
	e1.display();
	return 0;
}





//Program 8: Write a program to create a class called Room in which data items 
//are length, breadth and height. Create an array of objects in the room. And 
//finds its area and volume. 






#include<iostream>
using namespace std;

class room{
	float length, breadth, height;
	public:
		void display(float l, float b, float h){
				length = l;
			breadth = b;
			height = h;
			cout<<"Area is: "<<length*breadth<<endl;
			cout<<"Volume is: "<<length*breadth*height<<endl;
		}
		
};
int main(){
	room r1[3];
	r1[0].display(1,2,3);
	r1[1].display(4,5,6);
	r1[2].display(7,8,9);
	return 0;
}






//Program 9: Create a class Account with data members acc no, balance, and 
//min_balance(static). 
//- Include methods for reading and displaying values of objects 
//- Define static member function to display min_balance 
//- Create array of objects to store data of 5 accounts and read and display 
//values of each object.






#include<iostream>
using namespace std;

class account {
	int accno, balance;
	static int min_balance;
	public:
	void read(){
	cout<<"Acnt number: "<<endl;
	cin>>accno;
	cout<<"Balance: "<<endl;
	cin>>balance;	
	cout<<"Minimum balace: "<<endl;
	cin>>min_balance;
	}
	void display(){
		cout<<"Accno and balance is: "<<accno<<" "<<balance<<endl;
	}
	static void display1(){
		cout<<"Minimum balance is: "<<min_balance<<endl;
	}
};
int account :: min_balance  = 120;
int main(){
	account obj[3], obj2;
	int i;
	for(i = 0; i<3; i++){
		obj[i].read();
	}
	for(i = 0;i<3;i++){
		obj[i].display(); 
	}
	obj2.display1();
	return 0;
}






// Program 10          ****Firgure Given****
//Write a C++ program to represent the above inheritance scheme. Also write a 
//main() function to test the classes, Manager and Computer Operator, by 
//creating their objects, taking input and displaying the corresponding values.






#include<iostream>
using namespace std;

class employee{
	string name;
	int id;
	public:
		void getdata(string n, int ids){
			name = n;
			id = ids;
		}
		void putdata(){
			cout<<"Name is: "<<name<<endl;
			cout<<"ID is: "<<id<<endl;
		}
};
class manager: public employee{
	string department;
	public:
		void getdata(string name, int id, string d ){
			employee::getdata(name, id);
			department = d;
		}
		void putdata(){
			employee::putdata();
			cout<<"Department is: "<<department<<endl;
		}
};
class computerOperator: public employee{
	int Typing_Speed;
	public:
		void getdata(string name, int id, int ts ){
			employee::getdata(name, id);
			Typing_Speed = ts;
		}
		void putdata(){
			employee::putdata();
			cout<<"Typing speed is: "<<Typing_Speed<<endl;
		}
};
int main(){
	manager obj1;
	obj1.getdata("Kiran", 3343, "Computer");
	obj1.putdata();
	computerOperator obj2;
	obj2.getdata("Simran", 3324, 40);		
	obj2.putdata();
	return 0;
}





//Program 11: Create a class time having hour, minute and second as data 
//members. The constructor is used to initialize these members. Define a 
//function add that takes two class objects as arguments and add them 
//respectively then display the aggregate result.





#include<iostream>
using namespace std;
class Time{
		int hour;
		int minute;
		int second;
	public:
		
		Time(int h = 0, int m = 0, int s = 0){
			hour = h;
			minute = m;
			second = s;
			
		}
		Time add(Time t){
			Time temp;
			temp.second = second + t.second;
			temp.minute = minute + t.minute;
			temp.hour = hour + t.hour;
			
			if(temp.second > = 60 && temp.minute >= 60){
				temp.hour++;
				temp.minute = temp.minute - 60;
			}
			return temp;
		}
		
		void display(){
			cout<<hour<<" hr "<<minute<<" min "<<second<<" sec"<<endl;
		}
};

int main(){
	Time t1(4,30), t2(5,30),t3;
	t3 = t1.add(t2);
	t1.display();
	t2.display();
	t3.display();
	return 0;
}





//Program 13: Write a program to add two complex numbers using the concept 
//of constructor. 





#include<iostream>
using namespace std;

class complex{
	float real, imag;
	public:
		complex(){
			
		}
		complex(int r, int i){
			real = r;
			imag = i;
			
		}
		void sum(complex a, complex b){
			cout<<"Sum of two complex number is: "<<a.real + b.real <<" +i"<<a.imag + b.imag <<endl;
			
		}
		
};
int main(){
	complex Kiri(4,5), Simmi(6,7), stop;
	stop.sum(Kiri, Simmi);
	return 0;
}






//Program 14: Write a program to enter the information of n students and then 
//display it using the concept of multilevel inheritance. 






#include<iostream>
using namespace std;

class gets{
	public:
		gets(){
		};
		string name;
		int sem;
		int rollno;
};
class puts : public gets {
	public:
		void getdata(){
        cout << "Name:" << endl;
        cin >> name;
        cout << "Semester: " << endl;
        cin >> sem;
        cout << "Roll No." << endl;
        cin >> rollno;
		}
};
class display: public puts{
	public:
		void show(){
		cout << "Name:" << endl;
        cout << name << endl;
        cout << "Semester" << endl;
        cout << sem << endl;
        cout << "Roll No." << endl;
        cout << rollno << endl;
		}
};
int main(){
	
	int num, i;
	cout<<"Enter total num of students: "<<endl;
	cin>> num;
	display object[num];
	for(i=0;i<num;i++){
		object[i].getdata();
	}
	for(i=0;i<num;i++){
		object[i].show();
	}
	return 0;
}

	
	
	
//Program 16: Write a program to swap variables of two classes using friend 
//function.




#include<iostream>
using namespace std;
class second;
class first{
	int x;
	public:
		first(){
			x = 10;
		}
		friend void swap (first a, second b);
	
	};
class second{
	int y;
	public:
		second(){
			y = 20;
		}
		friend void swap(first a, second b);
};

void swap(first a, second b){
	int temp;
	temp = a.x;
	a.x = b.y;
	b.y = temp;
	cout<<"After swap:x= "<<a.x<<endl<<"y = "<<b.y;
}
int main(){
	first obj;
	second obj2;
	swap(obj, obj2);
	return 0;
}





//Program 17: Write a program to add two complex numbers using friend 
//function.





#include<iostream>
using namespace std;

class complex{
float real, imag;
public:
	void get_data(){
		cout<<"Enter real and imag numbers: "<<endl;
		cin>>real>>imag;
	}
	friend complex sum(complex,complex);
	void display();
};
void complex::display(){
	cout<<"Sum is: "<<real<<" + i"<<imag;
}
complex sum(complex a, complex b){
	complex t;
	t.real = a.real + b.real;
	t.imag = a.imag + b.imag;
	return t;
}
int main(){
	complex a,b,c;
	a.get_data();
	b.get_data();
	c = sum(a,b);
	c.display();
	return 0;
}




// Program 18: Write a program to add time in hours and minutes of two
// different objects using friend function




#include <iostream>
using namespace std;
class timer
{
    int hours;
    int minutes;

public:
    void input()
    {
        cout << "Enter the hour and minutes: " << endl;
        cin >> hours;
        cin >> minutes;
    }
    friend void add(timer o1, timer o2);
};
void add(timer o1, timer o2)
{
    int rem;
    o1.hours += o2.hours;
    o1.minutes += o1.minutes;
    rem = o1.minutes / 60;
    o1.hours += rem;
    o1.minutes -= rem*60;
    cout << "Added time is: " << endl;
    cout << "Hours: " << o1.hours << endl;
    cout << "Minutes: " << o1.minutes << endl;
}
int main()
{
    timer t1, t2;
    t1.input();
    t2.input();
    add(t1, t2);
    return 0;
}





//Program 19: Write a program to find the area of a triangle (when its sides are 
//given) using the concept of overloaded constructor. 





#include<iostream>
#include<cmath>
using namespace std;
 
 class ShahRukh{
 	int x, y, z;
 	public:
 		ShahRukh(int a, int b, int c){
 			x=a;
 			y=b;
 			z=c;
		 }
		 void display(){
		 	int s = (x+y+z)/2;
		 	cout<<"Area of triangle is: "<<(sqrt(s*(s-x)*(s-y)*(s-z)))<<endl;
		 }
 };
 int main(){
 	ShahRukh s1(1,2,3);
 	ShahRukh s2(4,5,6);
 	ShahRukh s3(7,8,9);
 	s1.display();
 	s2.display();
 	s3.display();
 	return 0;
 }
 
 
 
// Program 20: Write a program to overload multiplication operator(*) showing 
//the multiplication of two objects.
 
 
 
 #include<iostream>
 using namespace std;
 
 class multiply{
 	int x;
 	int y;
 	public:
 		multiply(){
		 }
		 multiply(int first, int second){
		 	x = first;
		 	y = second;
		 }
		 void operator *(multiply obj){
		 	x = x * obj.x;
		 	y = y * obj.y;
		 	cout<<"Multiplication is: "<<endl;
		 	cout<<"x = "<<x<<endl;
		 	cout<<"y = "<<y;
		 }
 };
 int main(){
 	multiply blurry(4,5), eyes(2,3);
 	blurry * eyes;
 	return 0;
 }
 
 
 
 
 
 // Program 22: Write a program to find the sum and difference of any two
// complex numbers by overloading ‘+’ and ‘-‘ operator.



#include <iostream>
using namespace std;
class addsub
{
    int x;
    int y;

public:
    addsub()
    {
        x = 4;
        y = 5;
    }
    void operator+(addsub j)
    {
        x += j.x;
        y += j.y;
        cout << "Addition is:" << endl;
        cout << " x = " << x << endl;
        cout << " y = " << y << endl;
    }
    void operator-(addsub k)
    {
        x -= k.x;
        y -= k.y;
        cout << "Substraction is:" << endl;
        cout << " x = " << x << endl;
        cout << " y = " << y << endl;
    }
};
int main()
{
    addsub kiran, shahrukh;
    kiran + shahrukh;
    kiran - shahrukh;
    return 0;
}



/*
//Program 7: Create a class called Employee with data member Code, Name, 
//Address and Salary. Create a constructor to initialize the member of the class. 
//Also create another constructor so that we can create an object from another 
//object. Define member function display( ) to display the information of the 
//class.

#include<iostream>
using namespace std;

class employee{
	int code, salary;
	string name, address;
	public:
		employee(){
			
		}
		employee(int c, string n, string a, int s){
			code = c;
			salary = s;
			name = n;
			address = a;
		}
		void display(){
			cout<<"Code: "<<code<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Address: "<<address<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
};
int main(){
	employee e1(234, "Vairav", "Kathmandu",10000);
	e1.display();
	return 0;
}

//Program 8: Write a program to create a class called Room in which data items 
//are length, breadth and height. Create an array of objects in the room. And 
//finds its area and volume. 

#include<iostream>
using namespace std;

class room{
	float length, breadth, height;
	public:
		void display(float l, float b, float h){
				length = l;
			breadth = b;
			height = h;
			cout<<"Area is: "<<length*breadth<<endl;
			cout<<"Volume is: "<<length*breadth*height<<endl;
		}
		
};
int main(){
	room r1[3];
	r1[0].display(1,2,3);
	r1[1].display(4,5,6);
	r1[2].display(7,8,9);
	return 0;
}


//Program 14: Write a program to enter the information of n students and then 
//display it using the concept of multilevel inheritance. 

#include<iostream>
using namespace std;

class gets{
	public:
		gets(){
		};
		string name;
		int sem;
		int rollno;
};
class puts : public gets {
	public:
		void getdata(){
        cout << "Name:" << endl;
        cin >> name;
        cout << "Semester: " << endl;
        cin >> sem;
        cout << "Roll No." << endl;
        cin >> rollno;
		}
};
class display: public puts{
	public:
		void show(){
		cout << "Name:" << endl;
        cout << name << endl;
        cout << "Semester" << endl;
        cout << sem << endl;
        cout << "Roll No." << endl;
        cout << rollno << endl;
		}
};
int main(){
	
	int num, i;
	cout<<"Enter total num of students: "<<endl;
	cin>> num;
	display object[num];
	for(i=0;i<num;i++){
		object[i].getdata();
	}
	for(i=0;i<num;i++){
		object[i].show();
	}
	return 0;
}

	



//Program 17: Write a program to add two complex numbers using friend 
//function.

#include<iostream>
using namespace std;

class complex{
float real, imag;
public:
	void get_data(){
		cout<<"Enter real and imag numbers: "<<endl;
		cin>>real>>imag;
	}
	friend complex sum(complex,complex);
	void display();
};
void complex::display(){
	cout<<"Sum is: "<<real<<" + i"<<imag;
}
complex sum(complex a, complex b){
	complex t;
	t.real = a.real + b.real;
	t.imag = a.imag + b.imag;
	return t;
}
int main(){
	complex a,b,c;
	a.get_data();
	b.get_data();
	c = sum(a,b);
	c.display();
	return 0;
}



//Program 16: Write a program to swap variables of two classes using friend 
//function.

#include<iostream>
using namespace std;
class second;
class first{
	int x;
	public:
		first(){
			x = 10;
		}
		friend void swap (first a, second b);
	
	};
class second{
	int y;
	public:
		second(){
			y = 20;
		}
		friend void swap(first a, second b);
};

void swap(first a, second b){
	int temp;
	temp = a.x;
	a.x = b.y;
	b.y = temp;
	cout<<"After swap:x= "<<a.x<<endl<<"y = "<<b.y;
}
int main(){
	first obj;
	second obj2;
	swap(obj, obj2);
	return 0;
}

//Program 19: Write a program to find the area of a triangle (when its sides are 
//given) using the concept of overloaded constructor. 

#include<iostream>
#include<cmath>
using namespace std;
 
 class ShahRukh{
 	int x, y, z;
 	public:
 		ShahRukh(int a, int b, int c){
 			x=a;
 			y=b;
 			z=c;
		 }
		 void display(){
		 	int s = (x+y+z)/2;
		 	cout<<"Area of triangle is: "<<(sqrt(s*(s-x)*(s-y)*(s-z)))<<endl;
		 }
 };
 int main(){
 	ShahRukh s1(1,2,3);
 	ShahRukh s2(4,5,6);
 	ShahRukh s3(7,8,9);
 	s1.display();
 	s2.display();
 	s3.display();
 	return 0;
 }
*/

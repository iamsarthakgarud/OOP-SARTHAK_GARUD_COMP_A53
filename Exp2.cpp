//Define a Rectangle class with length and width attributes.
//a)Implement a default constructor (sets length & width to 1).
//b) Implement a parameterized constructor to accept custom values.
//c) Include a function to calculate area.

#include<iostream>
using namespace std;

class rectangle{

	private:
		double length;
		double width;
	public:
	
		rectangle(){
			length=1;
			width=1;
		}
		
		rectangle(double l,double w){
			length=l;
			width=w;
		}
		
		void rectarea(){
			
			cout<<"The length of Rectangle is "<< length<<endl;
			cout<<"The width of Rectangle is "<<width<<endl;
			
			cout<<"The area of the Rectangle is "<<length*width<<endl;
			cout<<"\n";
			
		}
};

int main(){
	rectangle r1(5.3,10);
	r1.rectarea();
	
	rectangle r2(9,6);
	r2.rectarea();
	
	return 0;
	
}

	

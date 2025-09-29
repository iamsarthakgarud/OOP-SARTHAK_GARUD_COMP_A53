#include<iostream>
using namespace std;

class person{	
	private:
		string name;
		int age ;
	public:
		void person_details(){
			
			cout<<"Enter name : ";
			cin>>name;
			 cout<<"Enter the age: ";
			 cin>>age;
		}
		
		void show_detailsofperson(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
	}
			
};
class academics{
	private: int rollno;
		
		
	public:
		int m1,m2,m3;
		void get_details_of_acedemics(){
		
		cout<<"Enter roll no: ";
		cin>>rollno;
		cout<<"Enter M1: ";
		cin>>m1;
	
		cout<<"Enter M2: ";
		cin>>m2;
	
		cout<<"Enter M3: ";
		cin>>m3;
	}
	void showacademics(){
		cout<<"Rollno: "<<rollno<<endl;
		cout<<"M1: "<<m1<<endl;
		cout<<"M2: "<<m2<<endl;
		cout<<"M3: "<<m3<<endl;
	}
};	

class student:public person,public academics{
	
	private:
		int total_marks;
		float percentage;		
		
	public: void total(){
	
		total_marks=m1+m2+m3;
		percentage=(total_marks/3);
	}
	
void show_student(){

	cout<<"Total: "<<total_marks<<endl;
	cout<<"Percentage: "<<percentage;
	}
};


int main(){
	
		
	student s1;
	s1.person_details();
	s1.show_detailsofperson();
	s1.get_details_of_acedemics();
	s1.showacademics();
	s1.total();
	s1.show_student();
	
	
	
	return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	

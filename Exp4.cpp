#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class student{
	public:
		string name;
		int marks;
		student(string n,int m){
			name=n;
			marks=m;
		}
		
		void displaydata(){
			cout<<"********STUDENT DETAILS**********"<<endl;
			cout<<name<<"-"<<marks<<endl;
		}
};
		
	bool sortbyname(student &s1,student &s2){
		return s1.name>s2.name;
}
	
	bool sortbymarks(student &s1,student &s2){
		return s1.marks>s2.marks;
	}


int main(){

	
	vector<student>stu;
	stu.push_back(student ("sarthak",90));
	stu.push_back(student ("manthan",80));
	stu.push_back(student ("rohit",50));
	stu.push_back(student ("jay",88));
	
	for(auto &s:stu)
	s.displaydata();
	
	cout<<"Sorting by name"<<endl;
	cout<<"\n";
	
	sort(stu.begin(),stu.end(),sortbyname);
	for(auto &s:stu)
	s.displaydata();
	
	cout<<"Sorting by marks "<<endl;
	cout<<"\n";
	
	sort(stu.begin(),stu.end(),sortbymarks);
	for(auto &s:stu)
	s.displaydata();
	
	return 0;
	
}

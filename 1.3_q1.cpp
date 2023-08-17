#include<iostream>
using namespace std;

class Student{
	private:
		int stu_id;
		string stu_name;
		int stu_age;
		string stu_course;
		string stu_email;
		string stu_city;
		string stu_college;
		
	public:
		setData() 
		{
			cout << "Enter Id : ";
			cin >> stu_id;
			cout << "Enter Name : ";
			cin >> stu_name;
			cout << "Enter Age : ";
			cin >> stu_age;
			cout << "Enter Course : ";
			cin >> stu_course;
			cout << "Enter Email : ";
			cin >> stu_email;
			cout << "Enter City : ";
			cin >> stu_city;
			cout << "Enter College : ";
			cin >> stu_college;
			
			cout << "----------------------------------" << endl;
		}
		
		getData() 
		{
			cout << "Id :- " << stu_id << endl;
			cout << "Name :- " << stu_name << endl;
			cout << "Age :- " << stu_age << endl;
			cout << "Course :- " << stu_course << endl;
			cout << "Email :- " << stu_email << endl;
			cout << "City :- " << stu_city << endl;
			cout << "College :- " << stu_college << endl;
			
			cout << "----------------------------------" << endl;
		}
};

int main()
{
	int i;
	
	Student a[5];
	
	for(i=0;i<5;i++)
	{
		a[i].setData();
	}
	
	for(i=0;i<5;i++)
	{
		a[i].getData();
	}
	
	return 0;	
	
}

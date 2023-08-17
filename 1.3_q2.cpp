#include<iostream>
using namespace std;

class Customer{
	private:
		int cust_id;
		string cust_name;
		int cust_age;
		string cust_telecom_brand_name;
		string cust_mobile_number;
		string cust_city;
		int cust_simcard_validity;
		
	public:
		setData() 
		{
			cout << "Enter Id : ";
			cin >> cust_id;
			cout << "Enter Name : ";
			cin >> cust_name;
			cout << "Enter Age : ";
			cin >> cust_age;
			cout << "Enter Telecom brand name : ";
			cin >> cust_telecom_brand_name;
			cout << "Enter Mobile no. : ";
			cin >> cust_mobile_number;
			cout << "Enter City : ";
			cin >> cust_city;
			cout << "Enter Simcard validity : ";
			cin >> cust_simcard_validity;
			
			cout << "----------------------------------" << endl;
		}
		
		getData() 
		{
			cout << "Id :- " << cust_id << endl;
			cout << "Name :- " << cust_name << endl;
			cout << "Age :- " << cust_age << endl;
			cout << "Telecom brand name :- " << cust_telecom_brand_name << endl;
			cout << "Mobile no.:- " << cust_mobile_number << endl;
			cout << "City :- " << cust_city << endl;
			cout << "Simcard validity :- " << cust_simcard_validity << endl;
			
			cout << "----------------------------------" << endl;
		}
};

int main()
{
	int i;
	
	Customer a[5];
	
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

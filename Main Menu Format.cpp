#include<iostream>
#include<cstring>
#include<cstdlib>
#include<iomanip>
#include<windows.h>
#include<dos.h>
#include<conio.h>
#include<cstdio>
#define max 20

using namespace std;

struct employee

{

 char name[20];
 long int code;
 char designation[20];
 int exp;
 int age;

};

int num;

employee emp[max],tempemp[max],sortemp[max],sortemp1[max];

int main()

{

 system("cls");
 void build();
 void list();
 void insert();
 void deletes();
 void edit();
 void search();
 void sort();
 char option;
 void menu();

 menu();

 while((option=cin.get())!='8')

 {

  switch(option)

  {

   case '1':
         build();
         break;

   case '2':
         list();
         break;

   case '3':
         insert();
         break;

   case '4':
         deletes();
         break;

   case '5':
        edit();
        break;

   case '6':
        search();
        break;

   case '7':
         sort();
         break;

  }

menu();

  }

  return 0;

 }

 void menu()
 {


	system("cls");
	printf("\n\n\n\t\t\t\tLoading...\n\n");
	char a=177, b=219;
	printf("\t\t\t\t");
	for (int i=0;i<=15;i++)
	std::cout<<a;
	printf("\r");
	printf("\t\t\t\t");
	for (int i=0;i<=15;i++)
		{
		std::cout<<b;
		Sleep(80); 
		}


	system("cls");



	cout << "\t\t========================================" <<'\n';
	cout << "\t\t        MGM Grand Employee System       " <<'\n';
	cout << "\t\t========================================" <<'\n';



   	cout << "\n \t\t    1. Build an Employee List";
   	cout << "\n \t\t    2. List of Employees";
   	cout << "\n \t\t    3. Add New Employee ";
   	cout << "\n \t\t    4. Remove Employee Record";
    	cout << "\n \t\t    5. Edit Employee Record";
    	cout << "\n \t\t    6. Search Employee Record";
    	cout << "\n \t\t    7. Sort List by";
    	cout << "\n \t\t    8. Exit Program";     
        
	cout << "\n \t\t========================================" <<'\n';
    	cout << "\n";
    	cout << "\t\t    >> ";

}


void build()
{


	system("cls");
	
	cout << "========================================" <<'\n';
	cout << "          Build an Employee List        " <<'\n';
	cout << "========================================" <<'\n';
	
	

 	cout << "Number of Employee/s: ";
 	cin >> num;

 	cout<<"FILL IN REQUIRED DATA"<<endl;

	for(int i=0;i<=num-1;i++)
	
	{

		cout << "Name: ";
		cin >> emp[i].name;
		
		cout <<"Code: ";
		cin >> emp[i].code;
		
		cout << "Position: ";
		cin >> emp[i].designation;

		cout << "Years of Experience: ";
		cin >> emp[i].exp;

		cout << "Age: ";
		cin >> emp[i].age;

 	}

	cout << endl << endl ;
	system("pause");



}


void  list()
{

 system("cls");

	cout << "========================================================" <<'\n';
	cout << "                     List of Employees                  " <<'\n';
	cout << "========================================================" <<'\n';



	cout << "========================================================" << '\n';
	cout << "\tName\tCode\t Position\t Years(EXP)\t Age " << '\n';
	cout << "========================================================" << '\n';

	for(int i=0;i<=num-1;i++)
 	{
		cout << setw(13) << emp[i].name;
		cout << setw(6)  << emp[i].code;
		cout << setw(15) << emp[i].designation;
		cout << setw(10) << emp[i].exp;
		cout << setw(15) << emp[i].age;

		cout<<endl;
 	}

	cout << endl <<endl ;
	system("pause");

  }

void insert()
{

	system("cls");

	int i=num;
	num+=1;

	cout << "========================================" <<'\n';
	cout << "              Add New Employee          " <<'\n';
	cout << "========================================" <<'\n';



	cout<<"FILL IN REQUIRED DATA"<<endl;

	cout<<"Name:  ";
	cin>>emp[i].name;

	cout<<"Code:  ";
	cin>>emp[i].code;

	cout<<"Position  ";
	cin>>emp[i].designation;

	cout<<"Years of Experience  ";
	cin>>emp[i].exp;

	cout<<"Age  ";
	cin>>emp[i].age;

	cout << endl <<endl ;
	system("pause");

  }

//to be continued here




















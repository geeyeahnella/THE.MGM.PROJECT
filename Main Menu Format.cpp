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
    cout << "\n \t\t    8. Exit   Program";     
        
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









/*int main(void)
{
	int opt=1;
	int name, pass; //change this to char array later
	do
	{
        system("cls");
        cout << "==============================="   <<'\n';
        cout << "            Main Menu          "   <<'\n';
        cout << "==============================="   <<'\n' <<'\n';
        cout << "1. Admin"   <<'\n';
        cout << "2. Employee"   <<'\n';
        cout << "3. About"        <<'\n' <<'\n';
        cout << "4. Exit"                     <<'\n' <<'\n';
        cout << "-------------------------------"    <<'\n';
        cout << ">> ";
		cin>>opt;
		
		switch(opt)
		{				
			case 1:
				system ("cls");
				cout << "Administration Access\n\n";
				// log-in
					cout << "Username: ";
					cin >> name;
					
					if(name==111){
						cout << "Password: ";
						cin >> pass;
						
						if(pass==123){
							system ("cls");
							cout << "Hello Admin.\n\n";
						}
						
						else{
							cout << "\n\nIncorrect Password\n\n";
						}						
					}
					
					else{
						cout << "\n\nUser does not exist\n\n";
					}
					
				system ("pause");
				break;
		
			case 2:
				system ("cls");
				system ("pause");
				break;
		
			case 3:
				system ("cls");
				cout << "MGM Project\n\n";
				cout << "Creators:";
				cout << "\t SANTOS, Michael\n";
				cout << "\t\t SUPETRAN, Gia\n";
				cout << "\t\t SYBAL, May\n";
				cout << "\nSubmitted to:\t Mr. Melvin Cabatuan\n";
				cout << "\nIn partial fulfillment of requirements for LBYEC72\n";
				cout << "\nAbout the Program:";
				cout << "\n*insert program description here*\n\n";
				system ("pause");
				break;
		
			case 4:
				break;
	
			default:	
				cout << "\nInvalid input!\n\n";
				system ("pause");
				opt = 1;
				break;
		}
	} while(opt >= 1 && opt <= 3);


	cout << "\nThank you for using this program!\n\n";
	system("pause");
	return 0;	
	
=======
int main()
{ 
	system("CLS");
	system("COLOR 8E");
	int choice, ch;
	while(choice !=3){
	cout << "/============================================/\n";
	cout << "                Employee Tracker              \n";
	cout << "/============================================/\n";
	cout << "1. Employee\n";
	cout << "2. Administrator\n";
	cout << "3. Exit\n"; // Otherwise, print "INVALID"
	cout << ">> ";
	cin >> choice;
	
	switch(choice)
	{
		case 1: 
		    puts("\n\nLet's get started!\n");
		    int date;
			double timein, timeout;
		    int choicea;
		    choicea=0;
		    while(choicea!=4){
		    cout<<"\n\nDate (month.day): ";
		    cin >> date;
		    cout<<"\n\nTime In: ";
		    cin >> timein;
		    cout<<"\n\nTime Out: ";
		    cin >> timeout;  
		    
		    /*std::ofstream outfile ("Basic_Gear.txt"); //THIS IS HOW IT WILL BE OUTPUTTED
		    outfile << "HARD HAT(s) AMOUNT: "<< har << endl;
		    outfile << "VEST(s) AMOUNT: " << ves << endl;
		    outfile << "FIXED SET(s) AMOUNT: " << set << endl;
		    outfile << endl;
		    outfile << "HARD HAT(s) COST: Php " << cost1 << endl;
		    outfile << "VEST(s) COST: Php " << cost2 << endl;
		    outfile << "FIXED SET(s) COST: Php " << cost3 << endl;
		    outfile << "TOTAL COST: Php " << sum << endl;
		    outfile.close();*/
		    /*
		    cout<< "\nYour time in for today is at " << timein << ".\n\n";
		    cout<< "\nYour time out for today is at " << timein << ".\n\n";
		    
		    break; /*this stops it from endlessly asking*/
			} /*this {} prevents compiling errors*/
		/*	break;
		
		case 2:
			int g10=1, i;
			string z;
			string a1;
			string a2;
			string a3;
			string a4;
			string a5;
			
			const string question[] = {"\n\nHow may I help you today?\n1. View Employee Record.\n2. Add a New Employee Record.\n3. Delete Existing Employee Record\n4. Search for Employee Record\n5. Finalize and Exit Program","Name of Employee: ","Company Number: ","Birthdate: ","Contact Number: ","New or Old Employee: "} ;
			
		    cout << question[1];
		  	getline(cin, a1);
		  	cout << question[2];
		  	getline(cin, a2);
		  	cout << question[3];
		  	getline(cin, a3);
		  	cout << question[4];
		  	getline(cin, a4);
		  	cout << question[5];
		  	getline(cin, a5);
		    
		    do{
			  cout << question[0] << "\n>> ";
			  cin >> g10;
			  if (g10==1){
			  	cout<<"\n\nWhich would you like to review?\n 1. Name of Employee\n 2. Company Number\n 3. Birthdate\n 4. Contact Number\n 5. New or Old Employee";
			  cin >> i;
			  cout << question[i] << "\n>> ";
			  if(i==1){cout << a1;}
			  else if(i==2){cout << a2;}
			  else if(i==3){cout << a3;}
			  else if(i==4){cout << a4;}
			  else if(i==5){cout << a5;}
			  system("pause");
			  }else if (g10==2){
			  	cout<<"\n\nWhich would you like to modify?\n  1. Name of Employee\n 2. Company Number\n 3. Birthdate\n 4. Contact Number\n 5. New or Old Employee>>";
			  cin >> i;
			  cout << question[i] << "\n\n>> ";
			  if(i==1){cin >> a1;}
			  else if(i==2){cin >> a2;}
			  else if(i==3){cin >> a3;}
			  else if(i==4){cin >> a4;}
			  else if(i==5){cin >> a5;}
			  system("pause");
			  }else if (g10==3){
			  cout<<"\n\n 1. Name of Employee\n 2. Company Number\n 3. Birthdate\n 4. Contact Number\n 5. New or Old Employee>>";
			  cin >> i;
			  cout << question[i] << "\n>> " << "DELETED.";
			  if(i==1){a1="";}
			  else if(i==2){a2="";}
			  else if(i==3){a3="";}
			  else if(i==4){a4="";}
			  else if(i==5){a5="";}
			  system("pause");
			  }else if (g10==4){
			  cout<< "Please enter the flight detail you are searching for: ";
				cin >> z; 
			  	cout << "Search == a1: " << (z == a1) << endl;
			  	cout << "Search == a2: " << (z == a2) << endl;
			  	cout << "Search == a3: " << (z == a3) << endl;
			  	cout << "Search == a4: " << (z == a4) << endl;
			  	cout << "Search == a5: " << (z == a5) << endl;
			  system("pause");
			  }else{
			  	cout<<"\n\nThank you for using our program! Enjoy your day!\n\n";
			  } 
			  
			  }while(g10==1||g10==2||g10==3||g10==4);
		    
		    break; /*this stops it from endlessly asking*/
			} /*this {} prevents compiling errors*/
		 /*	break;
		 	
		 case 3:
	 		 puts("Exit was chosen!");
	 		 break;
	 	
		 default:
	 		puts("INVALID INPUT!");
	}}
return 0;
system ("PAUSE");
}
*/

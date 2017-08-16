#include<iostream>
#include<cstring>
#include<cstdlib>
#include<iomanip>
#include<windows.h>
#include<dos.h>
#include<conio.h>
#include<cstdio>
#include <fstream>
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
 void load();
 void pass();
 void exp();

 	pass();
	
do{
 
	load();

	menu();
	
	cin >> option;
	
	switch(option){
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
		case '8':
			exp();
			break;
		}
	
} while(option!='9');

return 0;

}
 
void pass(){
	string username;
	string password;
	do {
	system("cls");
	cout << "\t\t========================================" <<'\n';
	cout << "\t\t        MGM Grand Employee System       " <<'\n';
	cout << "\t\t========================================" <<'\n';



   	cout << "\n \t\t    Username: ";
	  getline(cin, username);
	  if (username == "Admin") {
	    cout << "\n \t\t    Password: ";
	    getline(cin, password);
	    if (password != "1234") {
	      cout << "\n \t\t    Invalid password. Try again." << endl;
	      cout << "\n\n";
	      system("pause");
	    }
	  } else {
	    cout << "\n \t\t    Invalid username. Try again." << endl;
	    cout << "\n\n";
	    system("pause");
	  }
	} while (password != "1234");
}

void load(){
	system("cls");
	cout << "\n\n\n\t\t\t\tLoading...\n\n";
	char a=177, b=219;
	cout << "\t\t\t\t";
	for (int i=0;i<=15;i++)
	cout << a;
	cout << "\r";
	cout << "\t\t\t\t";
	for (int i=0;i<=15;i++)
		{
		cout<<b;
		Sleep(80); 
		}
}

 void menu()
 {
 	
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
    cout << "\n \t\t    8. Export List";
    cout << "\n \t\t    9. Exit Program";     
        
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
		cout << "\n";
		
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

	cout << "=============================================================" <<'\n';
	cout << "                      List of Employees                      " <<'\n';
	cout << "=============================================================" <<'\n';



	cout << "=============================================================" << '\n';
	cout << "\tName\tCode\t Position\t Years(EXP)\t Age " << '\n';
	cout << "=============================================================" << '\n';

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

void deletes()
{

	system("cls");

	int emcode;
	int check;

	cout << "========================================" <<'\n';
	cout << "         Remove Employee Record         " <<'\n';
	cout << "========================================" <<'\n';



	cout << "Enter Employee Code: ";
	cin >> emcode;

   int i;

	for(i=0;i<=num-1;i++)
	{
		if(emp[i].code==emcode)
		{
			check=i;
		}
	}

	for(i=0;i<=num-1;i++)
	{
    	if(i==check)
		{
			continue;
		}
		
		else
		{
			if(i>check)
			{
				tempemp[i-1]=emp[i];
			}
			else
			{
				tempemp[i]=emp[i];
			}
		}
	}

	num--;


	for(i=0;i<=num-1;i++)
	{
		emp[i]=tempemp[i];
	}

 }

void edit()
{

	system("cls");

	int emcode;

	cout << "========================================" <<'\n';
	cout << "          Edit Employee Record          " <<'\n';
	cout << "========================================" <<'\n';
	cout << endl;
	
	int i;
	
	void editmenu();
	void editname(int);
	void editcode(int);
	void editdes(int);
	void editexp(int);
	void editage(int);
	char option;

	cout << "Enter Employee Code: ";
	cin >> emcode;

	editmenu();

	for(i=0;i<=num-1;i++)
	{
		if(emp[i].code==emcode)
		{
			while((option=cin.get())!='6')
			{
      			switch(option)
      			{
				case '1':
            				editname(i);
            				break;
       				case '2':
            				editcode(i);
            				break;
       				case '3':
            				editdes(i);
            				break;
       				case '4':
					editexp(i);
            				break;
				case '5':	
					editage(i);
           				break;
     			}			
				 
			editmenu();
   		
			}

  		}

	}

}

void editmenu()
{

	system("cls");

   	cout << "========================================" <<'\n';
	cout << "               Editing Menu             " <<'\n';
	cout << "========================================" <<'\n';
		
	cout << "\n\t\t1. Name";
    	cout << "\n\t\t2. Code";
    	cout << "\n\t\t3. Position";
    	cout << "\n\t\t4. Experience";
    	cout << "\n\t\t5. Age";
    	cout << "\n\t\t6. Main Menu";     
        
	cout << "\n========================================" <<'\n';
   	cout << "\n";
    	cout << "\t\t >> ";
  }

void editname(int i)
{
	cout<<"Enter New Name: ";
	cin>>emp[i].name;
}

void editcode(int i)
{
	cout<<"Enter New Code: ";
	cin>>emp[i].code;
}
  
void editdes(int i)
{
	cout<<"Enter New Position: ";
	cin>>emp[i].designation;
}

void editexp(int i)
{
	cout<<"Enter New Years of Experience";
	cin>>emp[i].exp;
}

void editage(int i)
{
	cout<<"Enter New Age ";
	cin>>emp[i].age;
}

void search()
{
	system("cls");

    	cout << "========================================" <<'\n';
	cout << "        Search Employee Record          " <<'\n';
	cout << "========================================" <<'\n';
	cout << endl;

	int emcode;

	cout << "Enter Employee Code: ";
	cin >> emcode;

	for(int i=0;i<=num-1;i++)
	{
		if(emp[i].code==emcode)
		{

			cout << "=============================================================" << '\n';
			cout << "   Name\t\tCode\t Position\tYears\tAge " << '\n';
			cout << "=============================================================" << '\n';

      	 	cout << setw(10) << emp[i].name;
			cout << setw(10) << emp[i].code;
			cout << setw(10) << emp[i].designation;
			cout << setw(12) << emp[i].exp;
			cout << setw(8)  << emp[i].age;

  			cout<<endl;

 		}

	}

	cout << endl <<endl ;
	system("pause");

}

void sort()
{
	
	system("cls");

    	cout << "========================================" <<'\n';
	cout << "             Sort Table by              " <<'\n';
	cout << "========================================" <<'\n';
	
 	void sortmenu();
 	void sortname();
 	void sortcode();
 	void sortdes();
 	void sortexp();
 	char option;
 	void sortage();

	cout << endl << endl;



	sortmenu();
	while((option=cin.get())!='6')
	{
		switch(option)
		{
			case '1':
        			sortname();
        			break;
   			case '2':
        			sortcode();
				break;
   			case '3':
        			sortdes();
				break;
   			case '4':
        			sortexp();
        			break;
   			case '5':
				sortage();
				break;

		}
	
		sortmenu();
	}

}

void sortmenu()
{

    	system("cls");

    	cout << "========================================" <<'\n';
	cout << "             Sort Table by              " <<'\n';
	cout << "========================================" <<'\n';
		
	cout << "\n\t1. Name";
    	cout << "\n\t2. Code";
   	cout << "\n\t3. Position";
   	cout << "\n\t4. Experience";
    	cout << "\n\t5. Age";
   	cout << "\n\t6. Main Menu";     
   
    	cout << "\n========================================" <<'\n';
    	cout << "\n";
    	cout << "\t>> ";
   
}

void sortname()
{
 	system("cls");

	int i,j;

	struct employee temp[max];
	
	for(i=0;i<=num-1;i++)
	{
		sortemp1[i]=emp[i];
	}

	for(i=0;i<=num-1;i++)
	{
		for(j=0;j<=num-1;j++)
		{
			if(strcmp(sortemp1[i].name,sortemp1[j].name)<=0)
			{
				temp[i]=sortemp1[i];
				sortemp1[i]=sortemp1[j];
				sortemp1[j]=temp[i];
			}
		}
	}

	for( i=0;i<=num-1;i++)
	{

		cout << "=============================================================" << '\n';
		cout << "   Name\t\tCode\t Position\tYears\tAge " << '\n';
		cout << "=============================================================" << '\n';

		for( i=0;i<=num-1;i++)
		{

			cout << setw(10) << sortemp1[i].name;
			cout << setw(10) << sortemp1[i].code;
			cout << setw(10) << sortemp1[i].designation;
			cout << setw(12) << sortemp1[i].exp;
			cout << setw(8)  << sortemp1[i].age;
		
			cout<<endl;

		}

		cout << endl <<endl ;
		system("pause");

	} 
}

void sortcode()
{

	system("cls");
	
	int i,j;
	struct employee temp[max];

	for(i=0;i<=num-1;i++)
	{
		sortemp1[i]=emp[i];
	}

	for(i=0;i<=num-1;i++)
	{
		for(j=0;j<=num-1;j++)
		{
			if(sortemp1[i].code<sortemp1[j].code)
			{
				temp[i]=sortemp1[i];
				sortemp1[i]=sortemp1[j];
				sortemp1[j]=temp[i];
    		}
		}
 	}

	for( i=0;i<=num-1;i++)
	{
		cout << "=============================================================" << '\n';
		cout << "   Name\t\tCode\t Position\tYears\tAge " << '\n';
		cout << "=============================================================" << '\n';

		for( i=0;i<=num-1;i++)
		{

			cout << setw(10) << sortemp1[i].name;
			cout << setw(10) << sortemp1[i].code;
			cout << setw(10) << sortemp1[i].designation;
			cout << setw(12) << sortemp1[i].exp;
			cout << setw(8)  << sortemp1[i].age;
	
			cout<<endl;
 		}

		cout << endl <<endl ;
		system("pause");

	} 
}

void sortdes()
{
	system("cls");
	
	int i,j;
	struct employee temp[max];

	for(i=0;i<=num-1;i++)
	{
		sortemp1[i]=emp[i];
	}

	for(i=0;i<=num-1;i++)
	{
		for(j=0;j<=num-1;j++)

		{
			if(strcmp(sortemp1[i].designation,sortemp1[j].designation)<=0)
			{
				temp[i]=sortemp1[i];
				sortemp1[i]=sortemp1[j];
				sortemp1[j]=temp[i];
			}
		}
	}

	for( i=0;i<=num-1;i++)
	{

		cout << "=============================================================" << '\n';
		cout << "   Name\t\tCode\t Position\tYears\tAge " << '\n';
		cout << "=============================================================" << '\n';

		for( i=0;i<=num-1;i++)
		{

			cout << setw(10) << sortemp1[i].name;
			cout << setw(10) << sortemp1[i].code;
			cout << setw(10) << sortemp1[i].designation;
			cout << setw(12) << sortemp1[i].exp;
			cout << setw(8)  << sortemp1[i].age;

			cout<<endl;
 		}

	cout << endl <<endl ;
	system("pause");

	} 
}


void sortage()
{
	system("cls");
	int i,j;
	struct employee temp[max];

	for(i=0;i<=num-1;i++)
	{
		sortemp1[i]=emp[i];
	}

	for(i=0;i<=num-1;i++)
	{
		for(j=0;j<=num-1;j++)
		{
			if(sortemp1[i].age<sortemp1[j].age)
			{
				temp[i]=sortemp1[i];
    			sortemp1[i]=sortemp1[j];
				sortemp1[j]=temp[i];
			}
		}
	}

	for( i=0;i<=num-1;i++)
	{
		cout << "=============================================================" << '\n';
		cout << "   Name\t\tCode\t Position\tYears\tAge " << '\n';
		cout << "=============================================================" << '\n';

 		for( i=0;i<=num-1;i++)
		{
			cout << setw(10) << sortemp1[i].name;
			cout << setw(10) << sortemp1[i].code;
			cout << setw(10) << sortemp1[i].designation;
			cout << setw(12) << sortemp1[i].exp;
			cout << setw(8)  << sortemp1[i].age;
	
			cout<<endl;
 		}

	cout << endl <<endl ;
	system("pause");
	
	}
}

void sortexp()
{
	system("cls");

	int i,j;
	struct employee temp[max];

	for(i=0;i<=num-1;i++)
	{
		sortemp1[i]=emp[i];
	}

	for(i=0;i<=num-1;i++)
	{
		for(j=0;j<=num-1;j++)
		{
			if(sortemp1[i].exp<sortemp1[j].exp)
			{
				temp[i]=sortemp1[i];
				sortemp1[i]=sortemp1[j];
				sortemp1[j]=temp[i];
			}
		}
	}

	for( i=0;i<=num-1;i++)
	{
		cout << "=============================================================" << '\n';
		cout << "   Name\t\tCode\t Position\tYears\tAge " << '\n';
		cout << "=============================================================" << '\n';

		for( i=0;i<=num-1;i++)
 		{
			cout << setw(10) << sortemp1[i].name;
			cout << setw(10) << sortemp1[i].code;
			cout << setw(10) << sortemp1[i].designation;
			cout << setw(12) << sortemp1[i].exp;
			cout << setw(8)  << sortemp1[i].age;
			
			cout<<endl;
		}

	cout << endl <<endl ;
	system("pause");
	
	}
}

void exp(){
	system("cls");
	string exportFileName;
	ofstream exportFile;
	
	cout<<"Enter the file name: ";
	cin>>exportFileName;
		
	exportFile.open(string(exportFileName+".txt").c_str());
						
	if(exportFile.is_open()){
	//file opened successfully so we are here
		cout << "\nFile opened successfully! Writing data from database to file...";
					
		for(int i=0;i<=num-1;i++){
			exportFile<<"Name: ";
			exportFile<<emp[i].name;
			exportFile<<"\nCode: ";
			exportFile<<emp[i].code;
			exportFile<<"\nPosition: ";
			exportFile<<emp[i].designation;
			exportFile<<"\nYears of Experience: ";
			exportFile<<emp[i].exp;
			exportFile<<"\nAge: ";
			exportFile<<emp[i].age;
			exportFile<<"\n\n";
		}
		
		cout << "\n\nEmployee List successfully saved into the file "<< exportFileName << ".txt !";
		}
					
	else{ //file could not be opened
	cout<<"\nFile could not be opened.";
	}
					
	exportFile.close();
					
	cout<<"\n\nPress any key to go back... ";
	getch();
}

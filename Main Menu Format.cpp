
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cmath>  
#include <conio.h>  
#include <string.h> 
#include <stdio.h>  

using namespace std;


int main(void)
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
		    
		    cout<< "\nYour time in for today is at " << timein << ".\n\n";
		    cout<< "\nYour time out for today is at " << timein << ".\n\n";
		    
		    break; /*this stops it from endlessly asking*/
			} /*this {} prevents compiling errors*/
			break;
		
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
		 	break;
		 	
		 case 3:
	 		 puts("Exit was chosen!");
	 		 break;
	 	
		 default:
	 		puts("INVALID INPUT!");
	}}
return 0;
system ("PAUSE");
}

/*
Author: Santos, Supetran, Sybal
Subject: LBYEC72 - EB2
Date: August 9, 2017
*/

#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int opt=1; 
	do
	{
        system("cls");
        system("COLOR 8E"); 
		int choice, ch;  
	 	complex a,b,c;
		while(choice !=7){
		cout << "/============================================/\n";
		cout << "         COMPLEX MATHEMATICAL OPERATIONS      \n";
		cout << "/============================================/\n";
		cout << "1. Customer\n";
		cout << "2. Administrator\n";
		cout << "3. Exit\n"; // Otherwise, print "INVALID"
		cout << ">> ";
		cin >> choice;
		
		switch(choice){
			case 1: 
				system("cls");
				cout<<"\nEnter The First Complex Number: ";  
	       		a.read();  
	       		a.display();  
	       		cout<<"\nEnter The Second Complex Number: \n";  
	       		b.read();  
	       		b.display();  
	      		c=a+b;  
	      		c.display(); 
				system("PAUSE"); 
				system("cls");
	       		break;  
			case 2:
				system("cls");
				cout<<"\nEnter The First Complex Number: ";  
		        a.read();  
		        a.display();  
		        cout<<"\nEnter The Second Complex Number: ";  
		        b.read();  
		        b.display();  
		        c=b-a;  
		        c.display(); 
				system("PAUSE");
				system("cls"); 
		        break;   
		    case 3:
		 		 cout <<"Exit was chosen!\n";
		 		 break;
		 	default:
		 		cout <<"\nINVALID INPUT!\n";
	}}
	system("PAUSE");
	return 0;
}

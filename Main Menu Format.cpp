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
        cout << "==============================="   <<'\n';
        cout << "            Main Menu          "   <<'\n';
        cout << "==============================="   <<'\n' <<'\n';
        cout << "1. Sub Menu 1"   <<'\n';
        cout << "2. Sub Menu 2"   <<'\n';
        cout << "3. Sub Menu 3"        <<'\n' <<'\n';
        cout << "4. Exit"                     <<'\n' <<'\n';
        cout << "-------------------------------"    <<'\n';
        cout << ">> ";
		cin>>opt;
		system("cls");
		
		switch(opt)
		{				
			case 1:
				system ("pause");
				system ("cls");
				break;
			case 2:
				system ("pause");
				system ("cls");
				break;
			case 3:
				system ("pause");
				system ("cls");
				break;
			case 4:
				system ("pause");
				system ("cls");
				break;
			default:	
				cout<<"Invalid input!\n\n";
				opt = 1;
				break;
		}
	} while(opt >= 1 && opt <= 3);


	cout<<"\nThank you for using this program!\n\n";
	system("pause");
	return 0;	
	
}

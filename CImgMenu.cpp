#include "CImg.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <Shellapi.h>

using namespace cimg_library;
using namespace  std;

// Declare colors
const unsigned char
      white[]  = { 255, 255, 255 },
	  black[] = { 0, 0, 0 },
	  red[] = { 120, 50, 80 },
      yellow[] = { 200, 155, 0 },
	  green[] = { 30, 200, 70 },
	  purple[] = { 175, 32, 186 },
      blue[] = { 55, 140, 185 },
	  grey[] = { 127, 127, 127 };



void first_item(){
	CImg<unsigned char> first_picture("use_1.bmp");
	first_picture.display("use_1");
}


void second_item(){
	CImg<unsigned char> second_picture("use_2.bmp");
	second_picture.display("use_2");
}

void third_item(){
	CImg<unsigned char> third_picture("use_6.bmp");
	third_picture.display("use_6");
}


void start_item(const unsigned int menu_number) {
  switch (menu_number) {
  case 1:{
  		first_item();
        puts("Calling first item...");
	 	ShellExecute(NULL, "open", "MainMenu.exe", NULL, NULL, SW_SHOWNORMAL);		
  		break;
  		}
  case 2:{
  		third_item();
		puts("Calling third item...");
	 	ShellExecute(NULL, "open", "About Us.html", NULL, NULL, SW_SHOWNORMAL);	
        break;
   		 }   
	case 3:{
		break;
		third_item();
		puts("Calling third item..."); 
		ShellExecute(NULL, "open", "FINAL CODE.html",NULL, NULL, SW_SHOWNORMAL);
        break;
		}     
  default:
          break;
  }
}


int main(int argc, char **argv) {

  const unsigned int NUM_OF_ITEMS = 3;
  const unsigned int TEXT_HEIGHT = 22;
  const unsigned int TEXT_INCREMENT = 15;

  unsigned int menu_number = cimg_option("-run",0,0);
  
  if (menu_number)
  	start_item(menu_number);
  else {
    cimg::info();

    // Initial height
    int y0 = 2*TEXT_INCREMENT;
    
    // Set-up the text background with title highlight
    CImg<unsigned char> back("use_3.bmp");
    back.draw_rectangle(0,y0 - 7,back.width() - 1,y0 + 20,white);
    
    // Set-up the text foreground, text, image;
    CImg<unsigned char> fore, text, img;

	fore.assign(back.width(),50,1,1,0).draw_text(20,y0 - 3,"MGM Grand",grey,0,1,23);
    (fore+=fore.get_dilate(3).dilate(3)).resize(-100,-100,1,3);

    text.draw_text(1,1,
				   "\t\t\t\t\tAdministration\n"
				   "\t\t\t\t   About Us (HTML)\n"
				   "\t\t\t\t\t\t  Exit\n",
                   white,0,1,TEXT_HEIGHT).resize(-100,-100,1,3);
                   
    fore.resize(back,0).draw_image(20,y0 + 3*TEXT_INCREMENT,text|=text.get_dilate(3)>>4);

    CImgDisplay disp(back,"Main Menu",0,false,true);
    disp.move((disp.screen_width() - disp.window_width())/2,(disp.screen_height() - disp.window_height())/2);
    img = back;
	back*=0.15f;
	
    for (y0 += 3*TEXT_INCREMENT; !disp.is_closed() && !disp.is_keyQ() && !disp.is_keyESC(); menu_number = 0) {
    	
      while (!menu_number && !disp.is_closed() && !disp.is_keyQ() && !disp.is_keyESC()) {

	    img*=0.85f; img+=back;

		// Display foreground text
        const unsigned char *ptrs = fore.data();
        cimg_for(img,ptrd,unsigned char) {
			const unsigned char val = *(ptrs++);
			if (val) *ptrd = val;
		}

		// Display highlight
        const int y = (disp.mouse_y() - y0)/TEXT_HEIGHT, _y = TEXT_HEIGHT*y + y0 + 9;
        if (y >= 0 && y < NUM_OF_ITEMS) {
            img.draw_rectangle(0,_y - 10,0,1,img.width() - 1,_y + 12,0,100,0);
        }
        
        // Set button for the click
        if (disp.button()) {
			menu_number = 1 + (disp.mouse_y() - y0)/TEXT_HEIGHT;
			disp.set_button();
		}

        disp.resize(disp,false).display(img).wait(25);
      }
      start_item(menu_number);
    }
  }

  std::exit(0);
  return 0;
}

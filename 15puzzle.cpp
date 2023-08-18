// Anand Kumar (200050007)
//Lab 4 (Hint given by : Vedang Dhirendra Asgaonkar)
#include<bits/stdc++.h>
#include <FL/Fl.H> // needed in every fltk program
#include <FL/Fl_Window.H> // needed to use the Fl_Window class
#include <FL/Fl_Button.H> // needed to use the Fl_Box class
#include <FL/Fl_Radio_Button.H> // needed to use the Fl_Box class
#include <FL/Fl_Light_Button.H> // needed to use the Fl_Box class

char *int2charstar (int v) {
 char *s = new char[sizeof(int)];
 sprintf(s,"%d",v);
 return s;
};


class MyButton : public Fl_Button {
       int position;
	public:
		MyButton (int x, int y, int w, int h, const char *l); 
		int handle(int e); // e is incoming mouse event of different kinds
 };

MyButton :: MyButton (int x,int y, int w, int h, const char *l) : Fl_Button (x,y,w,h,l){
                     if(y==200) position =(x-y)/100-1; 
                     if(y==300) position =(x-y)/100+4; 
                     if(y==400) position =(x-y)/100+9; 
                     if(y==500) position =(x-y)/100+14;}
MyButton *button[16];
int MyButton :: handle (int e) { 
	if (e==FL_PUSH) {
	                   if(position==0) {if(button[1]->label()==" ") 
	                                       {const char *c= this->label(); this->label(" "); button[1]->label(c);}
	                                   if(button[4]->label()==" ")
	                                       {const char *c= this->label(); this->label(" "); button[4]->label(c);}
	                                    }
	                  if(position==3) {if(button[2]->label()==" ") 
	                                       {const char *c= this->label(); this->label(" "); button[2]->label(c);}
	                                   if(button[7]->label()==" ")
	                                       {const char *c= this->label(); this->label(" "); button[7]->label(c);}
	                                    } 
	                  if(position==12) {if(button[8]->label()==" ") 
	                                       {const char *c= this->label(); this->label(" "); button[8]->label(c);}
	                                   if(button[13]->label()==" ")
	                                       {const char *c= this->label(); this->label(" "); button[13]->label(c);}
	                                    }                
	                  if(position==15) {if(button[14]->label()==" ") 
	                                       {const char *c= this->label(); this->label(" "); button[14]->label(c);}
	                                   if(button[11]->label()==" ")
	                                       {const char *c= this->label(); this->label(" "); button[11]->label(c);}
	                                    }
	                  if(position==1 || position==2) {if(button[position-1]->label()==" ") 
	                                       {const char *c= this->label(); this->label(" "); button[position-1]->label(c);}
	                                   if(button[position+1]->label()==" ")
	                                       {const char *c= this->label(); this->label(" "); button[position+1]->label(c);}
	                                    if(button[position+4]->label()==" ") 
	                                       {const char *c= this->label(); this->label(" "); button[position+4]->label(c);}
	                                    }
	                  if(position==4 || position==8) {if(button[position-4]->label()==" ") 
	                                       {const char *c= this->label(); this->label(" "); button[position-4]->label(c);}
	                                   if(button[position+4]->label()==" ")
	                                       {const char *c= this->label(); this->label(" "); button[position+4]->label(c);}
	                                    if(button[position+1]->label()==" ") 
	                                       {const char *c= this->label(); this->label(" "); button[position+1]->label(c);}
	                                    }
	                  if(position==13 || position==14) {if(button[position-1]->label()==" ") 
	                                       {const char *c= this->label(); this->label(" "); button[position-1]->label(c);}
	                                   if(button[position+1]->label()==" ")
	                                       {const char *c= this->label(); this->label(" "); button[position+1]->label(c);}
	                                    if(button[position-4]->label()==" ") 
	                                       {const char *c= this->label(); this->label(" "); button[position-4]->label(c);}
	                                     }
	                  if(position==7 || position==11) {if(button[position-4]->label()==" ") 
	                                       {const char *c= this->label(); this->label(" "); button[position-4]->label(c);}
	                                   if(button[position+4]->label()==" ")
	                                       {const char *c= this->label(); this->label(" "); button[position+4]->label(c);}
	                                    if(button[position-1]->label()==" ") 
	                                       {const char *c= this->label(); this->label(" "); button[position-1]->label(c);}
	                                    }
	                  if(position>4 && position<11)
	                  {
	                  if(button[position-4]->label()==" ") 
	                                       {const char *c= this->label(); this->label(" "); button[position-4]->label(c);}
	                  if(button[position+4]->label()==" ")
	                                       {const char *c= this->label(); this->label(" "); button[position+4]->label(c);}
	                  if(button[position-1]->label()==" ") 
	                                       {const char *c= this->label(); this->label(" "); button[position-1]->label(c);}
	                  if(button[position+1]->label()==" ")
	                                       {const char *c= this->label(); this->label(" "); button[position+1]->label(c);}
                          }
                          
                          
}
	   return 0;}



int main(int argc, char *argv[]) {
    	Fl_Window *window;

window = new Fl_Window (900,900,"DEMO"); // outer window

      window = new Fl_Window (900,900,"15 Puzzle Game"); // outer window
       
       for(int i=0; i<15; i++){
      button[i] = new MyButton(100*(3+i%4),100*(i/4+2),100,100,int2charstar(i+1));
        }
        button[15]=new MyButton(600,500,100,100," ");
     

    	window->end();
    	window->show();
    	return(Fl::run());  // the process waits from here on for events
}



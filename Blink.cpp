#include <iostream>
#include <coni.h>
#include <windows.h>
using namespace std;
int x,y,b,l,n=0;
char c;
void blink()
{
	{
		int m;
		for(m=10;m<15;m++)
		{
			textcolor(m);
			gotoxy(x,y);
			cout<<"\t\t\t\tWelcome";
			Sleep(60);
		}
   }
}
int main(int argc, char** argv)
{
   char i;int key_stroke;
   textcolor(10);
   x=wherex();y=wherey();
   cout<<"\t\t\t\tWelcome\n";
   textcolor(15);
   cout<<"\nEnter your name\n";
   l=wherex();b=wherey();
   z:
   {
     while (1)
     {
	      if(!(_kbhit()))
        {
		       blink();
			     goto z;
        }
        else 
	      {
	         i=_getch();
	         if(i==13)
	         {
	      	    gotoxy(l+n,b+1);
			        return 0;
		       }
		       textcolor(10);
		       gotoxy(l+n,b);
		       cout<<i;n=n+1;
	      }
     }
   }
   return 0;
}

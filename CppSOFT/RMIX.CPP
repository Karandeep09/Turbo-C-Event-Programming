#include<fstream.h>
#include<iomanip.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
#include<math.h>
#include<stdio.h>
#include"cppsoft\snak.cpp"
#include"cppsoft\egg.cpp"
#include"cppsoft\kbc.cpp"
#include"cppsoft\da.cpp"
#include"cppsoft\man.cpp"
#include"cppsoft\pian.cpp"
#include"cppsoft\calen.cpp"
#include"cppsoft\chat.cpp"
#include"cppsoft\t.cpp"
#include"cppsoft\s.cpp"
void main()
{ clrscr();
  void st();
  void menu();
  textbackground(1);
  st();
  menu();
 getch();
}

void menu()
{  char ch;
  while(1)
   {  clrscr();
     gotoxy(35,1);
     cout<<"Menu";
      gotoxy(35,5);
     cout<<"0. Egg catching game";
      gotoxy(35,6);
     cout<<"1. Kaun Banega Crorepati";
      gotoxy(35,7);
     cout<<"2. Find day on that date";
      gotoxy(35,8);
     cout<<"3. Moving man game";
      gotoxy(35,9);
     cout<<"4. Keystroke Piano";
      gotoxy(35,10);
     cout<<"5. Anytime Calendar";
      gotoxy(35,11);
     cout<<"6. Snake Game";
       gotoxy(35,12);
     cout<<"7. Chatbot";
       gotoxy(35,13);
     cout<<"8. Tennis";
       gotoxy(35,14);
     cout<<"9. Snake 2";

      ch=getch();
      switch(ch)
      {case '0':eggame();break;
       case '1':kbcmod();break;
       case '2':dayfind();break;
       case '3':man();break;
       case '4':pianclas();break;
       case '5':calen();break;
       case '6':snakgb();break;
      case '7':chatter();break;
      case '8':tennis();break;
      case '9':SN();break;
       case 27: exit(0);
       default : goto h;
      }    h:

   }
}



void st()
{  int t,i,n;
   char A[]="ÜÜÜÜÜÜ";
 for(t=0;t<300;t++)
 {  delay(10);
    clrscr();  textcolor(10);
   for( i=0;i<strlen(A);i++)
  {
      gotoxy( 40+6*sin(i+t),12+3*cos(i+t));
      cout<<A[i];
      gotoxy(37,12);
       cout<<"LOADING";
  }
 }
   char B[]="Welcome to Rolyal mix made by Karandeep & Aditya";
  for(t=-20;t<10;t++)
  {  delay(50);
     sound(500+pow(2,random(8)));
     delay(50);
     nosound();
     clrscr();
    for(i=0;i<strlen(B);i++)
   {
	gotoxy(20+t+i,12);
	cout<<B[i];
   }
  }
}
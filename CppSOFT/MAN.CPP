void man();
void man()
{ char ch,head=2,neck=157,mid=216,larm=201,rarm=187,lleg=204,rleg=185,base=202;
  char pi=227,heart=3;
  int x=35,y=12,a=40,b=10,A,B,chi=1,point=0;
  float time=0;
  clrscr();
  cout<<"\nHow quick can you match\n moving man's head";  getch();
  h:

   delay(30);
   time=time+0.030;
   if(kbhit())
   ch=getch();
   clrscr();

   if(x!=a&&y!=b)
   { gotoxy(a,b);
     cout<<"";
     chi++;
   }
   else
   { gotoxy(a,b);
     clreol();
     cout<<"";
     chi++;
   }
   if(chi%50==0)
   {a=random(70)+10;
    b=random(20)+4;}
   if(x==a&&y==b)

  { gotoxy(40,5);
    cout<<++point;
    delay(1000);
    a=random(70)+10;
    b=random(20)+4;
  }
  if (point==1)
  { clrscr();
    gotoxy(40,12);
    cout<<"Time taken"<<time<<"second";
    sleep(2);
    ch='e';
  }
 {
    if(ch=='H')
   {  y=y-1;
   }

   if(ch=='M')
   { x=x+1;
   }


   if(ch=='P')
   { y=y+1;
   }

   if(ch=='K')
   { x=x-1;
   }
   if(ch=='e')
   { goto mn;
   }

    gotoxy(x,y);
    cout<<head;
  gotoxy(x,y+1);
  cout<<neck;
  gotoxy(x,y+2);
  cout<<mid;
  gotoxy(x-1,y+1);
  cout<<heart;
  gotoxy(x-2,y+1);
  cout<<larm;
  gotoxy(x+2,y+1);
  cout<<rarm;
    gotoxy(x-2,y+2);
  cout<<base;
  gotoxy(x+2,y+2);
  cout<<base;
  gotoxy(x-1,y+3);
  cout<<lleg;
  gotoxy(x+1,y+3);
  cout<<rleg;

  gotoxy(x-1,y+4);
  cout<<base;
  gotoxy(x+1,y+4);
  cout<<base;

   goto h;

 }


getch();
mn:
}
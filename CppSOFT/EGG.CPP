
 void eggame();
 void eggame()
{ { clrscr();
   int x=40,score=0,life=5;
   char a;
    textbackground(BLUE);
   while(x<68&&x>1)
  { int m=0,n=35;
   up:
   if(kbhit())
       a=getch();
       if(a=='M'||x==2)
      {  x=x+2;}
       if(a=='K'||x>67)
      { x=x-2;}
       if(a=='e')
       {exit(0);}
       clrscr();
   { gotoxy(x,23);
     if(score<10)
     textcolor(11);
     if(score>=10)
     textcolor(m);
     cprintf("Û           Û");
     gotoxy(x,24);
     cprintf("ÞÜÜÜÜÜÜÜÜÜÜÜÝ");
     void egg(int&m,int&n);
      if (m==22)
     { if(n>x&&n<x+12)
       {
	score=score+1;
       }
       else
       life-=1;
     }
     textcolor(13+BLINK);
     gotoxy(33,2);
      cprintf("Catch these eggs ");
      gotoxy(37,3);
      textcolor(14);
      if(score<10)

       cprintf("LEVEL 1");

      else if(score<20)
      cprintf("LEVEL 2");
      else
      cprintf("LEVEL 3");
       void l(int);
       l(life);
       gotoxy(70,5);
       textcolor(10);
       cprintf("Score:.... ");
       gotoxy(77,5);
       cout<<score;


      m=m+1;
      if(m==23)
      { n=random(70)+5;
	m=1;
      }
     void gameover(int);
       if (life==0)
       { gotoxy(35,12);
	 cout<<"Game Over";
	 for(int z=0;z<100;z++)
	{ sound(random(200)+300);
	  gotoxy(random(80)+1,random(24)+1);
	  cprintf("*");
	  textcolor(z);
	  delay(30);
	}
	nosound();
	 delay(1000);
	 clrscr();
	 gameover(score);
	 getch();
	    goto oo;
       }
      int mx=score;

     void level2(int);

     if(mx>=10&&mx<20)
    {
      level2(m);

    }
      void level3(int);

     if(mx>=20)
    {
      level3(m);

    }
     egg(m,n);
     goto up;
   }
  }
   getch();
}oo:}
    void egg(int &i,int &x)
    {
      char egg='';

	gotoxy(x,i);
	textcolor(YELLOW);
	cout<<egg;
	delay(80);



    }
     void gameover(int l)
     {
       gotoxy(35,12);
       textcolor(4);
       cout<<"Your Score : "<<l;
       delay(1000);
       gotoxy(35,15);
       write(l,"egg.dat");
     }
     void l(int x)
     {
	char a=3;
	while(x>0)
	 { textcolor(12);
	   gotoxy(70+x,2);
	   cprintf(".");
	   gotoxy(70+x,2);
	   cout<<a;
	   x--;
	 }
     }
     void level2(int m)
     { int x,y;
       for(x=1;x<=80;x++)
       {  gotoxy(x,25);
	  if(x%16!=0)
	  textcolor(x+1+m);
	  if(x%16==0)
	  textcolor(2);

	   cprintf("Ü");
       }



     }
      void level3(int m)
     { int x,y;
       for(x=1;x<=80;x++)
       {  gotoxy(x,25);
	  if(x%16!=0)
	  textcolor(fabs(x+1-m));
	  if(x%16==0)
	  textcolor(2);

	   cprintf("Ü");
       }
	for(x=80;x>=1;x--)
       {  gotoxy(x,20);
	  if(x%16!=0)
	  textcolor(x+1+m);
	  if(x%16==0)
	  textcolor(2);

	   cprintf("Ü");
       }


     }
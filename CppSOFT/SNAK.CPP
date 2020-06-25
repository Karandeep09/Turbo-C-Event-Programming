void write(int,char*);
void snakgb();
void snakgb()
{ clrscr();       int food();
  textbackground(3);
int x=20,y=12,A[2][500],i,j,s=2,t=0,f,X,Y,inc=1;
/*2D array used for storing x and y coordinate of snake body
  s= score or number of characters in (body of snake + food)
  t used for giving time dependent output for food and controlling speed
*/
    textcolor(9);
   char ch,a=4;     // a is character having Ascii 4
   for(i=0;i<s;i++)
   {
     A[0][i]=i+1;   //initial values of coordinates
     A[1][i]=y;
   }
    for(i=0;i<s;i++)
 {
     gotoxy(2*A[0][i],A[1][i]);  //initial output of snake body
      cout<<a;


 }

   while(++t && x!=81 && x!=-2 && y!=0 && y!=26)
 // x and y should satisfy above condition for setting constraints for snake
 // otherwise game over
{   gotoxy (70,1);
    textcolor(1);
  cprintf("Score : ");cprintf("%i",s);
   if((t-1)%100==0)
       {f=food(); // food() returns (x-coordinate*100+y-coordinate) for putting food
	X=f/100;  // Digit extraction
	Y=f%100;
       }


     if(kbhit()) //If any key pressed from keyboard
   ch=getch();   // pressed character stored in ch


  switch(ch) // following are characters stored pressing arrow keys
 { case 'H': y-=1; break;
   case 'M': x+=1; break;
   case 'P': y+=1;  break;
   case 'K': x-=1; break;
   case 27  :{nosound();exit(0);}    // 27 is ascii for esc
 }



   gotoxy(1,1);

   {
		  // coordinates of moving snake shown top left corner
     cout<<2*A[0][s-1]<<" ";
     cout<<A[1][s-1];
     cout<<endl;
     cout<<X<<" "<<Y;
   }
     for(i=0;i<s-1;i++)
 {
     gotoxy(2*A[0][i],A[1][i]);
      cout<<a;   // snake as output after execution of loop
		 // size depends on s and coordinates stored in array
		 // by using random in food()


 }
       for(i=0;i<s-3;i++)
   {  if(2*A[0][s-1]==2*A[0][i] && A[1][s-1]==A[1][i])
     {  //If any of the coordinate of snake mathes with coordinate of its mouth
       gotoxy(2*A[0][i],A[1][i]);
       textcolor(RED);
       cprintf("*");  // Snake bites itself

 goto k;// jumping just after end of while -> gameover -> bitten by itself
      }
   }

    gotoxy(X,Y);
    textcolor(5);
    cprintf(""); // food
    if(2*A[0][s-1]==X && A[1][s-1]==Y) //Food eating condition
  {  s+=1;
 f=food();  /* food() returns (x-coordinate*100+y-coordinate) for putting next
	       food*/
	X=f/100;  // Digit extraction
	Y=f%100;

     A[0][s-1]=x;
     A[1][s-1]=y;

  }
  // shifting previous values to accomodate new values to increase size
  for(i=0;i<s-1;i++)
  { A[0][i]=A[0][i+1];
    A[1][i]=A[1][i+1];
  }

 A[0][s-1]=x;
   A[1][s-1]=y;
int t_=t%63;
{  if(t_>=0&&t_<2) sound(311);    //D#
   else if(t_>=2&&t_<4||t_>=16&&t_<18) sound(277);    //C#
   else if(t_>=4&&t_<6||t_>=18&&t_<20) sound(329);   //E
   else if(t_>=6&&t_<8||t_>=20&&t_<22) sound(277);   //C#
   else if(t_>=8&&t_<10||t_>=22&&t_<24) sound(311);    //D#
   else if(t_>=10&&t_<12||t_>=24&&t_<26) sound(247);    //B
   else if(t_>=12&&t_<14||t_>=26&&t_<28) sound(277);    //C#
   else if(t_>=14&&t_<16||t_>=28&&t_<30)sound(247);    //B

   else if(t_==30)nosound();//delay(100);
   else if(t_==31)sound(311);//delay(250);   //D#
   else if(t_==32)sound(329);//delay(250); //E
   else if(t_>=33&&t_<35)sound(415);//delay(400);   //G#
   else if(t_>=35&&t_<37)sound(440);//delay(400);	       //A
   else if(t_>=37&&t_<39)sound(415);//delay(450);   //G#
   else if(t_>=39&&t_<41)sound(440);//delay(400);		 //A
   else if(t_>=41&&t_<43)sound(415);//delay(400);   //G#
   else if(t_>=43&&t_<45)sound(440);//delay(400);	       //A
   else if(t_>=45&&t_<47)sound(415);//delay(400);  //G#

   else if(t_==47)sound(311);//delay(250);  //D#
   else if(t_==48)sound(329);//delay(250);   //E
   else if(t_>=49&&t_<51)sound(370);//delay(400);    //F#
   else if(t_>=51&&t_<53)sound(415);//delay(400);    //G#
   else if(t_>=53&&t_<55)sound(370);//delay(450);    //F#
   else if(t_>=55&&t_<57)sound(415);//delay(400);   //G#
   else if(t_>=57&&t_<59)sound(370);//delay(400);    //F#
   else if(t_>=59&&t_<61)sound(415);//delay(400);   //E
   else if(t_==62)sound(370);//delay(400);    //D#
   else nosound();

}
       delay(100-sqrt(t)); // speed incerease by reducing delay time
       clrscr();
}  //end of while
// Each iteration of while  loop like a frame of video
 k: gotoxy(35,12);
  nosound();
  cout<<"GAME ÷ OVER";
  gotoxy(40,20);

  sleep(2);  // 2 second pause


  write(s,"scr.dat");
}
     int food()
     {   int n,m,p;
	 n=2*random(37)+2;
	 m=random(17)+5;
	p=n*100+m;
	 return p;

     }
    void write(int score,char *fname)
     { struct data
	 { char name[20];
	  int scr;

	 } obj;    // scope -> inside this function
	 obj.scr=score;
       ofstream fo(fname,ios::app|ios::binary);
       cout<<"Enter your name : ";
       gets(obj.name);
       if(strcmp(obj.name,"")==0)
       strcpy(obj.name,"Anonymous");
       fo.write((char*)&obj,sizeof(obj));
	fo.close();
	gotoxy(1,1);
       ifstream fi(fname,ios::in|ios::binary); clrscr();
       cout<<setw(12)<<"Name"<<setw(10)<<"Score"<<endl;
	   while(!fi.eof())
	 {  fi.read((char*)&obj,sizeof(obj));
	      cout<<setw(15)<<obj.name<<setw(5)<<obj.scr<<endl;
	      delay(200);
	 }

	 fi.close();

	    getch();
     }


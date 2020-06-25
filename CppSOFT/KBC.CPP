
void kbcmod();
void kbcmod()
{ void start();
  void sound();
  void questions();
//  start();
  sound();
  questions();

}
void start()
{ clrscr();
float n,a;
char c[]="Welcome to",d[]="Kaun  Banega  Crorepati";
int q;
int f=0;
{for(int I=-10;I<=19;I++)
{for(int j=-12;j<=12;j++)
   if(j>=sin(I)-6&&j<=sin(I)-5&&c[f]!='\0')
  { gotoxy(2*I+50,j+15);
   cout<<c[f];
   delay(20);
   f++;
  }
}}

 f=0;
{for(int I=-10;I<=20;I++)
{for(int j=-12;j<=12;j++)
   if(j>=sin(I)&&j<=sin(I)+1&&d[f]!='\0')
  { gotoxy(2*I+40,j+12);
   cout<<d[f];
   delay(200);
   f++;
  }
}}getch();
clrscr();

gotoxy(0,0);
cout<<"||    ))  ||===))    []====]\n";
cout<<"||  ))    ||    ))   []     \n";
cout<<"||))      ||===))    []     \n";
cout<<"||  ))    ||    ))   []     \n";
cout<<"||    ))  ||===))    []====]\n";
getch();
}

void sound()

{float n=2;

sound(261*n);
delay(400);
sound(294*n);
delay(500);
sound(311*n);
delay(500);
sound(261*n);
delay(400);
sound(293*n);
delay(500);
sound(311*n);
delay(500);
sound(261*n);
delay(400);
sound(293*n);
delay(400);
sound(311*n);
delay(400);
sound(349*n);
delay(400);
sound(392*n);
delay(400);
nosound();
 getch();
}
void questions()
{ char ans;
  char timer(char&);
  void answer_1();
  void answer_2();
  void answer_3();
  void answer_4();
  void wrong_ans(long);
  char x;
  clrscr();
  long ln;
  gotoxy(2,10);
  cout<<"Q1. Which country has the longest coast line ?          Rs.5000\n";
  cout<<"     1.India                2.China\n";
  cout<<"     3.Canada               4.Costa Rica\n";
  ans=timer(x);
  if(ans=='1'||ans=='2'||ans=='4')
  { ln=0;wrong_ans(ln);goto mn;  }
  else
  answer_3();

  clrscr();
gotoxy(2,10);
cout<<"Q2. In the Ramayana, which demon impersonated Rama's voice ?          Rs.10000\n";
cout<<"     1.Surpnakha                2.Khara\n";
cout<<"     3.Marich                   4.Dusana";
  ans=timer(x);
   if(ans=='1'||ans=='2'||ans=='4')
  {ln=5000;wrong_ans(ln);goto mn;}
  else
  answer_3();
   clrscr();
gotoxy(2,10);
cout<<"Q3. Doughlas Engelbert inventor of ?          Rs.20000\n";
cout<<"     1.Mobile                  2.Bluetooth\n";
cout<<"     3.Camera                  4.Computer mouse";
   ans=timer(x);
     if(ans=='1'||ans=='2'||ans=='3')
  {ln=10000;wrong_ans(ln);goto mn;}
  else
  answer_4();
   clrscr();
   gotoxy(2,10);
   cout<<"Q4. In which of these games does the player have to target animated pigs  ?     Rs.40000\n";
cout<<"     1.Angry Birds                  2.Super Mario\n";
cout<<"     3.Candy Crush Saga             4.Temple run";
    ans=timer(x);
      if(ans=='3'||ans=='2'||ans=='4')
  {ln=20000;wrong_ans(ln);goto mn;}
  else
  answer_1();
    clrscr();
gotoxy(2,10);
cout<<"Q5. Which of these plants doesnot prepare its food through photosynthesis  ?     Rs.80000\n";
cout<<"     1.Cactus                  2.Cotton Plant\n";
cout<<"     3.Money Plant             4.Mushroom";
  ans=timer(x);
    if(ans=='1'||ans=='2'||ans=='3')
{ ln=40000;wrong_ans(ln);goto mn;}
  else
  answer_4();
  clrscr();
gotoxy(2,10);
cout<<"Q6. On Facebook, which of these buttons is denoted by a 'thumbs up' symbol  ?    Rs.1,60,000\n";
cout<<"     1.News Feed               2.Status\n";
cout<<"     3.Like                    4.Poke";
  ans=timer(x);
   if(ans=='1'||ans=='2'||ans=='4')
    {ln=80000; wrong_ans(ln);goto mn;}
  else
  answer_3();
  clrscr();
gotoxy(2,10);
  cout<<"Q7. Which of these birds has the largest eyes  ?     Rs.3,20,000\n";
cout<<"     1.Hawk                       2.Vulture\n";
cout<<"     3.Ostrich                    4.Penguin";
 ans= timer(x);
    if(ans=='1'||ans=='2'||ans=='4')
  {ln=160000;wrong_ans(ln);goto mn;}
  else
  answer_3();
  clrscr();
gotoxy(2,10);
cout<<"Q8. Which river, a headstream of Ganga, flows by the Badrinath Shrine ?  Rs.6,40,000\n";
cout<<"     1.Dhauliganga                       2.Mandakini\n";
cout<<"     3.Bhagirathi                        4.Alaknanda";
 ans= timer(x);
   if(ans=='1'||ans=='2'||ans=='3')
  {ln=320000;wrong_ans(ln);goto mn;}
  else
  answer_4();
  clrscr();
gotoxy(2,10);
cout<<"Q9. What is at the center of milky way ?     Rs.12,50,000\n";
cout<<"     1.Black Hole                       2.Sun\n";
cout<<"     3.Star                             4.Milk";
 ans=timer(x);
   if(ans=='3'||ans=='2'||ans=='4')
  {ln=640000;wrong_ans(ln);goto mn;}
  else
  answer_1();
 clrscr();
gotoxy(2,10);
cout<<"Q10.With which of these states does Telangana not share its border ?   Rs.50,00,000\n";
cout<<"     1.Tamil Nadu                       2.Karnataka\n";
cout<<"     3.Maharashtra                      4.Chattisgarh";
 ans=timer(x);
    if(ans=='3'||ans=='2'||ans=='4')
 {ln=125000; wrong_ans(ln);goto mn;}
  else
  answer_1();
 clrscr();
 gotoxy(2,10);
 cout<<"Q11.Which of these name(s) cannot be used as a file name on windows ?   Rs. 1 crore\n";
cout<<"     1.CON                       2.WIN\n";
cout<<"     3.DOS		       4.All of these";
 ans=timer(x);
   if(ans=='3'||ans=='2'||ans=='4')
{ ln=5000000; wrong_ans(ln);goto mn;
}
  else
  {  clrscr();
      cout<<"Ek crore . Aap  crorepati ban gae "; }
getch();    mn:
}
   char timer(char&)
 {  int i,j;
    char ans;
    while(!kbhit())
    { for( i=30;i>=0;i--)

      {  gotoxy(20,9);
	 cout<<":"<<i;
	 sound(200);
	 delay(100);
	 nosound();
	 delay(900);
	 gotoxy(20,9);
	 clreol();
	 cout<<i;
	if(kbhit())
	{ans=getch();
	if(ans=='1'||ans=='2'||ans=='3'||ans=='4')
	return(ans);}
      }

	  if(i==0)
	 goto d;

      }

     d:
     if(i==0)
     { gotoxy(20,9);
       cout<<"Time up!";
       for(i=200;i<=700;i++)
      { sound(i);
	delay(2);
      }
       for(i=700;i>=200;i--)
      { sound(i);
	delay(2);
      }
      nosound();
       getch();
       goto mn;
     }


mn: }
   void answer_1()
   {gotoxy(2,14); cout<<"1. is the correct answer";
   }
    void answer_2()
   {gotoxy(2,14);
    cout<<"2. is the correct answer";
   }
    void answer_3()
   {gotoxy(2,14);
    cout<<"3. is the correct answer";
   }
    void answer_4()
   {gotoxy(2,14);
    cout<<"4. is the correct answer";
   }
   void wrong_ans(long m)
   {gotoxy(2,14);
    cout<<"Oh ye sahi uttar nahi hai\n";


    cout<<" aap jeet rahe hain Rs.\n"<<m;delay(1500);
    if(m>40000)
   {  cout<<"\nDevion aur sajjanon \n"; delay(2000);
    cout<<"\nA big round of applause ";
   }
   getch();
   }
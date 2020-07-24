void tennis();
void tennis()
{
  textbackground(1);
  textcolor(WHITE);
 clrscr();
 char ball=2,cont,slab11=178,slab12=178,slab13=178,slab14=178,slab21=178,slab22=178,slab23=178,slab24=178,net=179,bound=196;
 int score1=0,score2=0,speed=100,bx=35,by=12,xdir=1,ydir=3,s11y=11,s12y=12,s13y=13,s14y=14,s21y=11,s22y=12,s23y=13,s24y=14;



 for(int firstloop=0;;firstloop++)
 {clrscr();
  nosound();

  ////////////////////////////    construction   ////////////////////////////

  for(int n=1;n<=24;n++)
  {gotoxy(37,n);cout<<net;}
  for(int b=1;b<81;b++)
  {gotoxy(b,1);cout<<bound;}
  for(int b2=1;b2<81;b2++)
  {gotoxy(b2,24);cout<<bound;}
  ///////////////////////////       ball        ////////////////////////////
  gotoxy(bx,by);
  cout<<ball;
  xdir;

 gotoxy(56,2);
 cout<<"score: "<<score2;

 gotoxy(14,2);
 cout<<"score: "<<score1;

  //////////////////////////     game logic    /////////////////////////////

  if(xdir==0)
  bx--;
  if(xdir==1)
  bx++;
  if(ydir==0)
  by++;
  if(ydir==1)
  by--;


  if((bx==78)&&(by==s11y))
  {xdir=0;ydir=1;sound(500);}
  if((bx==78)&&(by==s12y))
  {xdir=0;ydir=3;sound(500);}
  if((bx==78)&&(by==s13y))
  {xdir=0;ydir=3;sound(500);}
  if((bx==78)&&(by==s14y))
  {xdir=0;ydir=0;sound(500);}


  if(bx==79)
  {score1++;
   sound(400);delay(100);sound(300);delay(200);nosound();
   gotoxy(20,12);
   cout<<"good hit player 1. Press any key to service.";
   delay(2000);
   bx=3;by=s12y;
   getch();

  }
  if(bx==1)
  {score2++;
  sound(400);delay(100);sound(300);delay(200);nosound();
  gotoxy(20,12);
   cout<<"good hit player 2. Press any key to service.";
   delay(2000);
   bx=78;by=s22y;
   getch();


  }


  if((bx==3)&&(by==s21y))
  {xdir=1;ydir=1;sound(500);}
  if((bx==3)&&(by==s22y))
  {xdir=1;ydir=3;sound(500);}
  if((bx==3)&&(by==s23y))
  {xdir=1;ydir=3;sound(500);}
  if((bx==3)&&(by==s24y))
  {xdir=1;ydir=0;sound(500);}
  if(by==1)
  ydir=0;
  if(by==24)
  ydir=1;


 ////////////////////////////    slab output  /////////////////////////////////
  gotoxy(79,s11y);
  cout<<slab11;
  gotoxy(79,s12y);
  cout<<slab12;
  gotoxy(79,s13y);
  cout<<slab13;
  gotoxy(79,s14y);
  cout<<slab14;

  gotoxy(2,s21y);
  cout<<slab21;
  gotoxy(2,s22y);
  cout<<slab22;
  gotoxy(2,s23y);
  cout<<slab23;
  gotoxy(2,s24y);
  cout<<slab24;


 ///////////////////////////////   controll    //////////////////////////////
  if(kbhit())
  {
  cont=getch();
  if((cont=='H')&&(s11y!=2))
  {s11y--;s12y--;s13y--;s14y--;}
  if((cont=='P')&&(s14y!=23))
  {s11y++;s12y++;s13y++;s14y++;}
  if((cont=='w')&&(s21y!=2))
  {s21y--;s22y--;s23y--;s24y--;}
  if((cont=='s')&&(s24y!=23))
  {s21y++;s22y++;s23y++;s24y++;}
  if(cont=='q')
  goto oo;
  }

 //////////////////////////////    game speed & score  //////////////////////////////
 delay(speed);


 }

oo:}
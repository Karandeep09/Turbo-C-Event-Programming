
void dayfind();
void dayfind()
{int date,month_code,month,y,Y,Year,day,n,w,century_code;
 clrscr();
 char a[11],i,name[20];

  cout<<"Last user: "<<name;
   delay(1000);
 clrscr();

 cout<<"\n\nEnter Your Name : ";cin>>name;
 clrscr();
 gotoxy(34,11);
 cout<<"Hello! ";
 for(i=0;name[i]!='\0';i++)
 {cout<<name[i];
  delay(100);
 }
 char b[]="Welcome To Day Finder\n";
 gotoxy(30,12);
 for(i=0;b[i]!='\0';i++)
 {cout<<b[i];
  delay(100);

 }
 delay(800);
 clrscr();
 char c[]="Made by Karandeep Singh\n";
  gotoxy(30,12);
 for(i=0;c[i]!='\0';i++)
 {cout<<c[i];
  delay(100);

 }
 sleep(2);
 clrscr();

 cout<<"Press any key to continue:\t";
 n=getch();
 g:
 clrscr();
 cout<<"Enter date month and year in format\n (dd mm yyyy)\n";
 char A,B,C,D,E,F,G,H;
 A=getche();
 B=getche();

 if(A<=57&&A>=48)
 {cout<<"/";
 }
 else
 {cout<<"Enter number ";
 goto g;
 }
 int aa=A,bb=B;
 date=(aa-48)*10+bb-48;
 if (date>31||date<1)
 { cout<<" Check your input";
   delay(2000);
   goto g;
 }
 C=getche();
 D=getche();

 if(D<=57&&D>=48)
 { cout<<"/";
 }
 int cc=C,dd=D;
 month=(cc-48)*10+dd-48;

 if(month>12||month<1)
 { cout<<" Enter correct value ";
   delay(2000);
   goto g;
 }
  if (date==31)
 {  if(month==4||month==6||month==9||month==11)
     {
       cout<<"\n Check your input .This month has 30 day ";
       delay(2000);
       goto g;
     }

 }
    if(date==30||date==31)
    { if(month==2)
      { cout<<" \nInvalid input";
       delay(2000);
       goto g;
      }
    }
 E=getche();
 F=getche();
 G=getche();
 H=getche();

 int ee=E,ff=F,gg=G,hh=H;
 Year=(ee-48)*1000+(ff-48)*100+(gg-48)*10+(hh-48);
 if(month==2)
 { if (!(Year%400==0 || (Year%4==0 && Year%100!=0) )
     { if(date>28)
       {cout<<" February cannot have "<<date<<" days for "<<Year;
	delay(3500);
	goto g;
       }
     }

 }

 switch(month)
 {
   case 1 : month_code=1;
	    break;
   case 2 :  month_code=4;
	    break;
   case 3 :  month_code=4;
	    break;
   case 4 :  month_code=0;
	    break;
   case 5 :  month_code=2;
	    break;
   case 6 :  month_code=5;
	    break;
   case 7 :  month_code=0;
	    break;
   case 8 :  month_code=3;
	    break;
   case 9 :  month_code=6;
	    break;
   case 10:  month_code=1;
	    break;
   case 11:  month_code=4;
	    break;
   case 12:  month_code=6;
	    break;
   default:cout<<"Bug!!!!";

	   clrscr();

 }
    w=Year;
     if(w%400==0 || (w%4==0 && w%100!=0))
     { if (month==1||month==2)
	 {month_code=month_code--;
	 }


     }
     y=Year/100;
     Y=Year%100;
     if(y%4==0)
     { century_code=6;
     }
      if(y%4==1)
     {century_code=4;
     }
      if(y%4==2)
     {century_code=2;
     }
      if(y%4==3)
     {century_code=0;
     }

    /* cout<<"month code";
     cout<<"century "<<century_code<<"\n";
     cout<<"date "<<date<<"\n";
     cout<<"year first  digits "<<y<<"\n";
     cout<<"Year last digits "<<Y<<"\n";
     */

    day=(date+month_code+Y+Y/4+century_code)%7;
    {gotoxy(5,15);
     cout<<"\nDay on "<<date<<"/"<<month<<"/"<<Year<<"\n";
    }

     switch(day)
     { case 0 : cout<<"Saturday";
		break;
       case 1 :  cout<<"Sunday";
		break;
       case 2 :  cout<<"Monday";
		break;
       case 3 :  cout<<"Tuesday";
		break;
       case 4 :  cout<<"Wednesday";
		break;
       case 5 :  cout<<"Thursday";
		break;
       case 6 : cout<<"Friday";
		break;
       default:cout<<"bug!!!!";
	       cout<<day;
     }
     gotoxy(30,20);
     cout<<"Press any key to rerun Program";gotoxy(33,22);cout<<" or Esc to exit ";
     char ex;
     ex=getch();


     int EX=ex;
     if(EX!=27)
     {goto g;
     }
     else if(EX==27);
     {
       goto f;
     }

 getch();f:

}


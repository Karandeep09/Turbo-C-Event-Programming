void calen();
class calendar
{ int day;
  char month[10];
  int year;
  public:
      void in();
      int pro(); //returning no. of days in that month
      void out(int);// argument taking no. of days
};
      void calendar::in()
      {  cout<<"ENTER YEAR (Numbers):"; cin>>year;
	 cout<<"ENTER MONTH (letters):";gets(month);
      }
      int calendar::pro()
      {  int m_no,x;
	   if((strcmpi(month,"January")==0)&&(year%400==0 || (year%4==0 && year%100!=0)))
	  {  m_no=0;
	     x=31;
	  }
	   else if(strcmpi(month,"January")==0)
	   { m_no=1;
	     x=31;
	   }
	     if((strcmpi(month,"February")==0)&&(year%400==0 || (year%4==0 && year%100!=0)))
	   { m_no=3;
	     x=29;
	   }
	    else if(strcmpi(month,"February")==0)
	    {m_no=4;
	     x=28;
	    }
	     if((strcmpi(month,"March")==0))
	    {m_no=4;
	     x=31;
	    }
	     if((strcmpi(month,"April")==0))
	    {m_no=0;
	     x=30;
	    }
	     if((strcmpi(month,"May")==0))
	    {m_no=2;
	     x=31;
	    }
	     if((strcmpi(month,"June")==0))
	    {m_no=5;
	     x=30;
	    }
	     if((strcmpi(month,"July")==0))
	    {m_no=0;
	     x=31;
	    }
	     if((strcmpi(month,"August")==0))
	    {m_no=3;
	     x=31;
	    }
	     if((strcmpi(month,"September")==0))
	    {m_no=6;
	     x=30;
	    }
	     if((strcmpi(month,"October")==0))
	    {m_no=1;
	     x=31;
	    }
	     if((strcmpi(month,"November")==0))
	    {m_no=4;
	     x=30;
	    }
	     if((strcmpi(month,"December")==0))
	    {m_no=6;
	     x=31;
	    }

	     if(year/100==20)
	      day=(1+(m_no)+(year%100)+((year%100)/4)+6)%7;
	      if(year/100==19)
	      day=(1+m_no+(year%100)+((year%100)/4))%7;//day on date 1

       // *********************************************************** \\
	      return x;

       }

     void calendar::out(int var)   // var = "no. of days of that month"
     {
	 textcolor(RED);
	gotoxy(35,4);
	cout<<month<<"  "<<year<<endl<<endl;
	cprintf("Sunday");
	cout<<setw(12)<<"Monday";
	cout<<setw(12)<<"Tuesday";
	cout<<setw(12)<<"Wednesday";
	cout<<setw(12)<<"Thursday";
	cout<<setw(12)<<"Friday";
	cout<<setw(12)<<"Saturday\n";

	   if(day==0)
	    cout<<setw(75)<<1<<endl;
	   else if(day==1)
	    {
	      cout<<setw(3)<<1;
	    }
	   else if(day==2)
	    cout<<setw(15)<<1;
	   else if(day==3)
	    cout<<setw(27)<<1;
	   else if(day==4)
	    cout<<setw(39)<<1;
	   else if(day==5)
	    cout<<setw(51)<<1;
	     if(day==6)
	    cout<<setw(63)<<1;
	    day++;
	for(int i=2;i<=var;day++,i++)
	{
	   if(day%7==0)
	  cout<<setw(12)<<i<<endl; //date on last day of row in output
				   //Saturday
	     else if(day%7==1)
	  {  cout<<" ";
	     if(day<10)
	     {cprintf(" ");cprintf("%i",i);}
	     else
	     cprintf("%i",i);
	  }
	   else
	   cout<<setw(12)<<i;

	   delay(100);
	  }
     }
void calen()
{ clrscr();
 calendar obj;
 obj.in();
 int x=obj.pro();
 obj.out(x);


getch();
}

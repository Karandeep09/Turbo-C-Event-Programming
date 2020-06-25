void pianclas();

class Music{ char key;
	     float num,mus,oct;
	       public:
	       char input();
	       void assign();
	       void process();
	       void play();
	       Music()
	       { oct=1;
	       }
	    };

    char Music::input()
    {  key=getch();
       return key;
    }
    void Music::assign()
    {  if(key=='M')
       {oct=oct+0.1;}
       if(key=='K')
       {oct=oct-0.1;}

       if(key=='	')
       { num=1;
       }
       else if(key=='1')
       { num=2;
       }
       else if(key=='q')
       { num=3;
       }
       else if(key=='2')
       { num=4;
       }
       else if(key=='w')
       { num=5;
       }
       else if(key=='e')
       { num=6;
       }
       else if(key=='4')
       { num=7;
       }
       else if(key=='r')
       { num=8;
       }
       else if(key=='5')
       { num=9;
       }
       else if(key=='t')
       { num=10;
       }
       else if(key=='6')
       { num=11;
       }
       else if(key=='y')
       { num=12;
       }
       else if(key=='u')
       { num=13;
       }
       else if(key=='8')
       { num=14;
       }
       else if(key=='i')
       { num=15;
       }
       else if(key=='9')
       { num=16;
       }
       else if(key=='o')
       { num=17;
       }
       else if(key=='p')
       { num=18;
       }
       else if(key=='-')
       { num=19;
       }
       else if(key=='[')
       { num=20;
       }
       else if(key=='=')
       { num=21;
       }
       else if(key==']')
       { num=22;
       }
       else if(key=='\b')
       {num=23;}
       else if(key=='\\')
       { num=24;
       }
       else
       num=0;
    }
    void Music::process()
    {
	mus=440*pow(2,oct*num/12);

    }
    void Music::play()
    {  if (mus==440)
	nosound();
     else
       {	sound(mus);
		delay(200);
		nosound();
       }
     }



void pianclas()
{  Music obj;
   char k;
   x:
   k=obj.input();
   obj.assign();
   obj.process();
   obj.play();
   if(k==27)
   { goto mn;
   }
   else
   goto x;
   mn:
}
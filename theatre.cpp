#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
int a;
char name[100];
int rate,num,shwt,hn;
void dispmov();
void pass();
class theatre
{

	public:
   	void intro();
      void admin();
      void user();
      void add();
      void remove();
      void alter();
      void book();
      void confirm();
};
void theatre::intro()
{
	clrscr();
   gotoxy(20,15);
   cout<<"********** WELCOME TO HAPPY HOURS ************************";
   getch();
   clrscr();
   gotoxy(50,20);
   cout<<" MAIN MENU";
   cout<<"\n *****************************************************************";
   cout<<"\n             1. ADMINISTRATOR";
   cout<<"\n             2. USER";
   cout<<"\n             3. EXIT";
   cin>>a;
    if(a==1)
    	pass();
    if(a==2)
   	user();
   else if(a==3)
   {
   	clrscr();
      gotoxy(15,20);
      cout<<" ***************************************************************";
      gotoxy(16,27);
      cout<<"THANK YOU FOR VISTING HAPPY HOURS";
      getch();
   }
   else
   {
   	clrscr();
      gotoxy(15,20);
   	cout<<" IT IS THE WRONG CHOICE";
      intro();
   }
}
void theatre::user()
{
	clrscr();
   gotoxy(50,20);
   cout<<" USER MENU";
   cout<<"\n *****************************************************************";
   cout<<"\n             1. CHECK MOVIE LIST";
   cout<<"\n             2. BOOK TICKETS";
   cout<<"\n             3. RETURN TO MAIN MENU";
   cin>>a;
   if(a==1)
   	dispmov();
   else if(a==2)
   	book();
   else if(a==3)
   	intro();
   else
   {
   	clrscr();
      gotoxy(15,20);
   	cout<<" IT IS THE WRONG CHOICE";
      user();
   }
}
void dispmov()
{
   int i;
   i=9;
   ifstream ift("movie.txt");
   ift>>name>>hn>>shwt>>rate>>num;
   clrscr();
   gotoxy(30,5);
   cout<<"MOVIE LIST";
   gotoxy(10,6);
   cout<<"----------------------------------------------------------------------";
   gotoxy(10,7);
   cout<<"\tNAME\tHALL NUMBER\tSHOW TIMINGS\tRATE\tSEATS AVAILABLE";
   gotoxy(10,8);
   cout<<"----------------------------------------------------------------------";
   while(!ift.eof())
   {
      gotoxy(10,i);
   	cout<<"\t"<<name<<"\t\t"<<hn<<"\t\t"<<shwt<<"\t"<<rate<<"\t"<<num;
      ift>>name>>hn>>shwt>>rate>>num;
      i=i+1;
   }
   ift.close();
   getch();
   theatre ob;
   ob.user();
}
void theatre::book()
{
   char na[100];
   int sht,n;
   int k;
   k=0;
   clrscr();
   gotoxy(20,5);
   cout<<"TICKET BOOKING";
   cout<<"\n  ----------------------------------------------------------------------";
   cout<<"\n    MOVIE NAME: ";
   gets(na);
   cout<<"\n    SHOW TIMING: ";
   cin>>sht;
   cout<<"\n    NUMBER OF PEOPLE: ";
   cin>>a;
   ifstream ift("movie.txt");
   ift>>name>>hn>>shwt>>rate>>num;
   gotoxy(30,5);
   while(!ift.eof())
   {
      if(strcmpi(name,na)==0)
      {
         if(shwt==sht)
         {
            k=1;
          	if(n>num)
         	{
         		cout<<"\n REQUIRED NUMBER OF SEATS ARE NOT AVAILABLE";
            	cout<<"\n ONLY "<<num<<" ARE AVAILABLE";
            	cout<<"\n PRESS ENTER TO RETURN TO THE USER MENU";
            }
            else
            {
               num=num-n;
            	confirm();
            }
         }
      }
      if(k==1)
      	break;
   	ift>>name>>hn>>shwt>>rate>>num;
   }
   if(k==0)
   {
   	cout<<"\n MOVIE NOT FOUND";
      getch();
      user();
   }
}
void theatre::confirm()
{
   int rt;
   int i;
   int u;u=0;
   rt=rate*num;
	clrscr();
   gotoxy(30,15);
   cout<<"YOUR TICKETS HAVE BEEN BOOKED";
   gotoxy(30,16);
   cout<<"PRESS ENTER TO GENERATE THE CASH MEMO";
   getch();
   clrscr();
   gotoxy(35,5);
   cout<<"CASH MEMO";
   cout<<"\n********************************************************************";
   cout<<"\n* NAME OF THE MOVIE : "<<name;
   cout<<"\n* SHOW TIMING : "<<shwt;
   cout<<"\n* HALL NUMBER : "<<hn;
   cout<<"\n* NUMBER OF PEOPLE"<<num;
   cout<<"\n* SEAT NUMBER : ";
   for(i=1;i<=num;i++)
   {
   	cout<<u<<", ";
      u=u+1;
   }
   cout<<"\n* TOTAL AMOUNT : Rs "<<rt;
   cout<<"\n*********************************************************************";
   gotoxy(12,15);
   cout<<"\n PLEASE GENERATE THE CASH MEMO AT THE CASH COINTER TO AVAIL THE TICKETS";
   getch();
   intro();
}
void theatre::admin()
{
   clrscr();
   gotoxy(50,20);
   cout<<" ADMINISTRATOR MENU";
   cout<<"\n *****************************************************************";
   cout<<"\n             1. ADD A SHOW";
   cout<<"\n             2. REMOVE A SHOW";
   cout<<"\n             3. CHANGE THE RATE";
   cout<<"\n             4. LOG OUT";
   cin>>a;
   if(a==1)
   	add();
   else if(a==2)
   	remove();
   else if(a==3)
   	alter();
   else if(a==4)
   {
      clrscr();
      cout<<"\n YOU HAVE SUCCESSFULLY LOGGED OUT";
      cout<<"\n\n PRESS ENTER TO MOVE TO THEMAIN MENU ";
      intro();
   }
   else
   {
   	clrscr();
      gotoxy(15,20);
   	cout<<" IT IS THE WRONG CHOICE";
      intro();
   }
}
void theatre::add()
{
   ifstream ift("movie.txt");
   ofstream oft("temp.txt",ios::app);
   clrscr();
   gotoxy(40,15);
   cout<<"ADD A MOVIE";
   gotoxy(25,16);
   cout<<"**********************************************************************";
   gotoxy(25,17);
   cout<<"    MOVIE NAME   : ";
   gets(name);
   gotoxy(25,18);
   cout<<"    HALL NUMBER  : ";
   cin>>hn;
   gotoxy(25,19);
   cout<"     SHOW TIMINGS : ";
   cin>>shwt;
   gotoxy(25,20);
   cout<<"    RATE         : ";
   cin>>rate;
   oft>>name>>hn>>shwt>>rate>>60;
   getch();
   admin();
}
void remove();
{




















#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void form()
{
	int c=-9;
	for(int q=0;q<10;q++)
   {
   	if(q%2==0)
      {
      	c+=10;
      	for(int w=0;w<10;w++)
         {
         	if(101-c==100)
            {
            	cout<<"STOP"<<"\t";
            }
            else
            {
               int l=101-c;
            	cout<<l<<"\t";
            }
            c++;
         }
      }
      else
      {
      	for(int w=10;w>0;w--)
         {
         	if(102-(w+c)==1)
            {
            	cout<<"START"<<"\t";
            }
            else
            {
            	int l=102-(w+c);
            	cout<<l<<"\t";
            }
         }
      }
      cout<<endl;
   }
   gotoxy(32,2);cout<<"-(@@@@";
   gotoxy(56,6);cout<<"-(@@@@";
   gotoxy(32,12);cout<<"-(@@@@";
   gotoxy(8,8);cout<<"-(@@@@";
   gotoxy(24,14);cout<<"-(@@@@";
   gotoxy(24,2);cout<<"-(@@@@";
   gotoxy(16,2);cout<<"-(@@@@";
}
void main()
{
	int i=1;
   int x=1,f=1,y=20,n=20;
   char p1[100],p2[100];
   cout<<endl;
	form();
   gotoxy(1,22);
   cout<<"enter player 1's name:-";
   gets(p1);
   cout<<"enter player 2's name:-";
   gets(p2);
   int z=0,b=0;
   for(int v=0;v>=0;v++)
   {
   	if(b>=0)
      {
      	gotoxy(2,24);
         int l=i-1;
      	cout<<"   your score="<<l;
      	if(x==33 && n==2||x==57 && n==6||x==9 && n==8||x==25 && n==14||x==25 && n==2||x==17 && n==2||x==33 && n==12)
      	{
           	gotoxy(72,18);
      		puts(p1);
            gotoxy(f,y);
      		puts(p2);
      	}
         else if(f==33 && y==2||f==57 && y==6||f==9 && y==8||f==25 && y==14||f==25 && y==2||f==17 && y==2||f==33 && y==12)
      	{
         	gotoxy(72,18);
      		puts(p2);
            gotoxy(x,n);
      		puts(p1);
      	}
         else
      	{
      		gotoxy(x,n);
      		puts(p1);
      		gotoxy(f,y);
      		puts(p2);
      	}
      }
   	while(!kbhit())
		{
   		if(i==7)
   		{
    			i=1;
   		}
   		gotoxy(1,24);
   		cout<<i<<endl;
   		i++;
		}
      getch();
      gotoxy(1,2);
   	form();
   if(v%2==0)
   {
      gotoxy(30,24);
      cout<<"                               ";
      gotoxy(30,24);
      cout<<" chance of  ";
      puts(p2);
		for(int l=1;l<i;l++)
      {
      	if(n%4==0)
         {
         	gotoxy(x=8*b+1,n);
            b++;
            if(x==73)
            {
               n-=2;
               b=9;
            }
         }
         else
         {
         	gotoxy(x=8*b+1,n);
            b--;
            if(x==1)
            {
            	n-=2;
               b=0;
            }
         }
      }
   }
   else
   {
      gotoxy(30,24);
      cout<<"                               ";
      gotoxy(30,24);
      cout<<" chance of  ";
      puts(p1);
		for(int l=1;l<i;l++)
      {

      	if(y%4==0)
         {
         	gotoxy(f=8*z+1,y);
            z++;
            if(f==73)
            {
               y-=2;
               z=9;
            }
         }

         else
         {
         	gotoxy(f=8*z+1,y);
            z--;
            if(f==1)
            {
            	y-=2;
               z=0;
            }
         }
      }
	}
}
 	getch();
}

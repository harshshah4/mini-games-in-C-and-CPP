#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
// -1=mine   0=blank

struct minef
{char p,m;int n;}mf[9][9];
int minearr[9][2];

void mines()
{
	int x,y,a=0,i,j,flag=0;

   for(i=0;i<9;i++)
   {
   	for(j=0;j<9;j++)
    	{mf[i][j].n=0;mf[i][j].p='c';mf[i][j].m='nm';}
   }


  /* do
   {
      x=random(9);
   	y=random(9);

      for(i=0;i<9;i++)
      {
      	if(minearr[i][0]==x && minearr[i][1]==y)
         {flag=1;break;}
      }

      if(flag!=1)
      {minearr[a][0]=x;minearr[a][1]=y;a++;}

   }while(a<9);     */

   minearr[0][0]=0;minearr[0][1]=1;
   minearr[1][0]=1;minearr[1][1]=0;
   minearr[2][0]=1;minearr[2][1]=2;
   minearr[3][0]=1;minearr[3][1]=3;
   minearr[4][0]=8;minearr[4][1]=2;
   minearr[5][0]=2;minearr[5][1]=5;
   minearr[6][0]=8;minearr[6][1]=0;
   minearr[7][0]=2;minearr[7][1]=7;
   minearr[8][0]=4;minearr[8][1]=3;


   for(i=0;i<9;i++)
   {mf[minearr[i][0]][minearr[i][1]].n=-1;}
}

void ass()
{
	int i,j,x,mn,flag;

   for(i=0;i<9;i++)
   {	for(j=0;j<9;j++)
   	{  mn=0;flag=0;
         for(x=0;x<9;x++)
         {
         	if(i==minearr[x][0] && j==minearr[x][1])
            {flag=1;break;}
         }



      	if(i==0 && flag==0) //for 1st row
         {	if(j==0 )        // for 1st cell
         	{	if(mf[i+1][j].n==-1){mn++;}
            	if(mf[i][j+1].n==-1){mn++;}
               if(mf[i+1][j+1].n==-1){mn++;}
            }
            else if(j==8)        // for last cell
         	{	if(mf[i+1][j].n==-1){mn++;}
            	if(mf[i][j-1].n==-1){mn++;}
               if(mf[i+1][j-1].n==-1){mn++;}
            }
            else
            {
            	if(mf[i+1][j].n==-1){mn++;}
            	if(mf[i][j-1].n==-1){mn++;}
               if(mf[i+1][j-1].n==-1){mn++;}
               if(mf[i][j+1].n==-1){mn++;}
               if(mf[i+1][j+1].n==-1){mn++;}
            }
            flag=1;
         }

         if(i==8 && flag==0) //for last row
         {	if(j==0)        // for 1st cell
         	{	if(mf[i-1][j].n==-1){mn++;}
            	if(mf[i][j+1].n==-1){mn++;}
               if(mf[i-1][j+1].n==-1){mn++;}
            }
            else if(j==8)        // for last cell
         	{	if(mf[i-1][j].n==-1){mn++;}
            	if(mf[i][j-1].n==-1){mn++;}
               if(mf[i-1][j-1].n==-1){mn++;}
            }
            else
            {
            	if(mf[i-1][j].n==-1){mn++;}
            	if(mf[i][j-1].n==-1){mn++;}
               if(mf[i-1][j-1].n==-1){mn++;}
               if(mf[i][j+1].n==-1){mn++;}
               if(mf[i-1][j+1].n==-1){mn++;}
            }
            flag=1;
         }

         if(j==0 && flag==0) //for 1st column
         {

            	if(mf[i+1][j].n==-1){mn++;}
            	if(mf[i][j+1].n==-1){mn++;}
               if(mf[i+1][j+1].n==-1){mn++;}
               if(mf[i-1][j+1].n==-1){mn++;}
               if(mf[i-1][j].n==-1){mn++;}
               flag=1;
         }

         if(j==8 && flag==0) //for last column
         {

            	if(mf[i+1][j].n==-1){mn++;}
            	if(mf[i][j-1].n==-1){mn++;}
               if(mf[i+1][j-1].n==-1){mn++;}
               if(mf[i-1][j-1].n==-1){mn++;}
               if(mf[i-1][j].n==-1){mn++;}
               flag=1;
         }

         if(i>0&&i<9&&j<9&&j>0 && flag==0)
         {
         	if(mf[i-1][j-1].n==-1){mn++;}
            if(mf[i-1][j].n==-1){mn++;}
            if(mf[i-1][j+1].n==-1){mn++;}
            if(mf[i][j-1].n==-1){mn++;}
            if(mf[i][j+1].n==-1){mn++;}
            if(mf[i+1][j-1].n==-1){mn++;}
            if(mf[i+1][j].n==-1){mn++;}
            if(mf[i+1][j+1].n==-1){mn++;}
         }

      if(mn==0){mf[i][j].n==0;}
      else{mf[i][j].n=mn;}
      } // j loop ends


   }

}

int checkco(int x,int y)
{

	if(x>=0&&x<9&&y>=0&&y<9)
   {return 0;}
   else{return 1;}
}

void disp()
{
	int i,j;

   for(i=0;i<9;i++)
   {	for(j=0;j<9;j++)
   	{
      	gotoxy(i+25,j+6);
         if(j%2==0)
         {
         	if(i%2==0)
         	{cout<<(char)176;}
            else{cout<<(char)178;}
         }
         else
         {
         	if(i%2==0)
         	{cout<<(char)178;}
            else{cout<<(char)176;}
         }
      }
   }

   for(i=0;i<9;i++)
   {
   	gotoxy(23,6+i);cout<<i;
      gotoxy(25+i,4);cout<<i;
   }

   getch();

}

void openge()
{
	int i,j;

   for(i=0;i<9;i++)
   {
   	for(j=0;j<9;j++)
      {
      	gotoxy(i+25,j+6);
         if(mf[i][j].n==-1){cout<<"*";}
         else if(mf[i][j].n==0){cout<<" ";}
         else{cout<<mf[i][j].n;}
      }
   }


}

void open()
{
	int i,j;

   for(i=0;i<9;i++)
   {	for(j=0;j<9;j++)
   	{
      	if(mf[i][j].p=='o' && mf[i][j].m!='m')
         {
            if(mf[i][j].n==0){gotoxy(i+25,j+6);cout<<" ";}
         	else{gotoxy(i+25,j+6);cout<<mf[i][j].n;}}
      }
   }
}

void blankopen(int x,int y)
{
	mf[x][y].p='o';gotoxy(x+25,y+6);cout<<" ";

   if(mf[x][y-1].n==0 && mf[x][y-1].p=='c')
   {blankopen(x,y-1);}
   else if(mf[x][y-1].n!=-1 && mf[x][y-1].p=='c')
   {mf[x][y-1].p='o';}

   if(mf[x+1][y-1].n==0 && mf[x+1][y-1].p=='c')
   {blankopen(x+1,y-1);}
   else if(mf[x+1][y-1].n!=-1 && mf[x][y-1].p=='c')
   {mf[x+1][y-1].p='o';}

   if(mf[x+1][y].n==0 && mf[x+1][y].p=='c')
   {blankopen(x+1,y);}
   else if(mf[x+1][y].n!=-1 && mf[x+1][y].p=='c')
   {mf[x+1][y].p='o';}

   if(mf[x+1][y+1].n==0 && mf[x+1][y+1].p=='c')
   {blankopen(x+1,y+1);}
   else if(mf[x+1][y+1].n!=-1 && mf[x+1][y+1].p=='c')
   {mf[x+1][y+1].p='o';}

   if(mf[x][y+1].n==0 && mf[x][y+1].p=='c')
   {blankopen(x,y+1);}
   else if(mf[x][y+1].n!=-1 && mf[x][y+1].p=='c')
   {mf[x][y+1].p='o';}

   if(mf[x-1][y+1].n==0 && mf[x-1][y+1].p=='c')
   {blankopen(x-1,y+1);}
   else if(mf[x-1][y+1].n!=-1 && mf[x-1][y+1].p=='c')
   {mf[x-1][y+1].p='o';}

   if(mf[x-1][y].n==0 && mf[x-1][y].p=='c')
   {blankopen(x-1,y);}
   else if(mf[x-1][y].n!=-1 && mf[x-1][y].p=='c')
   {mf[x-1][y].p='o';}

   if(mf[x-1][y-1].n==0 && mf[x-1][y-1].p=='c')
   {blankopen(x-1,y-1);}
   else if(mf[x-1][y-1].n!=-1 && mf[x-1][y-1].p=='c')
   {mf[x-1][y-1].p='o';}

   open();
   for(int i=0;i<9;i++)
   {
   	gotoxy(23,6+i);cout<<i;
      gotoxy(25+i,4);cout<<i;
   }


}

int wincond()
{
	int i,j,flag=0;

   for(i=0;i<9;i++)
   {	for(j=0;j<9;j++)
   	{
      	if(mf[i][j].n==-1)
         {if(mf[i][j].m!='m'){flag=1;break;}}
      }
      if(flag==1){break;}
   }
   if(flag==0)
   {clrscr();cout<<" U WIN!! ";return 0;}
   else{return 1;}
}




void main()
{
  	mines();
   ass();
   disp();
   char game;

   int x,y,i,j,a,b,ch;


   do
   {

      gotoxy(5,21);cout<<"                                                                                       ";
   	for(;;)
      {
      	gotoxy(24,20);cout<<" ENTER COORDINATES :";
         gotoxy(45,20);cin>>x;
         gotoxy(47,20);cin>>y;
         gotoxy(45,20);cout<<" ";
         gotoxy(47,20);cout<<" ";

         if(checkco(x,y)==0)
         {break;}
         else{gotoxy(24,21);cout<<" INVALID INPUT---TRY AGAIN!! ";getch();gotoxy(24,21);cout<<"                                      ";}
      }


      gotoxy(5,21);cout<<" PRESS 'O' TO OPEN, PRESS 'M' TO MARK,  PRESS 'R' TO SHOW RANGE ";

      for(;;)
      {ch=getch();if(ch=='o' || ch=='O' || ch=='m' || ch=='M' || ch=='r' || ch=='R'){break;}}

      gotoxy(5,21);cout<<"                                                                                       ";
      if(ch=='o' || ch=='O')
      {
      	if(mf[x][y].p=='o' && mf[x][y].m!='m')
         {gotoxy(24,21);cout<<" ALREADY OPEN!!  RE-ENTER COORDINATES ";getch();continue;}
         if(mf[x][y].m=='m')
         {gotoxy(24,21);cout<<" CANNOT OPEN MARKED!!  RE-ENTER COORDINATES ";getch();continue;}
         if(mf[x][y].n>0&&mf[x][y].n<9)   //if number
         {gotoxy(x+25,y+6);cout<<mf[x][y].n;}
         else if(mf[x][y].n==-1)          // if mine
         {clrscr();openge();gotoxy(24,21);cout<<" MINE OPENED!! GAME OVER.. ";break;}
         else{blankopen(x,y);}

         mf[x][y].p='o';
      }

      else if(ch=='m' || ch=='M')
      {mf[x][y].m='m'; gotoxy(x+25,y+6);cout<<"!";}



   }while(wincond()==1);






 /*  int i,j;
   for(i=0;i<9;i++)
   {
   	for(j=0;j<9;j++)
    	{cout<<mf[i][j].n<<"  ";}
      cout<<endl;
   }      */

   getch();
}


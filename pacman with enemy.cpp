#include<iostream.h>
#include<conio.h>
#include<windows.h>
void main()
{

 int c1,x=7,y=12,a=9,b=20,q,m=60,n=20,g=40,h=4;
 char p,ch;


 cout<<"          <<                                                            "<<endl;
 cout<<"        <<                                                              "<<endl;
 cout<<"      <<                                                                "<<endl;
 cout<<"    <<   ######    ###      ####### ####   ####      ###      ###    ## "<<endl;
 cout<<"  <<     ##  ##   ## ##     ##      ## ## ## ##     ## ##     ####   ## "<<endl;
 cout<<"<<       ######  ##   ##    ##      ##  ###  ##    ##   ##    ## ##  ## "<<endl;
 cout<<"  <<     ##     #########   ##      ##       ##   #########   ##  ## ## "<<endl;
 cout<<"    <<   ##    ##       ##  ##      ##       ##  ##       ##  ##   #### "<<endl;
 cout<<"      << ##   ##         ## ####### ##       ## ##         ## ##    ### "<<endl;
 cout<<"        <<                                                              "<<endl;
 cout<<"          <<                                                            "<<endl;
 Sleep(2000);
 clrscr();


 cout<<"                <<                                                      "<<endl;
 cout<<"              <<                                                        "<<endl;
 cout<<"            <<                                                          "<<endl;
 cout<<"          <<       ###      ####### ####   ####      ###      ###    ## "<<endl;
 cout<<"        <<        ## ##     ##      ## ## ## ##     ## ##     ####   ## "<<endl;
 cout<<"      <<         ##   ##    ##      ##  ###  ##    ##   ##    ## ##  ## "<<endl;
 cout<<"        <<      #########   ##      ##       ##   #########   ##  ## ## "<<endl;
 cout<<"          <<   ##       ##  ##      ##       ##  ##       ##  ##   #### "<<endl;
 cout<<"            <<##         ## ####### ##       ## ##         ## ##    ### "<<endl;
 cout<<"              <<                                                        "<<endl;
 cout<<"                <<                                                      "<<endl;
 Sleep(500);
 clrscr();


 cout<<"                             <<                                         "<<endl;
 cout<<"                           <<                                           "<<endl;
 cout<<"                         <<                                             "<<endl;
 cout<<"                       <<   ####### ####   ####      ###      ###    ## "<<endl;
 cout<<"                     <<     ##      ## ## ## ##     ## ##     ####   ## "<<endl;
 cout<<"                   <<       ##      ##  ###  ##    ##   ##    ## ##  ## "<<endl;
 cout<<"                     <<     ##      ##       ##   #########   ##  ## ## "<<endl;
 cout<<"                       <<   ##      ##       ##  ##       ##  ##   #### "<<endl;
 cout<<"                         << ####### ##       ## ##         ## ##    ### "<<endl;
 cout<<"                           <<                                           "<<endl;
 cout<<"                             <<                                         "<<endl;
 Sleep(500);
  clrscr();


 cout<<"                                     <<                                 "<<endl;
 cout<<"                                   <<                                   "<<endl;
 cout<<"                                 <<                                     "<<endl;
 cout<<"                               <<   ####   ####      ###      ###    ## "<<endl;
 cout<<"                             <<     ## ## ## ##     ## ##     ####   ## "<<endl;
 cout<<"                           <<       ##  ###  ##    ##   ##    ## ##  ## "<<endl;
 cout<<"                             <<     ##       ##   #########   ##  ## ## "<<endl;
 cout<<"                               <<   ##       ##  ##       ##  ##   #### "<<endl;
 cout<<"                                 << ##       ## ##         ## ##    ### "<<endl;
 cout<<"                                   <<                                   "<<endl;
 cout<<"                                     <<                                 "<<endl;
 Sleep(500);
   clrscr();


 cout<<"                                                 <<                     "<<endl;
 cout<<"                                               <<                       "<<endl;
 cout<<"                                             <<                         "<<endl;
 cout<<"                                           <<        ###      ###    ## "<<endl;
 cout<<"                                         <<         ## ##     ####   ## "<<endl;
 cout<<"                                       <<          ##   ##    ## ##  ## "<<endl;
 cout<<"                                         <<       #########   ##  ## ## "<<endl;
 cout<<"                                           <<    ##       ##  ##   #### "<<endl;
 cout<<"                                             << ##         ## ##    ### "<<endl;
 cout<<"                                               <<                       "<<endl;
 cout<<"                                                 <<                     "<<endl;
 Sleep(500);
  clrscr();


 cout<<"                                                            <<          "<<endl;
 cout<<"                                                          <<            "<<endl;
 cout<<"                                                        <<              "<<endl;
 cout<<"                                                      <<      ###    ## "<<endl;
 cout<<"                                                    <<        ####   ## "<<endl;
 cout<<"                                                  <<          ## ##  ## "<<endl;
 cout<<"                                                    <<        ##  ## ## "<<endl;
 cout<<"                                                      <<      ##   #### "<<endl;
 cout<<"                                                        <<    ##    ### "<<endl;
 cout<<"                                                          <<            "<<endl;
 cout<<"                                                            <<          "<<endl;
 Sleep(500);
   clrscr();


 cout<<"                                                                      <<"<<endl;
 cout<<"                                                                    <<  "<<endl;
 cout<<"                                                                  <<    "<<endl;
 cout<<"                                                                <<      "<<endl;
 cout<<"                                                              <<        "<<endl;
 cout<<"                                                            <<          "<<endl;
 cout<<"                                                              <<        "<<endl;
 cout<<"                                                                <<      "<<endl;
 cout<<"                                                                  <<    "<<endl;
 cout<<"                                                                    <<  "<<endl;
 cout<<"                                                                      <<"<<endl;


 Sleep(500);
 clrscr();

   gotoxy(25,10);
   cout<<" WELCOME TO PACMAN!!! ";
   gotoxy(23,12);
   cout<<" PRESS ANYKEY TO PROCEED ";
   getch();

   clrscr();
   gotoxy(18,4);
   cout<<" GENERAL INSTRUCTIONS: ";
   gotoxy(18,6);
   cout<<" w - move up ";
   gotoxy(18,8);
   cout<<" s - move down ";
   gotoxy(18,10);
   cout<<" d - move right ";
   gotoxy(18,12);
   cout<<" a - move left ";
   gotoxy(39,10);
   cout<<" PRESS ANY KEY TO BEGIN!! ";
   getch();


   clrscr();
 	for(y=2;y<23;y++)
 	{
      for(x=7;x<70;x++)
 		{

         if(y==22||y==2)
         {
         	gotoxy(x,y);
            cout<<"-";
         }

         else
         {	gotoxy(x,y);
      		cout<<"'";
         }
      }
 			cout<<endl;
 	}

   x=7;
   for(y=2;y<23;y++)
   {gotoxy(x,y);
    cout<<"|";
    }
   x=69;
   for(y=2;y<23;y++)
   {gotoxy(x,y);
    cout<<"|";
    }


   for(x=18;x<59;x++)
   {
   	gotoxy(x,6);
      cout<<"#";
      gotoxy(x,18);
      cout<<"#";
   }

    gotoxy(36,11);
   cout<<"#";
   gotoxy(40,11);
   cout<<"#";
   gotoxy(36,12);
   cout<<"#";
   gotoxy(40,12);
   cout<<"#";
   gotoxy(36,13);
   cout<<"START";

   gotoxy(38,12);
   cout<<"v";



   gotoxy(25,24);
   cout<<"  MADE BY: HARSH JOHARI   ";




   x=38;y=12;
   for(;ch!='p';)                               //main loop begins from here
  	{
      c1++;
      ch=getch();

  		switch(ch)
  		{

         case 'w': gotoxy(x,y++);cout<<" ";
                   if(y==4)
                   {break;}
                   else if(y==8&&17<x&&x<59)
                   {break;}
                   else if(y==20&&17<x&&x<59)
                   {break;}
                   else if(x==37&&y==15)
                   {break;}
                   else if(x==38&&y==15)
                   {break;}
                   else if(x==36&&y==15)
                   {break;}
                   else if(x==39&&y==15)
                   {break;}
                   else if(x==40&&y==15)
                   {break;}
                   gotoxy(x,y=y-2);cout<<"v";
   			 		 break;



         case 's': gotoxy(x,y--);cout<<" ";
                   if(y==20)
                   {break;}
                   else if(y==4&&17<x&&x<59)
                   {break;}
                   else if(y==16&&17<x&&x<59)
                   {break;}
                   else if(y==11&&x==37)
                   {break;}
                   else if(y==11&&x==38)
                   {break;}
                   else if(y==11&&x==39)
                   {break;}
                   else if(y==9&&x==36)
                   {break;}
                   else if(y==9&&x==40)
                   {break;}
                   gotoxy(x,y=y+2);cout<<"^";
   			 		 break;
         case 'd': gotoxy(x--,y);cout<<" ";
                   if(x==67)
                   {break;}
                   else if(x==16&&y==6)
                   {break;}
                   else if(x==16&&y==18)
                   {break;}
                   else if(x==38&&y==11)
                   {break;}
                   else if(x==38&&y==12)
                   {break;}
                   else if(x==38&&y==13)
                   {break;}
                   else if(x==34&&y==11)
                   {break;}
                   else if(x==34&&y==12)
                   {break;}
                   else if(x==34&&y==13)
                   {break;}
                   gotoxy(x=x+2,y);cout<<"<";
   			 		 break;
         case 'a': gotoxy(x++,y);cout<<" ";
                   if(x==9)
                   {break;}
                   else if(x==60&&y==6)
                   {break;}
                   else if(x==60&&y==18)
                   {break;}
                   else if(x==38&&y==11)
                   {break;}
                   else if(x==38&&y==12)
                   {break;}
                   else if(x==38&&y==13)
                   {break;}
                   else if(x==42&&y==11)
                   {break;}
                   else if(x==42&&y==12)
                   {break;}
                   else if(x==42&&y==13)
                   {break;}
         			 gotoxy(x=x-2,y);cout<<">";
   			 		 break;

         default: break;

   	}


     if(c1%5==0)
     {
     if(y>b)
     	{gotoxy(a,b--);
      cout<<" ";

      gotoxy(a,b=b+2);
      cout<<"*";}

     else if(x>a)
     	{gotoxy(a--,b);
     cout<<" ";

      gotoxy(a=a+2,b);
      cout<<"*";}

     else if(b>y)
     	{gotoxy(a,b++);
     cout<<" ";

     gotoxy(a,b=b-2);
     cout<<"*";}

     else if(a>x)
     	{gotoxy(a++,b);
     cout<<" ";

     gotoxy(a=a-2,b);
     cout<<"*";}


    }


   if(c1%3==0)
     {
     if(y>n)
     	{gotoxy(m,n--);
      cout<<" ";

      gotoxy(m,n=n+2);
      cout<<"$";}

     else if(x>m)
     	{gotoxy(m--,n);
     cout<<" ";

      gotoxy(m=m+2,n);
      cout<<"$";}

     else if(n>y)
     	{gotoxy(m,n++);
     cout<<" ";

     gotoxy(m,n=n-2);
     cout<<"$";}

     else if(m>x)
     	{gotoxy(m++,n);
     cout<<" ";

     gotoxy(m=m-2,n);
     cout<<"$";}
    }


   if(c1%2==0)
     {
     if(y>h)
     	{gotoxy(g,h--);
      cout<<" ";

      gotoxy(g,h=h+2);
      cout<<"+";}

     else if(x>g)
     	{gotoxy(g--,h);
     cout<<" ";

      gotoxy(g=g+2,h);
      cout<<"+";}

     else if(h>y)
     	{gotoxy(g,h++);
     cout<<" ";

     gotoxy(g,h=h-2);
     cout<<"+";}

     else if(g>x)
     	{gotoxy(g++,h);
     cout<<" ";

     gotoxy(g=g-2,h);
     cout<<"+";}
    }





   	gotoxy(36,11);
   	cout<<"#";
   	gotoxy(40,11);
   	cout<<"#";
   	gotoxy(36,12);
   	cout<<"#";
   	gotoxy(40,12);
   	cout<<"#";
   	gotoxy(36,13);
   	cout<<"START";



   for(q=18;q<59;q++)
   {
   	gotoxy(q,6);
      cout<<"#";
      gotoxy(q,18);
      cout<<"#";
   }



   if(x==m&&y==n)
   {break;}
   if(x==a&&y==b)
   {break;}
   if(x==g&&y==h)
   {break;}




 } 										 //main loop ends here

   clrscr();

   cout<<endl<<endl;
   cout<<" GGGGG AAAAAA MMM     MMM EEEEEE    OOOOOO VV     VV EEEEEE RRRRRR    "<<endl;
   cout<<" GG    AA  AA MM M   M MM EE        OO  OO  V     V  EE     RR  RR    "<<endl;
   cout<<" GG GG AAAAAA MM  M M  MM EEEEEE    OO  OO   V   V   EEEEEE RRRRRR    "<<endl;
   cout<<" GG  G AA  AA MM   M   MM EE        OO  OO    V V    EE     RR R 	  "<<endl;
   cout<<" GGGGG AA  AA MM       MM EEEEEE    OOOOOO     V     EEEEEE RR  R     "<<endl;

   cout<<endl<<endl;
   cout<<" SCORE: "<<c1;

   getch();
   getch();
}

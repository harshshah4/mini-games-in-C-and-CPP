#include<iostream.h>
#include<conio.h>
void bgrnd()
{
	int i,c,r;
   clrscr();
   gotoxy(5,2);
   for(i=0;i<30;i++)
   {
   	cout<<"--";
   }
   c=65;
   r=2;
   for(i=0;i<20;i++)
   {
   	gotoxy(c,r);
      cout<<"|";
      r++;
   }
   c=c-2;
   r--;
   for(i=0;i<59;i++)
   {
   	gotoxy(c,r);
      cout<<"--";
      c--;
   }
   for(i=0;i<20;i++)
   {
      gotoxy(c,r);
      cout<<"|";
      r--;
   }
}
void stg1()
{
   int i,c=3,r=2;
   clrscr();
   for(i=0;i<20;i++)
   {
   	gotoxy(c,r);
   	cout<<"--";
      c=c+2;
   }
   for(i=0;i<15;i++)
   {
   	gotoxy(c,r);
      cout<<"|";
      r++;
   }
   c=c-2;
   r--;
   for(i=0;i<39;i++)
   {
   	gotoxy(c,r);
      cout<<"--";
      c--;
   }
   for(i=0;i<15;i++)
   {
      gotoxy(c,r);
      cout<<"|";
      r--;
   }
     	gotoxy(50,8);
   	cout<<"WELCOME TO STAGE I";
   	gotoxy(4,18);
   	cout<<"ENTER COLUMN NUMBER (LEFT-RIGHT) BETWEEN";
   	gotoxy(4,19);
   	cout<<"4 TO 42.";
		gotoxy(4,20);
   	cout<<"AND ROW NUMBER (UP-DOWN) BETWEEN";
   	gotoxy(4,21);
   	cout<<"3 TO 16.";
      gotoxy(5,23);
	   cout<<"PRESS ENTER";
   	getch();
}
void check3()
{
   gotoxy(5,21);	cout<<"              ";
   gotoxy(10,4);  cout<<"INSTRUCTIONS :-";
   gotoxy(10,6);  cout<<"JACKPOT ROUND !!!";
   gotoxy(10,10); cout<<"HIT ANY ONE OF NINE POINTS IN DISPLAY";
   gotoxy(10,12); cout<<"AND YOU CAN WIN THE GAME.";
   gotoxy(10,14); cout<<"YOU HAVE EXACTLY 20 MOVES TO DO SO !!!";
   gotoxy(10,16); cout<<"BEST OF LUCK.";
   gotoxy(5,21);  cout<<"PRESS ENTER";
   getch();
   gotoxy(10,4);	cout<<"                  ";
   gotoxy(10,6);  cout<<"                   ";
   gotoxy(10,10); cout<<"                                       ";
   gotoxy(10,12); cout<<"                                  ";
   gotoxy(10,14); cout<<"                                        ";
   gotoxy(10,16); cout<<"                 ";
   gotoxy(5,21);  cout<<"             ";
   int ccord[]={10,15,20,25,30,35,40,45,50};
   int rcord[]={9,5,18,10,13,15,7,18,20};
   int c,r,i,j,max=20,n=0;
   char yes;
   for(i=0;i<9;i++)
   {
   	gotoxy(ccord[i],rcord[i]);
      cout<<"H";
   }
   for(i=0;i<20;i++)
   {
      gotoxy(5,23);
      cout<<"                      ";
      gotoxy(5,23);
   	cout<<"MOVES LEFT : "<<max;
      gotoxy(4,26);
	   cout<<"ENTER COLUMN and ROW NUMBER : ";
   	cin>>c>>r;
      if((c>3&&c<53)&&(r>2&&r<23))
      {
	      for(j=0;j<9;j++)
      	{
				if(c==ccord[j] && r==rcord[j])
            {
               n=1;
               break;
      		}
         }
         if(n!=1)
         {
            gotoxy(c,r);
            cout<<"M";
            gotoxy(50,27);
            cout<<"OOPS YOU MISSED !!!";
            getch();
			}
      }
      else
      {
      	gotoxy(50,26);
         cout<<"OUT OPF RANGE !!";
         getch();
      }
      max--;
      gotoxy(50,26);
      cout<<"                   ";
      gotoxy(50,27);
      cout<<"                     ";
      gotoxy(34,26);
	  	cout<<"                             ";
      /*gotoxy(10,28);
      cout<<"                         ";*/
      if(n==1)
      {
         bgrnd();
  			gotoxy(13,6);
 			cout<<"YOU HAVE WON THE MOST DIFFICULT GAME !!!";
  			gotoxy(13,10);
  			cout<<"MADE BY:-";
  			gotoxy(13,12);
 			cout<<"GROUP VI";
 			gotoxy(13,14);
 			cout<<"SHUBHANKAR SINGH, ATUL PRAKASH";
  			gotoxy(13,16);
 			cout<<"TOSHITH JAIN AND LAKSHAY SHARMA.";
     		getch();
      	break;
      }
      else if(i==19)
      {
         bgrnd();
  			gotoxy(13,6);
 			cout<<"GAME OVER !!!";
  			gotoxy(13,10);
  			cout<<"MADE BY:-";
  			gotoxy(13,12);
 			cout<<"GROUP VI";
 			gotoxy(13,14);
 			cout<<"SHUBHANKAR SINGH, ATUL PRAKASH";
  			gotoxy(13,16);
 			cout<<"TOSHITH JAIN AND LAKSHAY SHARMA.";
     		getch();
      	break;
      }
      gotoxy(10,28);cout<<"TO CONTINUE PRESS (Y) :";
      cin>>yes;
      if(yes!='Y'&&yes!='y')
      {
         break;
      }
      else
      {
      	gotoxy(10,28);cout<<"                                ";
      }
   }
}
void stg3()
{
   int i,c=3,r=2;
   clrscr();
   for(i=0;i<25;i++)
   {
   	gotoxy(c,r);
   	cout<<"--";
      c=c+2;
   }
   for(i=0;i<21;i++)
   {
   	gotoxy(c,r);
      cout<<"|";
      r++;
   }
   c=c-2;
   r--;
   for(i=0;i<49;i++)
   {
   	gotoxy(c,r);
      cout<<"--";
      c--;
   }
   for(i=0;i<21;i++)
   {
      gotoxy(c,r);
      cout<<"|";
      r--;
   }
   gotoxy(56,6);
   cout<<"WELCOME TO STAGE III";
   gotoxy(56,10);
   cout<<"ENTER COLUMN NUMBER";
   gotoxy(56,12);
   cout<<"BETWEEN 4 TO 52";
   gotoxy(56,14);
   cout<<"ENTER ROW NUMBER";
   gotoxy(56,16);
   cout<<"BETWEEN 3 TO 22";
   gotoxy(5,21);
   cout<<"PRESS ENTER";
   getch();
   check3();
}
void check2()
{
   gotoxy(5,17);
   cout<<"                  ";
   char yes;
   int i,j;
   int c,r,b,z=0;
   int pnt=0,max=100,a=0,pos=0,pts=0;
	double ccord[]={7,7,7,7,7,7,7,7,8,9,10,11,12,12,12,12,12,12,13,14,15,16,17,17,17,17,17,17,17,17,19,20,22,22,22,22,22,22,22,22,23,24,25,26,27,27,27,27,27,27,28,29,30,31,32,32,32,32,32,32,32,32,34,35,37,38,39,40,41,42,37,38,39,40,41,42,39,40,41,42,42,42,42,42};
   double rcord[]={7,8,9,10,11,12,13,14,16,16,16,16,9,10,11,12,13,14,16,16,16,16,7,8,9,10,11,12,13,14,11,11,7,8,9,10,11,12,13,14,16,16,16,16,9,10,11,12,13,14,16,16,16,16,7,8,9,10,11,12,13,14,11,11,7,7,7,7,7,7,15,15,15,15,15,15,11,11,11,11,8,9,13,14};
   int cnt[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   gotoxy(4,28);	cout<<"SHIP A: "<<cnt[0]<<"  SHIP OF 8 SHIP DOWN";
   gotoxy(4,29);  cout<<"SHIP B: "<<cnt[1]<<"  SHIP OF 4 SHIP DOWN";
   gotoxy(4,30);  cout<<"SHIP C: "<<cnt[2]<<"  SHIP OF 6 SHIP DOWN";
   gotoxy(4,31);  cout<<"SHIP D: "<<cnt[3]<<"  SHIP OF 4 SHIP DOWN";
   gotoxy(4,32);  cout<<"SHIP E: "<<cnt[4]<<"  SHIP OF 8 SHIP DOWN";
   gotoxy(4,33);  cout<<"SHIP F: "<<cnt[5]<<"  SHIP OF 2 SHIP DOWN";
   gotoxy(4,34);  cout<<"SHIP G: "<<cnt[6]<<"  SHIP OF 8 SHIP DOWN";
   gotoxy(4,35);  cout<<"SHIP H: "<<cnt[7]<<"  SHIP OF 4 SHIP DOWN";
   gotoxy(4,36);  cout<<"SHIP I: "<<cnt[8]<<"  SHIP OF 6 SHIP DOWN";
   gotoxy(4,37);  cout<<"SHIP J: "<<cnt[9]<<"  SHIP OF 6 SHIP DOWN";
   gotoxy(4,38);  cout<<"SHIP K: "<<cnt[10]<<"  SHIP OF 6 SHIP DOWN";
   gotoxy(4,39);  cout<<"SHIP L: "<<cnt[11]<<"  SHIP OF 2 SHIP DOWN";
   gotoxy(4,40);  cout<<"SHIP M: "<<cnt[12]<<"  SHIP OF 6 SHIP DOWN";
   gotoxy(4,41);  cout<<"SHIP N: "<<cnt[13]<<"  SHIP OF 6 SHIP DOWN";
   gotoxy(4,42);  cout<<"SHIP O: "<<cnt[14]<<"  SHIP OF 4 SHIP DOWN";
   gotoxy(4,43);  cout<<"SHIP P: "<<cnt[15]<<"  SHIP OF 2 SHIP DOWN";
   gotoxy(4,44);  cout<<"SHIP Q: "<<cnt[16]<<"  SHIP OF 2 SHIP DOWN";
   gotoxy(50,16);
   cout<<"MOVES : "<<max;
   for(i=0;i<100;i++)
   {
      gotoxy(50,16);
	   cout<<"MOVES LEFT : "<<max;
      gotoxy(4,25);
     	cout<<"ENTER COLUMN and ROW NUMBER : ";
     	cin>>c>>r;
			      gotoxy(54,20);
   		      cout<<"                 ";
      		   gotoxy(54,21);
         		cout<<"              ";
      if((c>3 && c<47) && (r>2 && r<19))
      {
         for(j=0;j<84;j++)
  			{
  				if(c==ccord[j] && r==rcord[j])
            {
              	a=1;
               pos=j;
            }
         }
            if(a==1)
				{
   	 	  		gotoxy(50,20);
        			cout<<"                           ";
	    	  		gotoxy(54,21);
    	   		cout<<"            ";
   				gotoxy(c,r);
	      		cout<<"H";
               z++;
               b=84-z;
               if(pos>=0&&pos<=7)
      			{
         			cnt[0]++;	pnt=pnt+20;
         			gotoxy(4,28);cout<<"SHIP A: "<<cnt[0]<<" SHIP OF 8 SHIP DOWN";
                  if(cnt[0]==8)
                  {
                  	gotoxy(40,28);	cout<<"SHIP A DOWN ";
                  }
      			}
      			else if(pos>=8&&pos<=11)
      			{
      				cnt[1]++;	pnt=pnt+10;
               	gotoxy(4,29);cout<<"SHIP B: "<<cnt[1]<<" SHIP OF 4 SHIPS DOWN";
                  if(cnt[1]==4)
                  {
                  	gotoxy(40,29);	cout<<"SHIP B DOWN ";
                  }
      			}
      			else if(pos>=12&&pos<=17)
      			{
      				cnt[2]++;	pnt=pnt+15;
               	gotoxy(4,30);cout<<"SHIP C: "<<cnt[2]<<" SHIP OF 6 SHIPS DOWN";
                  if(cnt[2]==6)
                  {
                  	gotoxy(40,30);	cout<<"SHIP C DOWN ";
                  }
      			}
      			else if(pos>=18&&pos<=21)
      			{
      				cnt[3]++;	pnt=pnt+10;
               	gotoxy(4,31);cout<<"SHIP D: "<<cnt[3]<<" SHIP OF 4 SHIPS DOWN";
                  if(cnt[3]==4)
                  {
                  	gotoxy(40,31);	cout<<"SHIP D DOWN ";
                  }
   		   	}
      			else if(pos>=22&&pos<=29)
	      		{
      				cnt[4]++;	pnt=pnt+20;
               	gotoxy(4,32);cout<<"SHIP E: "<<cnt[4]<<" SHIP OF 8 SHIPS DOWN";
                  if(cnt[4]==8)
                  {
                  	gotoxy(40,32);	cout<<"SHIP E DOWN ";
                  }
   		   	}
      			else if(pos>=30&&pos<=31)
      			{
      				cnt[5]++;	pnt=pnt+5;
                  gotoxy(4,33);cout<<"SHIP F: "<<cnt[5]<<" SHIP OF 2 SHIPS DOWN";
                  if(cnt[5]==2)
                  {
                  	gotoxy(40,33);	cout<<"SHIP F DOWN ";
                  }
      			}
      			else if(pos>=32&&pos<=39)
      			{
      				cnt[6]++;	pnt=pnt+20;
                  gotoxy(4,34);cout<<"SHIP G: "<<cnt[6]<<" SHIP OF 8 SHIPS DOWN";
                  if(cnt[6]==8)
                  {
                  	gotoxy(40,34);	cout<<"SHIP G DOWN ";
                  }
      			}
      			else if(pos>=40&&pos<=43)
      			{
      				cnt[7]++;	pnt=pnt+10;
                  gotoxy(4,35);cout<<"SHIP H: "<<cnt[7]<<" SHIP OF 4 SHIPS DOWN";
                  if(cnt[7]==4)
                  {
                  	gotoxy(40,35);	cout<<"SHIP H DOWN ";
                  }
      			}
      			else if(pos>=44&&pos<=49)
      			{
      				cnt[8]++;	pnt=pnt+15;
         			gotoxy(4,36);cout<<"SHIP I: "<<cnt[8]<<" SHIP OF 6 SHIPS DOWN";
                  if(cnt[8]==6)
                  {
                  	gotoxy(40,36);	cout<<"SHIP I DOWN ";
                  }
      			}
      			else if(pos>=50&&pos<=55)
      			{
      				cnt[9]++;	pnt=pnt+15;
                  gotoxy(4,37);cout<<"SHIP J: "<<cnt[9]<<" SHIP OF 6 SHIPS DOWN";
                  if(cnt[9]==6)
                  {
                  	gotoxy(40,37);	cout<<"SHIP J DOWN ";
                  }
      			}
      			else if(pos>=56&&pos<=61)
      			{
      				cnt[10]++;	pnt=pnt+15;
                  gotoxy(4,38);cout<<"SHIP K: "<<cnt[10]<<" SHIP OF 6 SHIPS DOWN";
                  if(cnt[10]==6)
                  {
                  	gotoxy(40,38);	cout<<"SHIP K DOWN ";
                  }
   	   		}
      			else if(pos>=62&&pos<=63)
      			{
      				cnt[11]++;	pnt=pnt+5;
                  gotoxy(4,39);cout<<"SHIP L: "<<cnt[11]<<" SHIP OF 2 SHIPS DOWN";
                  if(cnt[11]==2)
                  {
                  	gotoxy(40,39);	cout<<"SHIP L DOWN ";
                  }
   	   		}
      			else if(pos>=64&&pos<=69)
      			{
      				cnt[12]++;	pnt=pnt+15;
                  gotoxy(4,40);cout<<"SHIP M: "<<cnt[12]<<" SHIP OF 6 SHIPS DOWN";
                  if(cnt[12]==6)
                  {
                  	gotoxy(40,40);	cout<<"SHIP M DOWN ";
                  }
   	   		}
      			else if(pos>=70&&pos<=75)
      			{
      				cnt[13]++;	pnt=pnt+15;
                  gotoxy(4,41);cout<<"SHIP N: "<<cnt[13]<<" SHIP OF 6 SHIPS DOWN";
                  if(cnt[13]==6)
                  {
                  	gotoxy(40,41);	cout<<"SHIP N DOWN ";
                  }
   	   		}
      			else if(pos>=76&&pos<=79)
      			{
      				cnt[14]++;	pnt=pnt+10;
                  gotoxy(4,42);cout<<"SHIP O: "<<cnt[14]<<" SHIP OF 4 SHIPS DOWN";
                  if(cnt[14]==4)
                  {
                  	gotoxy(40,42);	cout<<"SHIP O DOWN ";
                  }
   	   		}
      			else if(pos>=80&&pos<=81)
      			{
      				cnt[15]++;	pnt=pnt+5;
                  gotoxy(4,43);cout<<"SHIP P: "<<cnt[15]<<" SHIP OF 2 SHIPS DOWN";
                  if(cnt[15]==2)
                  {
                  	gotoxy(40,43);	cout<<"SHIP P DOWN ";
                  }
   	   		}
      			else if(pos>=82&&pos<=83)
      			{
      				cnt[16]++;	pnt=pnt+5;
                  gotoxy(4,44);cout<<"SHIP Q: "<<cnt[16]<<" SHIP OF 2 SHIPS DOWN";
                  if(cnt[16]==2)
                  {
                  	gotoxy(40,44);	cout<<"SHIP Q DOWN ";
                  }
   	   		}
               a=0;
            }
   			else
            {
         		gotoxy(c,r);
           		cout<<"M";
           		gotoxy(50,24);
           		cout<<"OOPS!! YOU MISSED.";
               getch();
               pts++;
               a=0;
         	}
	  		gotoxy(33,25);
		  	cout<<"                ";
         gotoxy(50,24);
         cout<<"                   ";
      }
     	else
      {
       	gotoxy(54,20);
		   cout<<"OUT OF RANGE !!";
  	  	   gotoxy(54,21);
  		   cout<<"TRY AGAIN !!";
         getch();
			gotoxy(33,25);
			cout<<"                ";
         gotoxy(50,24);
         cout<<"                   ";
         pts++;
	   }
      max--;
   	gotoxy(50,13);
      cout<<"POINTS GAINED	: "<<pnt;
      gotoxy(50,14);
      cout<<"POINTS LOST : "<<pts;
      gotoxy(48,26);
      cout<<"TO CONTINUE PRESS (Y) :";
      cin>>yes;
      if(yes!='Y' && yes!='y')
      break;
      gotoxy(47,26);
      cout<<"                          ";

      if(b==0||i==99)
      {
        	gotoxy(5,23);
        	cout<<"                    ";
        	gotoxy(5,25);
        	cout<<"                                                ";
        	gotoxy(8,25);
         cout<<"GAME OVER !!!";
        	gotoxy(8,26);
        	cout<<"\t\tPRESS ENTER ";
         getch();
      	break;
   	}
      gotoxy(63,16);
      cout<<"               ";
 	}
   gotoxy(5,19);
   cout<<"PRESS ENTER";
   stg3();
}
void stg2()
{
   int i,c=3,r=2;
   clrscr();
   for(i=0;i<22;i++)
   {
   	gotoxy(c,r);
   	cout<<"--";
      c=c+2;
   }
   for(i=0;i<17;i++)
   {
   	gotoxy(c,r);
      cout<<"|";
      r++;
   }
   c=c-2;
   r--;
   for(i=0;i<43;i++)
   {
   	gotoxy(c,r);
      cout<<"--";
      c--;
   }
   for(i=0;i<17;i++)
   {
      gotoxy(c,r);
      cout<<"|";
      r--;
   }
   gotoxy(50,8);
   cout<<"WELCOME TO STAGE II";
   gotoxy(4,20);
   cout<<"ENTER COLUMN NUMBER (LEFT-RIGHT) BETWEEN";
   gotoxy(4,21);
   cout<<"4 TO 46";
   gotoxy(4,22);
   cout<<"ENTER ROW NUMBER (UP-DOWN) BETWEEN";
   gotoxy(4,23);
   cout<<"3 TO 18";
   gotoxy(5,17);
   cout<<"PRESS ENTER";
   getch();
   check2();
}
void check1()
{
   gotoxy(5,23);
   cout<<"            ";
   int ccord[]={8,8,8,8,8,10,10,12,12,14,14,16,16,20,22,24,24,24,24,24,26,28,32,34,36,36,36,36,36,38,40};
   int rcord[]={5,7,9,11,13,5,13,5,13,5,13,5,13,9,9,5,7,9,11,13,9,9,9,9,5,7,9,11,13,9,9};
   int i,j,z=0,a=0;
   int c,r,b,max=50,pts=0,pnt=0;
   char yes;
   for(i=0;i<50;i++)
   {
      gotoxy(50,13);
      cout<<"MOVES LEFT : "<<max;
   	gotoxy(5,24);
     	cout<<"ENTER COLUMN and ROW NUMBER :";
     	cin>>c>>r;
      gotoxy(54,21);
     	cout<<"                ";
	   gotoxy(54,22);
  	 	cout<<"             ";
			if((c>3 && c<43)&&(r>2 && r<17))
	      {
	         for(j=0;j<31;j++)
  				{
	  					if(c==ccord[j]&&r==rcord[j])
   	      	   {
      	      	  	a=1;
	      	      }
            }
   	      		if(a==1)
  						{
	         	   	z++;
		           		pts=pts+10;
   		        		gotoxy(54,20);
  							cout<<"                           ";
       			  		gotoxy(54,21);
			   		 	cout<<"            ";
   	         		gotoxy(33,25);
      	 				cout<<"                  ";
							gotoxy(c,r);
   						cout<<"H";
                     b=31-z;
							gotoxy(52,15);
							cout<<b<<" SHIP(s) LEFT.";
				     		gotoxy(52,17);
							cout<<z<<" SHIP(s) DOWN!!!";
   	               a=0;
   	         	}
	   	         else
	      	      {
   	      	  		gotoxy(c,r);
      	  				cout<<"M";
        					gotoxy(48,23);
	        				cout<<"OOPS!! YOU MISSED.";
   	         		getch();
                     gotoxy(54,20);
  							cout<<"                           ";
       			  		gotoxy(54,21);
			   		 	cout<<"            ";
                     pnt++;;
                     a=0;
   	 		  		}

	         gotoxy(34,24);
		     	cout<<"                  ";
            gotoxy(48,23);
            cout<<"                   ";
		   }
   		else
      	{
        		gotoxy(54,21);
		     	cout<<"OUT OF RANGE !!";
   		   gotoxy(54,22);
 	   	 	cout<<"TRY AGAIN !!";
      		gotoxy(34,24);
	     		cout<<"                  ";
	   	  	gotoxy(48,23);
   	  		cout<<"                   ";
	   	}
   	   	gotoxy(50,19);
			   cout<<"POINTS GAINED : "<<pts;
            gotoxy(50,20);
            cout<<"POINTS LOST : "<<pnt;
   	   	max--;
       gotoxy(48,24);
       cout<<"TO CONTINUE PRESS (Y) :";
       cin>>yes;
       if(yes!='y' && yes!='Y')
       break;
       gotoxy(47,24);
       cout<<"                               ";
       if(b==0||i==49)
       {
       	gotoxy(5,23);
	      cout<<"                    ";
   	   gotoxy(5,24);
      	cout<<"                                                ";
         gotoxy(8,25);
	      cout<<"GAME OVER !!!";
         gotoxy(8,27);
         cout<<"TOTAL POINTS : "<<(pts-pnt);
   	   gotoxy(8,26);
      	cout<<"\t\tPRESS ENTER ";
         getch();
         break;
       }
	}
   stg2();
}
void main()
{
	int i;
   bgrnd();
   gotoxy(9,5);
   cout<<"BBBBBBBBB        SSSSSSS   HH  HH   IIIIII   PPPPPPPP  ";
   gotoxy(9,6);
   cout<<"BBB    BB  ===   SS        HH  HH     II     PP    PP  ";
   gotoxy(9,7);
   cout<<"BBBBBBBBB  ===   SSSSSSS   HHHHHH     II     PPPPPPPP  ";
   gotoxy(9,8);
   cout<<"BBB    BB  ===        SS   HH  HH     II     PP        ";
   gotoxy(9,9);
   cout<<"BBBBBBBBB        SSSSSSS   HH  HH   IIIIII   PP        ";
   gotoxy(15,14);
   cout<<"***** WELCOME TO BATTLESHIP !!! *****";
   gotoxy(20,15);
   for(i=0;i<26;i++)
  	{
  		cout<<"^";
  	}
   gotoxy(6,20);
   cout<<"PRESS ENTER";
   getch();
   	bgrnd();
   	gotoxy(13,8);
   	cout<<"INSTRUCTIONS :";
   	gotoxy(13,10);
   	cout<<"ENTER CO-ORDINATES TO LOCK THE DESTINATION";
   	gotoxy(13,12);
   	cout<<"OF YOUR MISSILE.";
   	gotoxy(13,14);
   	cout<<"YOU HAVE TO DESTROY ALL THE SHIPS IN MIN MOVES ";
   	gotoxy(13,16);
   	cout<<"TO WIN THIS GAME.";
      gotoxy(6,20);
	   cout<<"PRESS ENTER";
      getch();
   bgrnd();
   gotoxy(16,8);
   cout<<"THERE ARE THREE STAGES.";
   gotoxy(16,10);
   cout<<"YOU HAVE TO COMPLETE";
   gotoxy(16,12);
   cout<<"ALL OF THEM TO WIN THIS GAME.";
   gotoxy(16,14);
   cout<<"BEST OF LUCK!!!";
   gotoxy(6,20);
   cout<<"PRESS ENTER";
   getch();
   stg1();
   check1();
}


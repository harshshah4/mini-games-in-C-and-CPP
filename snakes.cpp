#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<windows.h>
char a[10]={"0000"};
int f[100]={3,5,10,7,13,23,13,5,13,20,4,23,12,22,15,5,5,12,2};
char ch;
int i,x,y,k,b,l=3;
int q=0,w=1;
int sl=150;
int score;

void start()
{
	cout<<"\n                                                .o@*hu           ";
	cout<<"\n                          ..      .........   .u*'    ^Rc        ";
	cout<<"\n                        oP''*Lo*#'''''''''''7d' .d*N.   $        ";
	cout<<"\n                       @  u@''           .u*' o''   #L  ?b       ";
	cout<<"\n                      @   '              ' .d'  .d@@e$   ?b.     ";
	cout<<"\n                     8                    @*@me@#         ''Nu   ";
	cout<<"\n                    @                                        '#b ";
	cout<<"\n                  .P                                           $r";
	cout<<"\n                .@'                                  $L        $ ";
	cout<<"\n              .@'                                   8'R      dP  ";
	cout<<"\n           .d#'                                  .dP d'   .d#    ";
	cout<<"\n          xP              .e                 .ud#'  dE.o@'(      ";
	cout<<"\n          $             s*'              .u@*''     '''/dP'      ";
	cout<<"\n          ?L  ..                    ..o@''        .$  uP         ";
	cout<<"\n           #c:$'*u.             .u@*''$          uR .@'          ";
	cout<<"\n            ?L$.   '****Nc    x@''   @'         d' JP            ";
	cout<<"\n             ^#$         #L  .$     8'         d' d'             ";
	cout<<"\n                          'b.'$    @'         $' 8'              ";
	cout<<"\n                            '*@   $'         $  @                ";
	cout<<"\n                           @L    $'         d' 8/                ";
	cout<<"\n                           $$u.u$'         dF dF                 ";
	cout<<"\n                           $ '''   o      dP xR                  ";
	cout<<"\n                           $      dFNu...@'  $                   ";
	cout<<"\n                           'N..   ?B ^'''   :R                   ";
	cout<<"\n                             ''''* RL       d>                   ";
	cout<<"\n                                    '$u.   .$                    ";
	cout<<"\n                                      ^'*bo@'                    ";
   cout<<"\n\n\t\t\t WELCOME TO THE SNAKE GAME !";
   gotoxy(50,25);
   cout<<"LOADING :";
   for(int i=0;i<20;i++)
   {
   	Sleep(250);
      cout<<char(178);
   }
}

void splfoodmoney()
{
	gotoxy((score/5),(score/5));
   cout<<'$';
   if((score/5==x)&&(score/5==y))
   	score=score+25;
}

void splfoodfast()
{
	gotoxy((score/4),(score/4));
   cout<<'@';
   if((score/4==x)&&(score/4==y))
   {
   	sl=50;
   }
}

void food()
{
   int r,t;
   r=f[q];
   t=f[w];
   gotoxy(r,t);
   cout<<"*";

}
void bound()
{
	if(x==1)
   {
   	b=3;
   }
   else if(y==1)
   {
   	b=3;
   }
   else if(x==76)
   {
   	b=3;
   }
   else if(y==24)
   {
   	b=3;
   }

}

void eat()
{
	if((f[q]==x)&&(f[w]==y))
   {
   	cout<<(char)7;
   	score=score+5;
      q++;
      w++;
   }
      if((score==15)||(score==30)||(score==50)||(score==65)||(score==95))
      {
         sl=150;
      	splfoodmoney();
      }
      else if((score==20)||(score==40)||(score==60)||(score==80))
      {
      	splfoodfast();
      }
      else
      {
      	sl=150;
      }
}
void dispscr()
{
   gotoxy(3,30);
	cout<<"SCORE: "<<score;
}

void box()
{
	int r;
   gotoxy(1,1);
	for(r=2;r<=80;r++)
   {
   	cout<<"_";
      gotoxy(r,1);
   }
   for(r=2;r<=24;r++)
   {
      gotoxy(80,r);
   	cout<<"|";
      cout<<"\n";
   }
   for(r=79;r>=1;r--)
   {
   	cout<<"_";
      gotoxy(r,24);
   }
   for(r=2;r<=24;r++)
   {
      gotoxy(1,r);
   	cout<<"|";
      cout<<"\n";
   }
}
void right()
{
   a[0]='0';
   a[4]='';
   box();
   dispscr();
   eat();
	clrscr();
   eat();
   dispscr();
   box();
   food();
   gotoxy(++x,y);
   cout<<a;
   Sleep(sl);

}
void left()
{
	a[0]='';
   a[4]='0';
   box();
   dispscr();
   eat();
	clrscr();
   eat();
   dispscr();
   box();
   food();
   gotoxy(--x,y);
   cout<<a;
   Sleep(sl);
}
void up()
{
	box();
   dispscr();
	eat();
   clrscr();
   eat();
   dispscr();
   box();
   food();
	y=y+4;
	for(i=4;i>=0;i--)
   {
   	gotoxy(x,--y);
      cout<<a[i];

   }
   Sleep(sl);
}
void down()
{
	box();
   dispscr();
   eat();
	clrscr();
   eat();
   dispscr();
   box();
   food();
	y=y-4;
	for(i=4;i>=0;i--)
   {
   	gotoxy(x,++y);
      cout<<a[i];

   }
   Sleep(sl);
}

void main()
{
   start();
   clrscr();
	ch='a';k=0;
	int n;x=10;y=10;
   //cout<<"LOADING....";
   //Sleep(4000);
   gotoxy(30,13);
   cout<<"Welcome to the SNAKE \n";
   gotoxy(15,11);
   cout<<"HISSSSSSSSSSSSSS !!!";
   for(i=25;i>=7;i--)
   {
   	gotoxy(30,13);
   	cout<<"Welcome to the SNAKE \n";
   	gotoxy(15,11);
   	cout<<"HISSSSSSSSSSSSSS !!!";
      gotoxy(i,12);
      cout<<"0000";
      Sleep(150);
      clrscr();
   }
   gotoxy(15,10);
   cout<<"Welcome to the SNAKE \n";
   gotoxy(15,11);
   cout<<"HISSSSSSSSSSSSSS !!!";
   gotoxy(20,14);
   cout<<"-------<Press Any key to continue>-------";
   gotoxy(7,12);
   cout<<"0000";
   gotoxy(20,15);
	cout<<"\n                         _,..,,,_                                 ";
	cout<<"\n                     '``````^~'-,_`'-,_                           ";
	cout<<"\n      _.-~o~-.                    `~:. ^-.                        ";
	cout<<"\n      ~-.o    ;                      `:.  `-,     _.-~~^^~:.      ";
	cout<<"\n         `.   ;      _,--~~~~-._       `:.   ~. .~          `.    ";
	cout<<"\n          .` ;'   .:`           `:       `:.   `    _.:-,.    `.  ";
	cout<<"\n        .' .:   :'    _.-~^~-.    `.       `..'   .:      `.    ' ";
	cout<<"\n       :  .' _:'   .-'        `.    :.     .:   .'`.        :    ;";
	cout<<"\n       :  `-'   .:'             `.    `^~~^`   .:.  `.      ;    ;";
	cout<<"\n        `-.__,-~                  ~-.        ,' ':    '.__.`    :'";
	cout<<"\n                                     ~--..--'     ':.         .:' ";
	cout<<"\n                                                     ':..___.:'   ";

   getch();
   clrscr();
   cout<<"\n\t INSTRUCTIONS :-";
   gotoxy(10,5);
   cout<<"*********************************************************************";
   gotoxy(10,6);
   cout<<"THE INSTRUCTIONS ARE AS FOLLOWS :\n";
   gotoxy(10,7);
   cout<<"MOVE THE SNAKE IN DIFFERENT DIRECTIONS USING THE FOLLWING KEYS\n";
   gotoxy(10,8);
   cout<<"A : LEFT\n";
   gotoxy(10,9);
   cout<<"D : RIGHT\n";
   gotoxy(10,10);
   cout<<"W : UP\n";
   gotoxy(10,11);
   cout<<"S : DOWN\n";
   gotoxy(10,12);
   cout<<"MOVE THE SNAKE TOWARDS THE FOOD TO EAT IT\n";
   gotoxy(10,13);
   cout<<"FOR EACH FOOD YOU GET 5 POINTS\n";
   gotoxy(10,14);
   cout<<"MAKE SURE YOU DON'T HIT THE WALLS \n";
   gotoxy(10,15);
   cout<<"THERE ARE SPECIAL FOOD ITEMS THAT APPEAR REPEATEDLY\n";
   gotoxy(10,16);
   cout<<"$ : 20 POINTS\n";
   gotoxy(10,17);
   cout<<"@ : SPEED OF THE SNAKE INCREASES\n";
   gotoxy(10,18);
   cout<<"*********************************************************************";
   cout<<"\n\n\tPRESS ANY KEY TO CONTINUE....";
   getch();
   gotoxy(x,y);
   cout<<a;
   for(n=1;n<10;)
   {

  	   while(!kbhit())
   	{
      	bound();
         if(b==3)
         	break;

   		if(ch=='a')
	      	left();
         if(ch=='d')
         	right();
         if(ch=='w')
           	up();
         if(ch=='s')
            down();
      }
      if(b==3)
        	break;
      ch=getch();
   }
   for(i=0;i<5;i++)
   {
   	cout<<(char)7;
      Sleep(350);
   }
   clrscr();
   box();
   gotoxy(30,10);
   cout<<"GAME OVER";
   gotoxy(15,11);
   cout<<"YOU HIT THE WALL";
   gotoxy(25,13);
   cout<<"FINAL SCORE: "<<score;
   cout<<"\n                /^\\/^\\                                     ";
   cout<<"\n   HISSS !!    _|O_|O| \\                                   ";
   cout<<"\n     \\/     /~    \\_/\\\\                                   ";
   cout<<"\n      \\____|__________/  \\                                 ";
   cout<<"\n             \\_______      \\                               ";
   cout<<"\n                      `\\    \\                \\            ";
   cout<<"\n                        |    |                 \\          ";
   cout<<"\n                       /     /                   \\        ";
   cout<<"\n                      /     /                      \\\\     ";
   cout<<"\n                    /      /                        \\\\    ";
   cout<<"\n                   /     /                           \\ \\  ";
   cout<<"\n                 /     /             _----_           \\  \\ ";
   cout<<"\n                /     /           _-~ K  E ~-_        |   |";
   cout<<"\n               (      (        _-~  A _--_    ~-_    _/   |";
   cout<<"\n               \\    T ~-____-~  N _-~    ~-_  G ~-_-~    / ";
   cout<<"\n                 '~-_ H E     S _-~          ~-  A M E _-~  ";
   cout<<"\n                     ~--______-~                ~-___-~     ";
   gotoxy(30,24);
   cout<<"Thank You For Playing !!";
   getch();
}



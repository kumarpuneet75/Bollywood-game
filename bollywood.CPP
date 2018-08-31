#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<dos.h>
void main()
{ char film[100],dfilm[100],ch;
  int t=5,i=0;
  int k=1;
  char tfilm[100];
  int q=0;
  clrscr();
gotoxy(20,10);
cout<<"Player 1 : Enter Movie Name\n\n";
  i=0;
  gotoxy(20,12);
while(1)
  {film[i]=getch();

if(film[i]==13)
break;
if(film[i]==' ')
{dfilm[i]=' ';
 cout<<' ';}
else
{
cout<<"*"; dfilm[i]='_';}

i++;
  }
film[i]=dfilm[i]='\0';

while(1)
{clrscr();
gotoxy(20,10);
cout<<"Player 2 : Guess the Movie";
gotoxy(20,12);
cout<<dfilm;
gotoxy(20,14)   ;
cout<<"Guesses left  "<<t;

ch=getch();

/*tfilm[q]=ch;     // <==  this  <==
q++;
tfilm[q]='\0';

gotoxy(20,19);
cout<<"Ur all gusses till now are:";
gotoxy(20,20);
for(int t=0;tfilm[t]!='\0';t++)
  cout<<tfilm<<"\t";  */

int found=0;

for(i=0;film[i]!='\0';i++)
if(film[i]==ch)
{found=1;
dfilm[i]=ch;}


if(found==1)
{
clrscr(); gotoxy(20,10);
cout<<"Player 2 : Guess the Movie";
gotoxy(20,12);
 cout<<dfilm;
gotoxy(20,14);
cout<<"Guesses left  "<<t;

gotoxy(20,16);
 cout<<"Your "<<k<<" Guess "<<ch<<" was right(Press Enter to Cont.)";
k++;
getch();



 if(strcmp(film,dfilm)==0)
     {  for(int e;e!=25;e++)
	  {cout<<"\n";
	   delay(100);}
	cout<<"\n\t\t\t YOU WIN";
     getch();
      break;}

 }


else
{t--;
gotoxy(20,16);
 cout<<"Your "<<k<<" Guess "<<ch<<" was wrong(Press Enter to Cont.)";
k++;
getch();
if(t==0)
{clrscr(); gotoxy(20,10);
cout<<"Player 2 : Guess the Movie";
gotoxy(20,12);
 cout<<dfilm;
gotoxy(20,14);
cout<<"Guesses left  "<<t;
cout<<"\n\n\n\t\t\t YOU LOSE...\n\t\t\t Film was : "<<film;
getch();
break;}
}
}
}
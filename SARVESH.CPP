#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<stdio.h>
class quiz
{
public:
	int num, total;
	char name[20];
	void start();
};
void quiz::start()
{
	total=0;
	clrscr();
	delay(1000);
	clrscr();
	cout<<"\n\n\n\n\t\t\tLets start with the Quiz";
	delay(1000);
	clrscr();
	cout<<"\n\t [Q1] What is the Capital of India?";
	cout<<"\n\n-------------------------------------------------------------------------------";
	cout<<"\n\t 1] Mumbai \t\t\t 2] Delhi \n\t 3] Pune \t\t\t 4] Chennai";
	cout<<"\n\n--------------------------------------------------------------------------------";
	cout<<"\n\nEnter < 0 > to Exit the game: ";
	cout<<"\n\nEnter your Answer number : ";

	cin>>num;
	if(num==2)
	{
		delay(500);
		cout<<"\n\n\n===============================================================================";
		cout<<"\n\n\t\t\t\t YOU ARE RIGHT";
		total++;
		cout<<"\n\n\n\t\t\t\tYOUR POINTS : "<<total;
		delay(2000);

	}
	else if(num==0)
	{
	exit(0);
	}

	else
	{       cout<<"\n\n\n================================================================================";
		cout<<"\n\n\t\t\t\tSORRY YOU ARE WRONG";
		cout<<"\n\n\n\t\t\t\tYOUR POINTS : "<<total;
		delay(2000);
	}


	clrscr();
	cout<<"\n\t [Q2] Where is the Asteroid belt situated in our solar system?";
	cout<<"\n\n-------------------------------------------------------------------------------";
	cout<<"\n\t 1] Between Mars and Earth \t\t\t 2] After Saturn \n\t 3] Between Mars and Jupiter \t\t\t 4] None of these";
	cout<<"\n\n--------------------------------------------------------------------------------";
	cout<<"\n\nEnter < 0 > to exit the game: ";
	cout<<"\n\nEnter your Answer number : ";
	cin>>num;
	if(num==3)
	{
		delay(500);
		cout<<"\n\n\n===============================================================================";
		cout<<"\n\n\t\t\t\t YOU ARE RIGHT";
		total++;
		cout<<"\n\n\n\t\t\t\tYOUR POINTS : "<<total;
		delay(2000);

	}
	else if(num==0)
	{
	exit (0);
	}

	else
	{       cout<<"\n\n\n================================================================================";
		cout<<"\n\n\t\t\t\tNOT LUCKY ";
		cout<<"\n\n\n\t\t\t\tYOUR POINTS : "<<total;
		delay(2000);
	}


	clrscr();
	cout<<"\n [Q3] Which inheritance has one base class and one derived class?";
	cout<<"\n\n-------------------------------------------------------------------------------";
	cout<<"\n\t 1] Heirachical inheritance \t\t 2] Multiple inheritance \n\t 3] Hybrid inheritance \t\t\t 4] Single inheritance";
	cout<<"\n\n--------------------------------------------------------------------------------";
	cout<<"\n\nEnter < 0 > to exit the Game: ";
	cout<<"\n\nEnter your Answer number : ";
	cin>>num;
	if(num==4)
	{
		delay(500);
		cout<<"\n\n\n===============================================================================";
		cout<<"\n\n\t\t\t\t YOU ARE RIGHT";
		total++;
		cout<<"\n\n\n\t\t\t\tYOUR POINTS : "<<total;
		delay(2000);

	}
	else if(num==0)
	{
	exit(0);
	}

	else
	{       cout<<"\n\n\n================================================================================";
		cout<<"\n\n\t\t\t\tWRONG ANSWER DUDE";
		cout<<"\n\n\n\t\t\t\tYOUR POINTS : "<<total;
		delay(2000);
	}


	clrscr();
	cout<<"\n\t [Q4] How many states are there in India?";
	cout<<"\n\n-------------------------------------------------------------------------------";
	cout<<"\n\t 1] 26 \t\t\t 2] 29 \n\t 3] 27 \t\t\t 4] 28";
	cout<<"\n\n--------------------------------------------------------------------------------";
	cout<<"\n\nEnter < 0 > to exit the Game: ";
	cout<<"\n\nEnter your Answer number : ";
	cin>>num;
	if(num==2)
	{
		delay(500);
		cout<<"\n\n\n===============================================================================";
		cout<<"\n\n\t\t\t\t YOU ARE RIGHT BUDDY";
		total++;
		cout<<"\n\n\n\t\t\t\tYOUR POINTS : "<<total;
		delay(2000);

	}
	else if(num==0)
	{
	exit(0);
	}

	else
	{       cout<<"\n\n\n================================================================================";
		cout<<"\n\n\t\t\t\tKEEP WATCHING NEWS DAILY";
		cout<<"\n\n\n\t\t\t\tYOUR POINTS : "<<total;
		delay(2000);
	}


	clrscr();
	cout<<"\n\t [Q5] What is the average count of bones in the human body?";
	cout<<"\n\n-------------------------------------------------------------------------------";
	cout<<"\n\t 1] 206 \t\t\t 2] 210 \n\t 3] 305 \t\t\t 4] 265";
	cout<<"\n\n--------------------------------------------------------------------------------";
	cout<<"\n\nEnter < 0 > to exit the Game: ";
	cout<<"\n\nEnter your Answer number : ";
	cin>>num;
	if(num==1)
	{
		delay(500);
		cout<<"\n\n\n===============================================================================";
		cout<<"\n\n\t\t\t\t YOU ARE RIGHT BUDDY";
		total++;
		cout<<"\n\n\n\t\t\t\tYOUR POINTS : "<<total;
		delay(2000);

	}
	else if(num==0)
	{
	exit(0);
	}

	else
	{       cout<<"\n\n\n================================================================================";
		cout<<"\n\n\t\t\t\tGO FOR THE X-RAY MACHINE DUDE";
		cout<<"\n\n\n\t\t\t\tYOUR POINTS : "<<total;
		delay(2000);
	}
clrscr();
cout<<"\n\n\n-------------------------------------------------------------------------------";
cout<<"\n\n\t\t\t***** YOU TOTAL POINTS ARE *****";
cout<<"\n\n\n\t\t\t\t\t "<<total;
delay(4000);
clrscr();
cout<<"\n\n\n\n\n\t\tTHANK YOU FOR PLAYING THE QUIZ GAME";


}
void main()
{
clrscr();
	quiz s;
	int ch;
	char name[20], choice;
	cout<<"\n\n\n\n\n\n\n\n\n================================================================================";
	cout<<"\n\n\n\t\t\t --- WELCOME TO THE QUIZ GAME --- \n\n\n";
	cout<<"================================================================================";
	delay(3000);
	clrscr();
	cout<<"\n==============================================================================";
	cout<<"\n\t\t\t\t MAIN MENU";
	cout<<"\n==============================================================================";
	cout<<"\n\n\n\t\t\t\t1] PLAY";
	cout<<"\n\t\t\t\t2] HELP";
	cout<<"\n\t\t\t\t3] QUIT";
	cout<<"\n\n\n-------------------------------------------------------------------------------";
	cout<<"\n\n\n\n\nEnter your Option : ";
	cin>>ch;
switch(ch)
{
	case 1:
	clrscr();
		{
		s.start();
		}

break;
	case 2:
	{
	clrscr();
	cout<<"==============================================================================="<<endl;
	cout<<"\n\t\t\t\tINSTRUCTIONS\n";
	cout<<"===============================================================================";
	cout<<"\n1] Just Enjoy the Game\n";
	cout<<"\n2] Each Questions will be asked you accordingly after every Question";
	cout<<"\n\n3] You will be asked 5 Questions";
	cout<<"\n\n4] Each Question carries 1 point";
	cout<<"\n\n5] You dont have any life lines to continue the game";
	cout<<"\n\n6] Incase of wrong answer you will not be rewarded with any point";
	cout<<"\n\n7] But you will be procceding towards the next Question";
	cout<<"\n\n\n-------------------------------------------------------------------------------";
	cout<<"\n\n\nWANT TO TEST YOUR KNOWLEDGE ?(y/n) : ";
	cin>>choice;
	if((choice=='Y')||(choice=='y'))
	{
	s.start();
	}
	else
	{
	exit(0);
	}

break;

	case 3:
	{
	exit(0);
	}
}
}
getch();
}







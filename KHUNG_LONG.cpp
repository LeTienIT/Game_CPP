#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
 
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
} 
void texcolor(int x)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,x);
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void getup()
{
	system("cls");
	gotoxy( 10 , 2);texcolor(14);
	cout<<"an x de thoat, an phim cach de nhay";
	gotoxy( 62 , 2);
	cout<<"SCORE : ";
	gotoxy( 1 , 25);	texcolor(10);
	for(int x = 0 ; x < 79 ; x++)
	cout<<"�";
}

int t, speed = 40;

void ds(int jump = 0)
{
	static int a = 1;

	if(jump == 0)
	{
		t = 0;
	}
	else if(jump == 2)
	{
		t--;
	}
	else
	{
		t++;
	} 
	gotoxy( 2 , 15-t);texcolor(2);
	cout<<"                 ";
	gotoxy( 2 , 16-t);texcolor(3);
	cout<<"         ��������";
	gotoxy( 2 , 17-t);texcolor(4);
	cout<<"         ��������";
	gotoxy( 2 , 18-t);texcolor(5);
	cout<<"         ��������";
	gotoxy( 2 , 19-t);texcolor(6);
	cout<<" �      �������� ";
	gotoxy( 2 , 20-t);texcolor(7);
	cout<<" ���  ���������� ";
	gotoxy( 2 , 21-t);texcolor(8);
	cout<<" ������������  � ";
	gotoxy( 2 , 22-t);texcolor(9);
	cout<<"   ���������     ";
	
	gotoxy( 2 , 23-t);texcolor(10);
	
	if(jump==1 || jump==2)
	{
		cout<<"    ��� ��       ";
		gotoxy( 2 , 24-t);texcolor(11);
		cout<<"    ��   ��      ";
	}
	else if(a == 1)
	{
		cout<<"    ����  ���    ";
		gotoxy( 2 , 24-t);texcolor(12);
		cout<<"      ��         ";
		a = 2;
	}
	else if( a == 2)
	{
		cout<<"     ��� ��      ";
		gotoxy( 2 , 24-t);texcolor(13);
		cout<<"          ��     ";
		a = 1;
	}
	
	gotoxy( 2 , 25-t);texcolor(14);
	
	if(jump != 0)
	{
		cout<<"                ";
	}
	else
	{
		cout<<"�����������������";
	}
	delay(speed);
}
void obj()
{
	static int x = 0, scr = 0;
	
	if(x == 56 && t < 4)
	{
		scr = 0;
		speed = 40;
		gotoxy( 36 , 8);
		cout<<"Game Over";
		getch();
		gotoxy( 36 , 8);
		cout<<"         ";
	}
	
	gotoxy(74-x,20);texcolor(14);
	cout<<"�    � ";
	gotoxy(74-x,21);texcolor(13);
	cout<<"�    � ";
	gotoxy(74-x,22);texcolor(12);
	cout<<"������ ";
	gotoxy(74-x,23);texcolor(11);
	cout<<"  �    ";
	gotoxy(74-x,24);texcolor(10);
	cout<<"  �  " ;
	
	x++;
	
	if(x == 73)
	{
		x = 0;
		scr++;
		gotoxy( 70 , 2);
		cout<<"     ";
		gotoxy( 70 , 2);
		cout<<scr;
		if(speed > 20)
		{
			speed--;
		}
	}
}
int main()
{
	system("mode con: lines=29 cols=82");
	char ch;
	int i;
	
	getup();
	
	while(true)
	{
		while(!kbhit())
		{
			ds();
			obj();
		}
		
		ch=getch();
		
		if(ch==' ')
		{
			for( i = 0 ; i < 10 ; i++)
			{
				ds(1);
				obj();
			}
			
			for( i = 0 ; i < 10 ; i++)
			{
				ds(2);
				obj();
			}
		}
		
		else if ( ch == 'x')
		{
				return(0);
		}
	}	
}

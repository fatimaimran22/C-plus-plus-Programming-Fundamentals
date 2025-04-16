#include<iostream>
#include<conio.h>
#include"help.h"

using namespace std;

void O(int x1, int y1, int x2, int y2, int R, int G, int B, int F, int U, int M)
{
	HWND console_handle = GetConsoleWindow();
    HDC device_context = GetDC(console_handle);

    //change the color by changing the values in RGB (from 0-255)
    HPEN pen =CreatePen(PS_SOLID,20,RGB(R,G,B)); 
    SelectObject(device_context,pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(F, U, M));  //Fill color is black
	SelectObject(device_context,brush);
	Ellipse(device_context,x1,y1,x2,y2);
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	DeleteObject(brush);
		

}

void Line(int x1, int y1, int x2, int y2,int R, int G, int B) //use three 3 integers if you want colored lines.
{
	HWND console_handle = GetConsoleWindow();
    HDC device_context = GetDC(console_handle);

    //change the color by changing the values in RGB (from 0-255) to get shades of gray. For other colors use 3 integers for colors.
	HPEN pen =CreatePen(PS_SOLID,20,RGB(R,G,B)); //2 is the width of the pen
    SelectObject(device_context,pen);
	MoveToEx(device_context,x1,y1,NULL);
    LineTo(device_context,x2, y2);
	ReleaseDC(console_handle, device_context);  
	DeleteObject(pen);
	
}

void sun(int x1, int y1, int x2, int y2, int R, int G, int B, int F, int U, int M)
{
	HWND console_handle = GetConsoleWindow();
    HDC device_context = GetDC(console_handle);

    //change the color by changing the values in RGB (from 0-255)
    HPEN pen =CreatePen(PS_SOLID,2,RGB(R,G,B)); 
    SelectObject(device_context,pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(F, U, M));  //Fill color is black
	SelectObject(device_context,brush);
	Ellipse(device_context,x1,y1,x2,y2);
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	DeleteObject(brush);
		

}

void mylolRectangle(int x1, int y1, int x2, int y2, int R, int G, int B )
{
	HWND console_handle = GetConsoleWindow();
    HDC device_context = GetDC(console_handle);

    //change the color by changing the values in RGB (from 0-255)
    HPEN pen =CreatePen(PS_SOLID,2,RGB(R,G,B)); 
    SelectObject(device_context,pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(30,179,113)); //Fill color can also be passed as parameter to the function!!!
	
	SelectObject(device_context,brush);
	
	Rectangle(device_context,x1,y1,x2,y2);
	ReleaseDC(console_handle, device_context); 
	DeleteObject(pen);
	DeleteObject(brush);
}

void white(int x1, int y1, int x2, int y2, int R, int G, int B )
{
	HWND console_handle = GetConsoleWindow();
    HDC device_context = GetDC(console_handle);

    //change the color by changing the values in RGB (from 0-255)
    HPEN pen =CreatePen(PS_SOLID,2,RGB(R,G,B)); 
    SelectObject(device_context,pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(225,225,225)); //Fill color can also be passed as parameter to the function!!!
	
	SelectObject(device_context,brush);
	
	Rectangle(device_context,x1,y1,x2,y2);
	ReleaseDC(console_handle, device_context); 
	DeleteObject(pen);
	DeleteObject(brush);
}

void circle(int x1, int y1, int x2, int y2, int R, int G, int B)
{
	HWND console_handle = GetConsoleWindow();
    HDC device_context = GetDC(console_handle);

    //change the color by changing the values in RGB (from 0-255)
    HPEN pen =CreatePen(PS_SOLID,2,RGB(R,G,B)); 
    SelectObject(device_context,pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(255, 165, 0));  //Fill color is black
	SelectObject(device_context,brush);
	Ellipse(device_context,x1,y1,x2,y2);
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	DeleteObject(brush);
		

}

void pole(int x1, int y1, int x2, int y2, int R, int G, int B )
{
	HWND console_handle = GetConsoleWindow();
    HDC device_context = GetDC(console_handle);

    //change the color by changing the values in RGB (from 0-255)
    HPEN pen =CreatePen(PS_SOLID,2,RGB(R,G,B)); 
    SelectObject(device_context,pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(149,99,71)); //Fill color can also be passed as parameter to the function!!!
	
	SelectObject(device_context,brush);
	
	Rectangle(device_context,x1,y1,x2,y2);
	ReleaseDC(console_handle, device_context); 
	DeleteObject(pen);
	DeleteObject(brush);
}

void tank(int x1, int y1, int x2, int y2, int R, int G, int B )
{
	HWND console_handle = GetConsoleWindow();
    HDC device_context = GetDC(console_handle);

    //change the color by changing the values in RGB (from 0-255)
    HPEN pen =CreatePen(PS_SOLID,2,RGB(R,G,B)); 
    SelectObject(device_context,pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(120, 120, 120)); //Fill color can also be passed as parameter to the function!!!
	
	SelectObject(device_context,brush);
	
	Rectangle(device_context,x1,y1,x2,y2);
	ReleaseDC(console_handle, device_context); 
	DeleteObject(pen);
	DeleteObject(brush);
}

void wheel(int x1, int y1, int x2, int y2, int R, int G, int B , int A, int X, int C)
{
	HWND console_handle = GetConsoleWindow();
    HDC device_context = GetDC(console_handle);

    //change the color by changing the values in RGB (from 0-255)
    HPEN pen =CreatePen(PS_SOLID,2,RGB(R,G,B)); 
    SelectObject(device_context,pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(A, X, C)); //Fill color can also be passed as parameter to the function!!!
	
	SelectObject(device_context,brush);
	
	Rectangle(device_context,x1,y1,x2,y2);
	ReleaseDC(console_handle, device_context); 
	DeleteObject(pen);
	DeleteObject(brush);
}

int main()
{
	//sky
	wheel(0,1000,1500,0,0,0,0,77, 210, 255);
	//Sun
	sun(630+50,110+30,630+300-100-50,80-30,255, 255, 0,255, 255, 51);
	//cloud 0
	wheel(500-300+10,200-50,650-300+10,150-50+10,225, 225, 255,225, 225, 255); //1 block
	wheel(520-300+10,110,630-300+10,80,225, 225, 255,225, 225, 255); //2 block
	wheel(550-300+10,80,600-300+10,50,225, 225, 255,225, 225, 255); //3 block
	//cloud 1
	wheel(500,200-50,650,150-50+10,225, 225, 255,225, 225, 255); //1 block
	wheel(520,110,630,80,225, 225, 255,225, 225, 255); //2 block
	wheel(550,80,600,50,225, 225, 255,225, 225, 255); //3 block
	//cloud 2
	wheel(500+300,200-50,650+300,150-50+10,225, 225, 255,225, 225, 255); //1 block
	wheel(520+300,110,630+300,80,225, 225, 255,225, 225, 255); //2 block
	wheel(550+300,80,600+300,50,225, 225, 255,225, 225, 255); //3 block
	//cloud 3
	wheel(500+300+300,200-50,650+300+300,150-50+10,225, 225, 255,225, 225, 255); //1 block
	wheel(520+300+300,110,630+300+300,80,225, 225, 255,225, 225, 255); //2 block
	wheel(550+300+300,80,600+300+300,50,225, 225, 255,225, 225, 255); //3 block
	// FLAG 
	mylolRectangle(80,210,200,110,0, 110, 45); 
	white(80,210,115,110,0, 110, 45);
	//Moon on flag
	sun(130,185,180,135,225,255,255,255,255,255);
	sun(130+5,185-5,180+5,135-5,30,179,113,30,179,113);
	//Flag Pole
	pole(80,400,70,100,102, 83, 45); 
	circle(57,65,92,100,90, 90, 90); //circle on flag pole
	myLine(160,130,175,165,255); //line 1
	myLine(160,130,145,165,255); //line 2
	myLine(180,145,145,165,255); //line 3
	myLine(140,145,180,145,255); //line 4
	myLine(140,145,175,165,255); //line 5
	//tank head
	tank(450,500,120,350,0, 0, 0);
	//tank base
	tank(500,550,70,400,0, 0, 0);
	//wheels
	wheel(100,550,60,510,0,0,0,90,90,90);
	wheel(150,550,110,510,0,0,0,90,90,90);
	wheel(200,550,160,510,0,0,0,90,90,90);
	wheel(250,550,210,510,0,0,0,90,90,90);
	wheel(300,550,260,510,0,0,0,90,90,90);
	wheel(300+50,550,260+50,510,0,0,0,90,90,90);
	wheel(300+50+50,550,260+50+50,510,0,0,0,90,90,90);
	wheel(300+50+50+50,550,260+50+50+50,510,0,0,0,90,90,90);
	wheel(300+50+50+50+50,550,260+50+50+50+50,510,0,0,0,90,90,90);
	//wheel line
	wheel(50,500,260+50+50+50+50+50,510,0,0,0,60, 60, 60); //top
	wheel(50,550,260+50+50+50+50+50,560,0,0,0,60, 60, 60); //bottom
	//fire gun
	wheel(550,365,200,340,0, 0, 0,90,90,90);
	//grass
	wheel(0,1000,1500,560,0,0,0,0, 204, 68);
	//target
	wheel(900,360,900+200,560,102, 51, 0,102, 51, 0);
	// FIRST ROUND OF BATTLE
	//fire ball
	for(int i=1; i<3; i++)
	{
		int x=0;
		while(x<170)
		{
			sun(600+x,365-x,560+x,325-x,255,0,0,255,0,0);
			Sleep(20);
			sun(600+x,365-x,560+x,325-x,77, 210, 255,77, 210, 255);
			x=x+10;
		}	
		x=0;
		while(x<100)
		{
			sun(600+160+x,365-160,560+160+x,325-160,255,0,0,255,0,0);
			Sleep(20);
			sun(600+160+x,365-160,560+160+x,325-160,77, 210, 255,77, 210, 255);
			x=x+10;
		}
		x=0;
		while(x<180)
		{
			sun(600+160+90+x,365-160+x,560+160+90+x,325-160+x,255,0,0,255,0,0);
			Sleep(20);
			sun(600+160+90+x,365-160+x,560+160+90+x,325-160+x,77, 210, 255,77, 210, 255);
			x=x+10;
		}	
	}
	wheel(900,360,900+200,560,77, 210, 255,77, 210, 255);
	//SECOND ROUND OF BATTLE
	sun(900+10+50+150,200+50,900+200-40-50+150,350-50,102, 0, 68,128, 0, 85); //Ball 1 
	sun(900+10+50+150,200+50+100,900+200-40-50+150,350-50+100,102, 0, 68,128, 0, 85);//B2ll 1
	sun(900+10+50+150,200+50+200,900+200-40-50+150,350-50+200,102, 0, 68,128, 0, 85);//Ball 3
	sun(900+10+50+100+150,200+100,900+200-40-50+100+150,350, 102, 0, 68,128, 0,85);//Ball 4
	sun(900+10+50+100+150,200+100+100,900+200-40-50+100+150,350+100,102, 0, 68,128, 0, 85);//Ball 5
	sun(900+10+100,200+100,900-40-50+100+150,350,102, 0, 68,128, 0, 85); //Ball6
	sun(900+10+100,200+100+100,900-40-50+100+150,350+100,102, 0, 68,128, 0, 85); //Ball6
	//FIRE WAVE
	for(int i=0; i<1; i++)
	{
		int x=0;
		while(x<200)
		{
			sun(600+x,365-50+x,560+x,325+50-x,255,0,0,255,0,0);
			Sleep(15);
			sun(600+x,365-50+x,560+x,325+50-x,77, 210, 255,77, 210, 255);
			x=x+10;
		}	
		x=0;
		while(x<200)
		{
			sun(800+x,365+x,760+x,325-x,255,0,0,255,0,0);
			Sleep(15);
			sun(800+x,365+x,760+x,325-x,77, 210, 255,77, 210, 255);
			x=x+10;
		}	
	}
	//Invisiblity
	sun(900+10+50+150,200+50,900+200-40-50+150,350-50,77, 210, 255,77, 210, 255); //Ball 1 
	sun(900+10+50+150,200+50+100,900+200-40-50+150,350-50+100,77, 210, 255,77, 210, 255);//B2ll 1
	sun(900+10+50+150,200+50+200,900+200-40-50+150,350-50+200,77, 210, 255,77, 210, 255);//Ball 3
	sun(900+10+50+100+150,200+100,900+200-40-50+100+150,350,77, 210, 255,77, 210, 255);//Ball 4
	sun(900+10+50+100+150,200+100+100,900+200-40-50+100+150,350+100,77, 210, 255,77, 210, 255);//Ball 5
	sun(900+10+100,200+100,900-40-50+100+150,350,77, 210, 255,77, 210, 255); //Ball6
	sun(900+10+100,200+100+100,900-40-50+100+150,350+100,77, 210, 255,77, 210, 255); //Ball6
	//THIRD ROUND OF BATTLE 
	for(int i=0; i<2; i++)
	{

		int k=0;
		int f=0;
		while(k<200 || f<330)
		{
			sun(200+900+10+100-k,200+50+70,200+800-40-50+100+150+200-k,300-20+70,0,0,0,0,0,0); //STAR
			sun(200+1050+10+10-k,250+20,200+1200-100-k,300+100,0,0,0,0,0,0);
			if(k>50)
			{
				sun(600+f,365,560+f,325,255,0,0,255,0,0);
			}
			Sleep(15);
			sun(200+900+10+100-k,200+50+70,200+800-40-50+100+150+200-k,300-20+70,77, 210, 255,77, 210, 255); //STAR
			sun(200+1050+10+10-k,250+20,200+1200-100-k,300+100,77, 210, 255,77, 210, 255);
			if(k>50)
			{
				sun(600+f,365,560+f,325,77, 210, 255,77, 210, 255);
				f=f+10;
			}
			k=k+10;
		}
	}
	//VICTORY
	Line(200+50,150,250+50,350,204, 51, 0); // V
	Line(250+50,350,300+50,150,230, 57, 0); 
	Line(330+50,150,330+50,350,230, 57, 0); //I
	Line(370+50,150,370+50,350,204, 51, 0); //C
	Line(370+50,150,370+70+50,150,230, 57, 0);
	Line(370+50,350,370+70+50,350,230, 57, 0);
	Line(510+50,150,510+50,350,204, 51, 0); //T
	Line(470+50,150,550+50,150,230, 57, 0);
	O(560+50,150,660+50,350,204, 51, 0,77, 210, 255); //O
	Line(700+50,150,700+50,350,204, 51, 0); //R
	Line(700+50,150,770+50,150,230, 57, 0); 
	Line(770+50,150,770+50,240,204, 51, 0); 
	Line(700+50,240,770+50,240,230, 57, 0); 
	Line(700+50,240,780+50,345,230, 57, 0); 
	Line(850+50,240,850+50,350,204, 51, 0); //Y
	Line(800+50,150,850+50,240,204, 51, 0);
	Line(900+50,150,850+50,240,230, 57, 0);
	Line(1000,150,1000,350,204, 51, 0);// !
	Line(1050,150,1050,350,204, 51, 0);
	// DOTS
	sun(990,365,1010,385,230, 57, 0,230, 57, 0);
	sun(990+50,365,1010+50,385,230, 57, 0,230, 57, 0);
	_getch();
	return 0;
}

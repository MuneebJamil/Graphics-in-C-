#include"graphics.h"
#include<iostream>
#include<stdio.h>
#include<sstream>
using namespace std;


void main()
{
	initwindow(800, 600, "cafe");



	setbkcolor(WHITE);
	cleardevice();
	setbkcolor(WHITE);

	setcolor(LIGHTGRAY);
	setfillstyle(SOLID_FILL, LIGHTGRAY);
	rectangle(0, 0, getmaxx(), 100);
	floodfill(1, 1, LIGHTGRAY);

	setcolor(LIGHTGRAY);
	rectangle(0, 100, getmaxx() - 200, getmaxy());
	setcolor(LIGHTGRAY);
	rectangle(getmaxx() - 200, 100, getmaxx(), getmaxy());
	setcolor(BLACK);
	//settextstyle(1, HORIZ_DIR, 1);
	setbkcolor(LIGHTGRAY);
	outtextxy((getmaxx() / 2) - 100, 20, "Welcome to cafe 131");
	//settextstyle(0,HORIZ_DIR,0);
	setbkcolor(WHITE);
	outtextxy(250, 125, "Menu");
	outtextxy(660, 123, "Orderd Meals");
	outtextxy(624, 540, "Net Amount Payable:");
	// outtextxy(750, 540, "Total");
	outtextxy(190, 280, "Big Breakfast");
	outtextxy(190, 360, "Healthy Breakfast");
	outtextxy(190, 440, "Homer Special");
	outtextxy(190, 520, "Quick Snack");
	setcolor(BLACK);




	setfillstyle(SOLID_FILL, BLACK);
	rectangle(40, 285, 100, 300);
	floodfill(41, 286, 0);

	setfillstyle(SOLID_FILL, BLACK);
	rectangle(40, 360, 100, 375);
	floodfill(41, 361, 0);

	setfillstyle(SOLID_FILL, BLACK);
	rectangle(40, 435, 100, 450);
	floodfill(41, 436, 0);

	setfillstyle(SOLID_FILL, BLACK);
	rectangle(40, 515, 100, 530);
	floodfill(41, 516, 0);

	setcolor(WHITE);
	settextstyle(2, HORIZ_DIR, 4);
	setbkcolor(BLACK);
	outtextxy(42, 288, "Order (RS.80)");
	outtextxy(42, 362, "Order (RS.100)");
	outtextxy(42, 437, "Order (RS.150)");
	outtextxy(42, 518, "Order (RS.180)");
	setbkcolor(WHITE);
	setcolor(0);

	readimagefile("BB.jpg", 350, 230, 500, 330);
	readimagefile("HB.jpg", 350, 330, 500, 400);
	readimagefile("HS.jpg", 350, 430, 500, 480);
	readimagefile("QS.jpg", 350, 480, 500, 550);
	//cleardevice();


	int x, y;
	while (!ismouseclick(WM_LBUTTONDOWN))

	{


	}

	int total = 0;
	char arr[50];



	while (1)
	{
		getmouseclick(WM_LBUTTONDOWN, x, y);
		if (x >= 40 && x <= 100 && y >= 285 && y <= 300)
		{
			cout << "mouse clicked! at " << x << "," << y << endl;
			total = total + 80;

			sprintf(arr, "%d", total);
			settextstyle(6, HORIZ_DIR, 0);
			outtextxy(680, 560, arr);
			readimagefile("BB.jpg", 680, 200, 780, 300);



		}
		else if (x >= 40 && x <= 100 && y >= 360 && y <= 375)
		{
			cout << "mouse clicked! at " << x << "," << y << endl;
			total = total + 100;

			sprintf(arr, "%d", total);
			settextstyle(6, HORIZ_DIR, 0);
			outtextxy(680, 560, arr);
			readimagefile("HB.jpg", 680, 300, 780, 350);
		}
		else if (x >= 40 && x <= 100 && y >= 435 && y <= 450)
		{
			cout << "mouse clicked! at " << x << "," << y << endl;
			total = total + 150;

			sprintf(arr, "%d", total);
			settextstyle(6, HORIZ_DIR, 0);
			outtextxy(680, 560, arr);
			readimagefile("HS.jpg", 680, 400, 780, 450);
		}

		else if (x >= 40 && x <= 100 && y >= 515 && y <= 530)
		{
			cout << "mouse clicked! at " << x << "," << y << endl;
			total = total + 180;

			sprintf(arr, "%d", total);
			settextstyle(6, HORIZ_DIR, 0);
			outtextxy(680, 560, arr);
			readimagefile("QS.jpg", 680, 450, 780, 500);
		}
		else
		{

			cout << "wrong";
			delay(500);
		}
	}


	getch();
	return;
}

#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void main(void) {
    int gdriver = DETECT, gmode;
    int left = 100, top = 100, right = 300, bottom = 200;
    int leftT = 200, topT = 150;
    clrscr();
    
    initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
    rectangle(left, top, right, bottom);
    outtextxy(leftT, topT, "Hello...");
    getch();
    closegraph();
}
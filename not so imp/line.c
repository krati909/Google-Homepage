#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void main(void) {
    int gdriver = DETECT, gmode;
    int x1 = 200, y1 = 200;
    int x2 = 300, y2 = 300;
    int x= 300,y=150,radius=50;
    clrscr();
    
    initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
    line(x1, y1, x2, y2);
    circle(x, y, radius);
    getch();
    closegraph();
}
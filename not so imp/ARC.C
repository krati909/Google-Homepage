#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void main(void) {
    int gdriver = DETECT, gmode;
    int x1 = 100, y1 = 100;
    int x_rad = 100, y_rad = 50,e_end=360;
    int x= 300,y=150,radius=50;
    int start=0,end=120;
    clrscr();
    
    initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
    arc(x1,y1,start,end,radius);  
    ellipse(x, y ,start,e_end ,x_rad, y_rad);
    getch();
    closegraph();
}
#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void main(void) {
    int gdriver = DETECT, gmode;
    clrscr();
    
    initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
    setlinestyle(SOLID_LINE,0,2);

    line(100,421,100,60);
    line(100,421,600,421);
    line(90,70,100,60);
    line(110,70,100,60);
    line(590,411,600,421);
    line(590,431,600,421);

    outtextxy(95,35,"Y");
    outtextxy(610,421,"X");
    outtextxy(85,415,"O");

    setfillstyle(LINE_FILL,MAGENTA);
    bar(150,300,200,420);

    setfillstyle(HATCH_FILL,RED);
    bar(225,150,275,420);

    setfillstyle(WIDE_DOT_FILL,GREEN);
    bar(300,100,350,420);

    setfillstyle(INTERLEAVE_FILL,BLUE);
    bar(375,125,425,420);

    setfillstyle(XHATCH_FILL,BROWN);
    bar(450,175,500,420);
    getch();
    closegraph();
}
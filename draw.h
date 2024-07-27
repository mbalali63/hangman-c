#ifndef DRAW_H
#define DRAW_H

#include <stdio.h>
#include <math.h>


struct Point {
    int x;
    int y;
};
struct Direction {
    int x;
    int y;
};

int clearScreen()
{
    printf("\x1b[1J");
    printf("\x1b[0J");
}
int setCursorDown()
{
    printf("\x1b[%d;%dH",100,0);
}
int drawLine(struct Point p0, struct Direction d0, int len0,char symbol)
{
    int i;
    int x,y;
    // printf("\x1b[1J");
    // printf("\x1b[0J");
    x = p0.x;
    y = p0.y;    
    for(i=0;i<=len0;i++)
    {        
        printf("\x1b[%d;%dH%c",y,x,symbol);
        x += d0.x;
        y += d0.y;
    }

    // printf("\x1b[%d;%dH",100,0);

    return 0;
}

int drawRect(struct Point p0, int xlen,int ylen,char symbol)
{
    int i;
    int x,y;
    struct Direction d0;
    struct Point p1;


    p1.x = p0.x;p1.y=p0.y;
    d0.x = 1;d0.y = 0;
    drawLine(p1,d0,xlen,symbol);
    p1.x = p0.x + xlen ;p1.y=p0.y;
    d0.x = 0;d0.y = 1;
    drawLine(p1,d0,ylen,symbol);
    p1.x = p0.x + xlen ;p1.y=p0.y + ylen;
    d0.x = -1;d0.y = 0;
    drawLine(p1,d0,xlen,symbol);
    p1.x = p0.x ;p1.y=p0.y + ylen;
    d0.x = 0;d0.y = -1;
    drawLine(p1,d0,ylen,symbol);


    return 0;
}

int drawCircle(struct Point p0,int radii,char symbol)
{
    float t,dt;
    int numOfPoints;
    int x0,y0;
    int x,y;
    x0 = p0.x;
    y0 = p0.y;
    t = 0;
    numOfPoints = 30;
    dt = 2 * M_PI / numOfPoints;
    for (int i=0;i<numOfPoints;i++)
    {
        t += dt;
        x = (int)floor(radii * cos(t)) + x0;
        y = (int)floor(radii * sin(t)) + y0;
        printf("\x1b[%d;%dH%c",y,x,symbol);
    }
    return 0;
}

int drawAngle(struct Point p0,struct Direction d0,int len0,struct Direction d1,int len1,char symbol)
{
    drawLine(p0, d0, len0,symbol);
    drawLine(p0, d1, len1,symbol);
    return 0;
}


int drawMan(struct Point headCenter, int headRadii, int neckHeight, struct Direction leftHandDir,struct Direction rightHandDir,int bodyHeight,struct Direction leftLegDir,struct Direction rightLegDir,char symbol)
{
    struct Point p1;
    struct Direction d1;
    drawCircle(headCenter,headRadii,symbol);
    p1.x = headCenter.x;p1.y = headCenter.y + headRadii;
    d1.x = 0; d1.y = 1;
    drawLine(p1,d1,neckHeight,symbol);
    p1.x = headCenter.x;p1.y += neckHeight;
    drawAngle(p1,leftHandDir,bodyHeight,rightHandDir,bodyHeight,symbol);
    d1.x = 0; d1.y = 1;
    drawLine(p1,d1,bodyHeight,symbol);
    p1.x = headCenter.x;p1.y += bodyHeight;
    drawAngle(p1,leftLegDir,bodyHeight,rightLegDir,bodyHeight,symbol);
    return 0;
}

int drawCrab(struct Point headCenter,int headRadii, int legLength,char symbol)
{
    struct Point p1;
    struct Direction d1;
    drawCircle(headCenter,headRadii,symbol);
    p1.x = headCenter.x - headRadii;p1.y = headCenter.y;
    d1.x = -1; d1.y = 1;
    drawLine(p1,d1,legLength,symbol);
    p1.x -= legLength;p1.y += 1;
    d1.x = -1; d1.y = 1;
    drawLine(p1,d1,legLength,symbol);

    p1.x = headCenter.x + headRadii;p1.y = headCenter.y;
    d1.x = 1; d1.y = 1;
    drawLine(p1,d1,legLength,symbol);
    p1.x += legLength;p1.y += 1;
    d1.x = 1; d1.y = 1;
    drawLine(p1,d1,legLength,symbol);
    p1.x = headCenter.x;p1.y = headCenter.y - 1;
    d1.x = -1;d1.y = 0;
    drawLine(p1,d1,1,'.');
    d1.x = 1;d1.y = 0;
    drawLine(p1,d1,1,'.');
    return 0;
}



#endif
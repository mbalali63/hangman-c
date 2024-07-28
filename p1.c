#include <stdio.h>
#include "draw.h"
#include "drawAlpha.h"

int drawGallows();
int drawCharBoxes(struct Point p,int num,int xlen,int ylen,int space);
int main() 
{
    struct Point p0,p1;
    clearScreen();
    // drawGallows();
    p0.x = 70; p0.y = 10;
    // drawCharBoxes(p0,5,20,10,5);
    // draw_X();
    // p0.x = 10;p0.y=10;
    // p1.x = 15;p1.y= 30;

    // drawLine2(p0,p1,'.');
   
    // drawAcr(p0, 5,0, 0.5*3.1415,'.');
    readACAData();
   
    setCursorDown();
    return 0;
}

int drawCharBoxes(struct Point p,int num,int xlen,int ylen,int space)
{
    int i;
    struct Point p0;

    p0.x = p.x; p0.y =p.y;

    for (i=0;i<num;i++)
    {
        drawRect(p0,xlen,ylen,'.');
        p0.x += xlen + space;
    }
    return 0;
}

int drawGallows()
{
    struct Direction d0;
    struct Point p0;
    struct Point BaseLeft;
    BaseLeft.x = 3;
    BaseLeft.y = 30;
    int BaseLen = 30;
    struct Point VerLineDown;
    VerLineDown.x = 20;
    VerLineDown.y = BaseLeft.y;
    int VerLineLen = 30;
    int TopLineLen = 20;
    int ropeLen = 5;
    int headRadii = 2;
    struct Point headCenter;
    headCenter.x = VerLineDown.x + TopLineLen;
    headCenter.y = ropeLen + headRadii;
    int neckHeight = 2;
    int bodyHeight = 4;
    struct Direction leftHandDir;
    leftHandDir.x = -1;
    leftHandDir.y = 1;
    struct Direction rightHandDir;
    rightHandDir.x = 1;
    rightHandDir.y = 1;
    struct Direction leftLegDir;
    leftLegDir.x = -1;
    leftLegDir.y = 1;
    struct Direction rightLegDir;
    rightLegDir.x = 1;
    rightLegDir.y = 1;
    
    d0.x = 1; d0.y = 0;
    drawLine(BaseLeft,d0,BaseLen,'.');
    d0.x = 0; d0.y = -1;
    drawLine(VerLineDown,d0,VerLineLen,'.');
    d0.x = 1; d0.y = 0;
    p0.x = VerLineDown.x;
    p0.y = 0;
    drawLine(p0,d0,TopLineLen,'.');
    p0.x = VerLineDown.x + TopLineLen;
    p0.y = 0;
    d0.x = 0; d0.y = 1;
    drawLine(p0,d0,ropeLen,'.');
    drawMan(headCenter,headRadii,neckHeight,leftHandDir,rightHandDir,bodyHeight,leftLegDir,rightLegDir,'.');



}

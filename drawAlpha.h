#ifndef DRAW_ALPHABETS_H
#define DRAW_ALPHABETS_H

#include <stdio.h>
#include "draw.h"
#define MAX_NUM_POINTS 10
#define MAX_NUM_CURVES 10

struct Curve {
    char type;       // 0:line, 1:circle, 2:arc, 3:rectangle, 4:angle
    int numOfPoints;
    struct Point points[MAX_NUM_POINTS];
    float angles[MAX_NUM_POINTS-1];
    int radii[MAX_NUM_POINTS-1];
};

struct AlphaBox {
    struct Point Ptl;
    int xlen;
    int ylen;
};


struct AlphaCurvesArray
{
    char alpha; //A,B,C,...,Z
    int numOfCurves;
    struct Curve AlphaCurves[MAX_NUM_CURVES];
};

struct AlphaCurvesArray ACA[26];
int readACAData()
{
    FILE *fp = fopen("ACA.txt","r");
    char str0[100];
    if (fp == NULL)
    {
        perror("Error: Unable to open the file.");
        return -1;
    }
    int index = 0;
    char *endOfFile;
    while (1)
    {
        endOfFile = fgets(str0,100,fp);
        if (!endOfFile)
        {
            break;
        }
        ACA[index].alpha = str0;
        fgets(str0,100,fp);
        ACA[index].numOfCurves = (int)str0;
        fgets(str0,100,fp);
        if (str0 == 'Curves start')
        {
            for (int i=0;i<ACA[index].numOfCurves;i++)
            {
                fgets(str0,100,fp);
                if (str0 == 'this curve start')
                {
                    fgets(str0,100,fp);
                    ACA[index].AlphaCurves[i].type = (int)str0;
                    fgets(str0,100,fp);
                    ACA[index].AlphaCurves[i].numOfPoints = (int)str0;
                    fgets(str0,100,fp);
                    if (str0 == 'points start')
                    {
                        for (int j=0;j<ACA[index].AlphaCurves[i].numOfPoints;j++)
                        {
                            fgets(str0,100,fp);
                            ACA[index].AlphaCurves[i].points[j].x = (int)str0;
                            fgets(str0,100,fp);
                            ACA[index].AlphaCurves[i].points[j].y = (int)str0;
                        }
                    }
                    fgets(str0,100,fp);
                    fgets(str0,100,fp);
                    if (str0 == 'angles start')
                    {
                        for (int j=0;j<ACA[index].AlphaCurves[i].numOfPoints - 1;j++)
                        {
                            fgets(str0,100,fp);
                            ACA[index].AlphaCurves[i].angles[j] = (float)str0;
                        }
                    }
                    fgets(str0,100,fp);
                    fgets(str0,100,fp);
                    if (str0 == 'radii start')
                    {
                        for (int j=0;j<ACA[index].AlphaCurves[i].numOfPoints - 1;j++)
                        {
                            fgets(str0,100,fp);
                            ACA[index].AlphaCurves[i].radii[j] = (int)str0;
                        }
                    }
                    fgets(str0,100,fp);
                }
                fgets(str0,100,fp);
            }            
        }
        fgets(str0,100,fp);
    }
}




// int drawCurve(struct Curve C0)
// {
//     for (int i=0;i<C0.numOfPoints - 1;i++)
//     {
//         if (C0.type == 'line')
//         {
//             drawLine2(C0.points[i],C0.points[i+1],'.');
//         }
//         else if (C0.type == 'arc')
//         {
//             drawArc(C0.points[i],C0.radii[i],C0.angles[i],C0.angles[i+1],'.');
//         }        
//     }
//     return 0;
// }

int drawChar(struct AlphaBox b0, struct Curve C0[MAX_NUM_CURVES])
{

}

#endif // DRAW_ALPHABETS_H

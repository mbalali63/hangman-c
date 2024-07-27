#ifndef DRAW_ALPHABETS_H
#define DRAW_ALPHABETS_H

#include "draw.h"

// Function to draw the letter 'A'
int draw_A() {
    struct Point pHead, p1;
    struct Direction d0, d1, d2;
    pHead.x = 15; pHead.y = 10;
    d0.x = -1; d0.y = 1;
    d1.x = 1; d1.y = 1;
    d2.x = 1; d2.y = 0;
    p1.x = pHead.x - 5; p1.y = pHead.y + 5;
    drawAngle(pHead, d0, 10, d1, 10, '.');
    drawLine(p1, d2, 10, '.');
    return 0;
}

// Function to draw the letter 'B'
int draw_B() {
    struct Point pHead, p1;
    struct Direction d0, d1;
    pHead.x = 15; pHead.y = 10;
    d0.x = 0; d0.y = 1;
    drawLine(pHead, d0, 20, '.');
    p1.x = pHead.x; p1.y = pHead.y;
    d1.x = 1; d1.y = 1;
    drawLine(p1, d1, 10, '.');
    p1.y = pHead.y - 10;
    drawLine(p1, d1, 10, '.');
    return 0;
}

// Function to draw the letter 'C'
int draw_C() {
    struct Point pHead, p1;
    struct Direction d0, d1;
    pHead.x = 15; pHead.y = 10;
    d0.x = 1; d0.y = 0;
    drawLine(pHead, d0, 10, '.');
    d1.x = 0; d1.y = 1;
    p1.x = pHead.x; p1.y = pHead.y - 10;
    drawLine(p1, d1, 10, '.');
    p1.x = pHead.x - 10; p1.y = pHead.y;
    drawLine(p1, d1, 10, '.');
    return 0;
}

// Function to draw the letter 'D'
int draw_D() {
    struct Point pHead, p1;
    struct Direction d0, d1;
    pHead.x = 15; pHead.y = 10;
    d0.x = 0; d0.y = 1;
    drawLine(pHead, d0, 20, '.');
    p1.x = pHead.x; p1.y = pHead.y + 20;
    d1.x = 1; d1.y = 0;
    drawLine(p1, d1, 10, '.');
    p1.y = pHead.y - 20;
    drawLine(p1, d1, 10, '.');
    return 0;
}

// Function to draw the letter 'E'
int draw_E() {
    struct Point pHead, p1;
    struct Direction d0;
    pHead.x = 15; pHead.y = 10;
    d0.x = 1; d0.y = 0;
    drawLine(pHead, d0, 10, '.');
    d0.y = 1;
    p1.x = pHead.x; p1.y = pHead.y;
    drawLine(p1, d0, 20, '.');
    p1.x = pHead.x; p1.y = pHead.y + 10;
    drawLine(p1, d0, 7, '.');
    p1.x = pHead.x; p1.y = pHead.y + 20;
    drawLine(p1, d0, 10, '.');
    return 0;
}

// Function to draw the letter 'F'
int draw_F() {
    struct Point pHead, p1;
    struct Direction d0;
    pHead.x = 15; pHead.y = 10;
    d0.x = 1; d0.y = 0;
    drawLine(pHead, d0, 10, '.');
    d0.y = 1;
    p1.x = pHead.x; p1.y = pHead.y;
    drawLine(p1, d0, 20, '.');
    p1.x = pHead.x; p1.y = pHead.y + 10;
    drawLine(p1, d0, 7, '.');
    return 0;
}

// Function to draw the letter 'G'
int draw_G() {
    struct Point pHead, p1;
    struct Direction d0, d1;
    pHead.x = 15; pHead.y = 10;
    d0.x = 1; d0.y = 0;
    drawLine(pHead, d0, 10, '.');
    d1.x = 0; d1.y = 1;
    p1.x = pHead.x; p1.y = pHead.y - 10;
    drawLine(p1, d1, 10, '.');
    p1.x = pHead.x - 10; p1.y = pHead.y;
    drawLine(p1, d1, 10, '.');
    p1.x = pHead.x - 10; p1.y = pHead.y + 10;
    d0.x = 0; d0.y = -1;
    drawLine(p1, d0, 10, '.');
    return 0;
}

// Function to draw the letter 'H'
int draw_H() {
    struct Point pHead, p1;
    struct Direction d0;
    pHead.x = 15; pHead.y = 10;
    d0.x = 0; d0.y = 1;
    drawLine(pHead, d0, 20, '.');
    p1.x = pHead.x + 10; p1.y = pHead.y;
    drawLine(p1, d0, 20, '.');
    d0.x = 1; d0.y = 0;
    p1.x = pHead.x; p1.y = pHead.y + 10;
    drawLine(p1, d0, 10, '.');
    return 0;
}

// Function to draw the letter 'I'
int draw_I() {
    struct Point pHead, p1;
    struct Direction d0;
    pHead.x = 15; pHead.y = 10;
    d0.x = 0; d0.y = 1;
    drawLine(pHead, d0, 20, '.');
    p1.x = pHead.x - 5; p1.y = pHead.y;
    d0.x = 1; d0.y = 0;
    drawLine(p1, d0, 10, '.');
    return 0;
}

// Function to draw the letter 'J'
int draw_J() {
    struct Point pHead, p1;
    struct Direction d0, d1;
    pHead.x = 15; pHead.y = 10;
    d0.x = 0; d0.y = 1;
    drawLine(pHead, d0, 20, '.');
    p1.x = pHead.x - 5; p1.y = pHead.y - 20;
    d0.x = 1; d0.y = 0;
    drawLine(p1, d0, 10, '.');
    p1.x = pHead.x + 5; p1.y = pHead.y - 10;
    d0.x = 0; d0.y = -1;
    drawLine(p1, d0, 10, '.');
    return 0;
}

// Function to draw the letter 'K'
int draw_K() {
    struct Point pHead, p1;
    struct Direction d0, d1, d2;
    pHead.x = 15; pHead.y = 10;
    d0.x = 0; d0.y = 1;
    drawLine(pHead, d0, 20, '.');
    d1.x = 1; d1.y = -1;
    p1.x = pHead.x; p1.y = pHead.y + 10;
    drawLine(p1, d1, 10, '.');
    d2.x = 1; d2.y = 1;
    p1.x = pHead.x; p1.y = pHead.y - 10;
    drawLine(p1, d2, 10, '.');
    return 0;
}

// Function to draw the letter 'L'
int draw_L() {
    struct Point pHead, p1;
    struct Direction d0;
    pHead.x = 15; pHead.y = 10;
    d0.x = 0; d0.y = 1;
    drawLine(pHead, d0, 20, '.');
    p1.x = pHead.x; p1.y = pHead.y - 20;
    d0.x = 1; d0.y = 0;
    drawLine(p1, d0, 10, '.');
    return 0;
}

// Function to draw the letter 'M'
int draw_M() {
    struct Point pHead, p1;
    struct Direction d0, d1;
    pHead.x = 15; pHead.y = 10;
    d0.x = 0; d0.y = 1;
    drawLine(pHead, d0, 20, '.');
    d1.x = 1; d1.y = -1;
    p1.x = pHead.x; p1.y = pHead.y;
    drawLine(p1, d1, 10, '.');
    p1.x = pHead.x + 10; p1.y = pHead.y - 10;
    d1.x = 1; d1.y = 1;
    drawLine(p1, d1, 10, '.');
    p1.x = pHead.x + 20; p1.y = pHead.y;
    drawLine(p1, d1, 10, '.');
    return 0;
}

// Function to draw the letter 'N'
int draw_N() {
    struct Point pHead, p1;
    struct Direction d0, d1;
    pHead.x = 15; pHead.y = 10;
    d0.x = 0; d0.y = 1;
    drawLine(pHead, d0, 20, '.');
    d1.x = 1; d1.y = 1;
    p1.x = pHead.x; p1.y = pHead.y;
    drawLine(p1, d1, 20, '.');
    p1.x = pHead.x + 20; p1.y = pHead.y;
    d0.x = 0; d0.y = -1;
    drawLine(p1, d0, 20, '.');
    return 0;
}

// Function to draw the letter 'O'
int draw_O() {
    struct Point pHead, p1;
    struct Direction d0;
    pHead.x = 15; pHead.y = 10;
    d0.x = 1; d0.y = 0;
    drawCircle(pHead, 10, '.');
    return 0;
}

// Function to draw the letter 'P'
int draw_P() {
    struct Point pHead, p1;
    struct Direction d0, d1;
    pHead.x = 15; pHead.y = 10;
    d0.x = 0; d0.y = 1;
    drawLine(pHead, d0, 20, '.');
    d1.x = 1; d1.y = 1;
    p1.x = pHead.x; p1.y = pHead.y;
    drawLine(p1, d1, 10, '.');
    p1.y = pHead.y - 10;
    drawLine(p1, d1, 10, '.');
    return 0;
}

// Function to draw the letter 'Q'
int draw_Q() {
    struct Point pHead, p1;
    struct Direction d0;
    pHead.x = 15; pHead.y = 10;
    d0.x = 1; d0.y = 0;
    drawCircle(pHead, 10, '.');
    p1.x = pHead.x + 7; p1.y = pHead.y - 7;
    d0.x = 1; d0.y = 1;
    drawLine(p1, d0, 5, '.');
    return 0;
}

// Function to draw the letter 'R'
int draw_R() {
    struct Point pHead, p1;
    struct Direction d0, d1;
    pHead.x = 15; pHead.y = 10;
    d0.x = 0; d0.y = 1;
    drawLine(pHead, d0, 20, '.');
    d1.x = 1; d1.y = 1;
    p1.x = pHead.x; p1.y = pHead.y;
    drawLine(p1, d1, 10, '.');
    p1.y = pHead.y - 10;
    drawLine(p1, d1, 10, '.');
    d0.x = 1; d0.y = -1;
    p1.x = pHead.x; p1.y = pHead.y;
    drawLine(p1, d0, 10, '.');
    return 0;
}

// Function to draw the letter 'S'
int draw_S() {
    struct Point pHead, p1;
    struct Direction d0;
    pHead.x = 15; pHead.y = 10;
    d0.x = 1; d0.y = 0;
    p1.x = pHead.x; p1.y = pHead.y;
    drawLine(p1, d0, 10, '.');
    d0.x = 0; d0.y = 1;
    p1.x = pHead.x + 10; p1.y = pHead.y;
    drawLine(p1, d0, 10, '.');
    p1.x = pHead.x; p1.y = pHead.y - 10;
    drawLine(p1, d0, 10, '.');
    p1.x = pHead.x; p1.y = pHead.y - 10;
    drawLine(p1, d0, 10, '.');
    return 0;
}

// Function to draw the letter 'T'
int draw_T() {
    struct Point pHead, p1;
    struct Direction d0;
    pHead.x = 15; pHead.y = 10;
    d0.x = 1; d0.y = 0;
    drawLine(pHead, d0, 10, '.');
    d0.x = 0; d0.y = 1;
    p1.x = pHead.x + 5; p1.y = pHead.y;
    drawLine(p1, d0, 20, '.');
    return 0;
}

// Function to draw the letter 'U'
int draw_U() {
    struct Point pHead, p1;
    struct Direction d0, d1;
    pHead.x = 15; pHead.y = 10;
    d0.x = 0; d0.y = 1;
    drawLine(pHead, d0, 20, '.');
    p1.x = pHead.x; p1.y = pHead.y;
    d1.x = 1; d1.y = 0;
    drawLine(p1, d1, 10, '.');
    p1.x = pHead.x + 10; p1.y = pHead.y;
    d0.x = 0; d0.y = -1;
    drawLine(p1, d0, 20, '.');
    return 0;
}

// Function to draw the letter 'V'
int draw_V() {
    struct Point pHead, p1;
    struct Direction d0, d1;
    pHead.x = 15; pHead.y = 10;
    d0.x = -1; d0.y = 1;
    p1.x = pHead.x; p1.y = pHead.y;
    drawLine(p1, d0, 10, '.');
    d1.x = 1; d1.y = 1;
    p1.x = pHead.x + 10; p1.y = pHead.y;
    drawLine(p1, d1, 10, '.');
    return 0;
}

// Function to draw the letter 'W'
int draw_W() {
    struct Point pHead, p1;
    struct Direction d0, d1;
    pHead.x = 15; pHead.y = 10;
    d0.x = 0; d0.y = 1;
    drawLine(pHead, d0, 20, '.');
    d1.x = 1; d1.y = -1;
    p1.x = pHead.x; p1.y = pHead.y;
    drawLine(p1, d1, 10, '.');
    p1.x = pHead.x + 10; p1.y = pHead.y + 10;
    drawLine(p1, d1, 10, '.');
    p1.x = pHead.x + 20; p1.y = pHead.y;
    d1.x = -1; d1.y = 1;
    drawLine(p1, d1, 10, '.');
    return 0;
}

// Function to draw the letter 'X'
int draw_X() {
    struct Point pHead, p1;
    struct Direction d0, d1;
    pHead.x = 15; pHead.y = 10;
    d0.x = -1; d0.y = 1;
    drawLine(pHead, d0, 10, '.');
    d1.x = 1; d1.y = -1;
    p1.x = pHead.x + 10; p1.y = pHead.y;
    drawLine(p1, d1, 10, '.');
    return 0;
}

// Function to draw the letter 'Y'
int draw_Y() {
    struct Point pHead, p1;
    struct Direction d0, d1;
    pHead.x = 15; pHead.y = 10;
    d0.x = -1; d0.y = 1;
    drawLine(pHead, d0, 10, '.');
    d1.x = 1; d1.y = 1;
    p1.x = pHead.x + 10; p1.y = pHead.y;
    drawLine(p1, d1, 10, '.');
    d0.x = 0; d0.y = 1;
    p1.x = pHead.x + 5; p1.y = pHead.y;
    drawLine(p1, d0, 20, '.');
    return 0;
}

// Function to draw the letter 'Z'
int draw_Z() {
    struct Point pHead, p1;
    struct Direction d0, d1;
    pHead.x = 15; pHead.y = 10;
    d0.x = 1; d0.y = 0;
    drawLine(pHead, d0, 10, '.');
    d1.x = -1; d1.y = 1;
    p1.x = pHead.x + 10; p1.y = pHead.y;
    drawLine(p1, d1, 10, '.');
    p1.x = pHead.x; p1.y = pHead.y - 10;
    drawLine(p1, d0, 10, '.');
    return 0;
}

#endif // DRAW_ALPHABETS_H

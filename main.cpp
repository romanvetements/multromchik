#include "TXLib.h"

void drawSky()
{
    //–исую небо
    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);
    txRectangle (0, 0, 800, 600);
}

void drawLand()
{
void drawMan(int x, int xLegs, int xHands)


    //–сую землю
    txSetColor (TX_BLACK);
    txSetFillColor (TX_GREEN);
    txRectangle (0, 388, 800, 600);

}

void drawHome()
{

    //–сую дом
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BROWN);
    txRectangle (285, 240, 548, 472);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_GREY);
    txRectangle (390, 350, 462, 470);

    //–исую крышу
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT star[3] = {{286,239}, {415,100}, {548,239}};
    txPolygon (star, 3);

}

void drawTree()
{

//–исую дерево
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BROWN);
    txRectangle (116, 413, 140, 529);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_GREEN);
    txEllipse (90, 310, 160, 450);

}

void drawSun(int x)
{

//–исую солнце
    txSetColor (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    txEllipse (x+24-24, 11, x+122-24, 111);

}
{

// рисую мужыка
    txSetColor (TX_BLACK);
    txSetFillColor (RGB(255, 210, 166));
    txCircle (x+660-660, 430, 20); // head
    txSetColor (RGB(255, 210, 166), 7);
    txLine(x, 450, x, 520); //body
    txLine(x, 465, x-35+xHands, 490);  //left arm
    txLine(x, 465, x+30-xHands, 490);   // right arm
    txLine(x, 520, x-20+xLegs, 560);    //left leg
    txLine(x, 520, x+20-xLegs, 560);      //right leg


}

void drawBall(int x)
{
                                // рисую м€ч
  txSetColor (TX_BLACK);
  txSetFillColor (RGB(237, 28, 36));
  txEllipse (x+79-79, 518, x+133-79, 571);

}





int main()
{
txCreateWindow (800, 600);

     int xSun = 24;
     int xMan = 660;
      int xLegs = 0;
      int xHands = 0;
      int xBall = 0;



    while(xMan>0)
    {
        txBegin();
        drawSky();
        drawSun(xSun);
        drawLand();
        drawHome();
        drawTree();
        drawMan(xMan, xLegs, xHands);
        drawBall(xBall);
        txEnd();
        xLegs=xLegs + 10;
        xMan=xMan-5;
        xSun=xSun+5;
        txSleep(5);


        txBegin();
        drawSky();
        drawSun(xSun);
        drawLand();
        drawHome();
        drawTree();
        drawMan(xMan, xLegs, xHands);
        drawBall(xBall);
        txEnd();
        xLegs=xLegs - 10;
        xMan=xMan-5;
        xSun=xSun+5;
        txSleep(5);

    }

    while(xMan<700)
    {
        txBegin();
        drawSky();
        drawSun(xSun);
        drawLand();
        drawHome();
        drawTree();
        drawMan(xMan, xLegs, xHands);
        drawBall(xBall);

        txEnd();
        xLegs=xLegs + 10;
        xMan=xMan+5;
        xSun=xSun-5;
        xBall=xBall+5;
        txSleep(5);


        txBegin();
        drawSky();
        drawSun(xSun);
        drawLand();
        drawHome();
        drawTree();
        drawMan(xMan, xLegs, xHands);
        drawBall(xBall);

        txEnd();
        xLegs=xLegs - 10;
        xMan=xMan+5;
        xSun=xSun-5;
        xBall=xBall+5;

        txSleep(5);

    }

    while(xMan<700)
    {
        txBegin();
        drawSky();
        drawSun(xSun);
        drawLand();
        drawHome();
        drawTree();
        drawMan(xMan, xLegs, xHands);
        drawBall(xBall);

        txEnd();
        xLegs=xLegs + 10;
        xMan=xMan+5;
        xSun=xSun-5;
        xBall=xBall+5;
        txSleep(5);


        txBegin();
        drawSky();
        drawSun(xSun);
        drawLand();
        drawHome();
        drawTree();
        drawMan(xMan, xLegs, xHands);
        drawBall(xBall);

        txEnd();
        xLegs=xLegs - 10;
        xMan=xMan+5;
        xSun=xSun-5;
        xBall=xBall+5;

        txSleep(5);

    }



txTextCursor (false);
return 0;
}

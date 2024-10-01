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

void drawMan(int x)
{

// рисую мужыка
    txSetColor (TX_BLACK);
    txSetFillColor (RGB(255, 210, 166));
    txCircle (x+660-660, 430, 20); // head
    txSetColor (RGB(255, 210, 166), 7);
    txLine(x+660-660, 450, x+660-660, 520); //body
    txLine(x+660-660, 465, x+625-660, 490);  //left arm
    txLine(x+660-660, 465, x+690-660, 490);   // right arm
    txLine(x+660-660, 520, x+640-660, 560);    //left leg
    txLine(x+660-660, 520, x+680-660, 560);      //right leg


}






int main()
{
txCreateWindow (800, 600);

     int xSun = 24;
     int xMan = 660;

    while(xMan>0)
    {
        txBegin();
        drawSky();
        drawSun(xSun);
        drawLand();
        drawHome();
        drawTree();
        drawMan(xMan);
        txEnd();


        xMan=xMan-5;
        xSun=xSun+5;
        txSleep(5);
    }


txTextCursor (false);
return 0;
}

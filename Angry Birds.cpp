#include "TXlib.h"
void DrawLanscape();
void Drawpiniok();
void DrawTree();
void Drawtelo(int x, int y, COLORREF color, int sizeX, int sizeY);
void DrawPtica(int , int y, int wing_rise, COLORREF color, int sizeX, int sizeY);
void Drawcreelo(int x, int y, int wing_rise, int sizeX, int sizeY);
void Drawglaz(int x, int y, int sizeX, int sizeY);
void Drawclyv(int x, int y, int sizeX, int sizeY);

int main()
{


     txCreateWindow       (800,600);

     DrawLanscape();

     DrawTree();

     for (int x=100; x<700; x+=10)
     {

         txClear();

         DrawLanscape();
         DrawTree();
         DrawPtica(x, 300, (x/10)%2, RGB(240,40,40), 2, 2);
         DrawPtica(800-x, 200, (x/10)%2, RGB(40,240,40), -2, 2);



         txSleep(100);


     }

     return 0;
}
     void DrawLanscape()
{

     txSetColor           (RGB (0, 128, 0));
     txRectangle          (0, 600, 800, 400);
     txSetColor           (RGB (80, 80, 128));
     txRectangle          (0, 400, 800, 600);

     txSetFillColor       (RGB (0, 128, 0));
     txRectangle          (0, 600, 800, 400);
     txSetFillColor       (RGB (80, 80, 170));
     txRectangle          (0, 400, 800, 0);

     txSetColor           (RGB (128, 128, 0));
     txRectangle          (300, 600, 500, 400);
     txSetFillColor       (RGB (128, 128, 0));
     txRectangle          (300, 600, 500, 400);
     txSetFillColor       (RGB (0, 0, 220));
     txCircle             (50, 600, 155);
}

     void DrawFirTree ()
{

     txSetFillColor           (RGB(0, 80, 0));
     POINT star[3] = {{595, 450}, {675, 450}, {635, 420}};
     txPolygon (star, 3);  // ß ęđčâŕ˙ çâĺçäî÷ęŕ

}



    void Drawpiniok()
{
     txSetFillColor       (RGB (128, 128, 0));
     txSetColor           (RGB (128, 128, 0));
     txRectangle          (620, 450, 650, 475);
}

void DrawTree()
{

    for (int y=400; y<=450; y+=25)
    {
        txSetFillColor           (RGB(0, 80, 0));
        POINT star[3] = {{595, y}, {675, y}, {635, y-30}};
        txPolygon (star, 3);  // ß ęđčâŕ˙ çâĺçäî÷ęŕ
     }

    Drawpiniok();

}

    void DrawPtica(int x, int y, int wing_rise, COLORREF color, int sizeX, int sizeY)
{
    Drawtelo(x, y, color, sizeX, sizeY);
    Drawglaz(x, y, sizeX, sizeY);
    Drawclyv(x, y, sizeX, sizeY);
    Drawcreelo(x, y, wing_rise, sizeX, sizeY);
}



void Drawglaz(int x, int y, int sizeX, int sizeY)
{


     txSetFillColor       (RGB(250, 250, 250));
     txCircle             (x+ (- 100 + 110) *sizeX, y+ (- 300 + 290) *sizeY, 10*sizeX);

     txSetFillColor       (RGB(100, 250, 100));
     txCircle             (x+ (- 100 + 110) *sizeX, y+ (- 300 + 290) *sizeY, 5*sizeX);
}



void Drawtelo(int x, int y, COLORREF color, int sizeX, int sizeY)
{
     txSetFillColor       (color);
     txCircle             (x , y, 35*sizeX);
}



void Drawcreelo(int x, int y, int wing_rise, int sizeX, int sizeY)
{
     txSetFillColor           (RGB(240, 100, 100));
     POINT star[3] = {{x+ (- 100 + 30) *sizeX, y +(- 300 + 275 ) *sizeY + 15 * wing_rise}, {x+ ( - 100 + 80) *sizeX, y+ ( - 300 + 290) *sizeY}, {x+ ( - 100 + 80) *sizeX, y+ ( - 300 + 325) *sizeY}};
     txPolygon (star, 3);
}



//      void Dawcreelo2(int x, int y)
//{

//     txSetFillColor           (RGB(240,100,100));
 //    POINT star[3] = {{x-100+30,y-300+290}, {x-100+80,y-300+290}, {x-100+80,y-300+325}};
//     txPolygon (star, 3);
//}



void Drawclyv(int x, int y, int sizeX, int sizeY)
{
     txSetFillColor           (RGB(0,80,0));
     POINT star[3] = {{x+ (- 100 + 125) *sizeX, y+( - 300 + 290) *sizeY}, {x+ ( - 100 + 135) *sizeX, y+ ( - 300 + 300) *sizeY}, {x+ ( - 100 + 150) *sizeX, y+ ( - 300 + 295) *sizeY}};
     txPolygon (star, 3);
}

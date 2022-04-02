#include "TXlib.h"
#include <math.h>

struct bird
{
 int x;
 int y;
 int wing_rise;
 int color;
 int sizeX;
 int sizeY;
};
 struct pricel
{
  int x;
  int y;

};


void DrawLanscape();
void Drawpiniok();
void DrawTree();
void Drawtelo(int x, int y, COLORREF color, int sizeX, int sizeY);
void DrawPtica(bird ptica);
void Drawcreelo(int x, int y, int wing_rise, int sizeX, int sizeY);
void Drawglaz(int x, int y, int sizeX, int sizeY);
void Drawclyv(int x, int y, int sizeX, int sizeY);
void Drawstvol(int x, int y);
void Drawkrest(pricel);






int main()
{

 bird ptica1, ptica2;
 pricel krest;

 ptica1.wing_rise= (ptica1.x/10)%2;
 ptica1.color= RGB(40,240,40);
 ptica1.sizeX= 1;
 ptica1.sizeY= 1;
 ptica1.y= random(380,300);

 ptica2.wing_rise= (ptica2.x/10)%2;
 ptica2.color= RGB(240,40,40);
 ptica2.sizeX= -1;
 ptica2.sizeY= 1;
 ptica2.y= random(170,260);



     txCreateWindow (800, 600);



     DrawLanscape();

     DrawTree();

     int t=0;


     while (t<=2000000,(txMouseButtons() != 3))

     {
         txClear();

         krest.x= txMouseX();
         krest.y= txMouseY();


         DrawLanscape();
         DrawTree();

         ptica1.x= 10*t;

         ptica1.wing_rise= (ptica1.x/10)%2;


         ptica2.x= 800 - ptica1.x;

         ptica2.wing_rise= (ptica2.x/10)%2;
        if( abs(ptica1.x - krest.x)<=15 && abs(ptica1.y - krest.y)<=15 && txMouseButtons() & 1)

         {
         ptica1.sizeX=0;
         ptica1.sizeY=0;
         }

if( abs(ptica2.x - krest.x)<=15 && abs(ptica2.y - krest.y)<=15 && txMouseButtons() & 1)

         {
         ptica2.sizeX=0;
         ptica2.sizeY=0;
         }

         DrawPtica(ptica1);
         DrawPtica(ptica2);

         Drawkrest(krest);




         t++;
         txSleep(100);
     }

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

    void DrawPtica(bird ptica)
{
    Drawtelo(ptica.x, ptica.y, ptica.color, ptica.sizeX, ptica.sizeY);
    Drawglaz(ptica.x, ptica.y, ptica.sizeX, ptica.sizeY);
    Drawclyv(ptica.x, ptica.y, ptica.sizeX, ptica.sizeY);
    Drawcreelo(ptica.x, ptica.y, ptica.wing_rise, ptica.sizeX, ptica.sizeY);
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

void Drawclyv(int x, int y, int sizeX, int sizeY)
{
     txSetFillColor           (RGB(0,80,0));
     POINT star[3] = {{x+ (- 100 + 125) *sizeX, y+( - 300 + 290) *sizeY}, {x+ ( - 100 + 135) *sizeX, y+ ( - 300 + 300) *sizeY}, {x+ ( - 100 + 150) *sizeX, y+ ( - 300 + 295) *sizeY}};
     txPolygon (star, 3);
}

void Drawkrest(pricel krest)
{



     txSetFillColor (RGB (89, 89, 112));
     txSetColor (RGB (89, 89, 112));
     txRectangle (krest.x+5, krest.y+35, krest.x-5, krest.y-35);


     txSetFillColor (RGB (89, 89, 112));
     txSetColor (RGB (89, 89, 112));
     txRectangle (krest.x-35,  krest.y-5, krest.x+35,  krest.y+5);


     txSetFillColor (RGB (109, 109, 112));
     txSetColor (RGB (109, 109, 112));
     txCircle (krest.x, krest.y, 10);



}

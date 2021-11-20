#include "TXlib.h"
void DrawLanscape();
void DrawFirTree();
void Drawpiniok();
void DrawTree();
int main()
{


     txCreateWindow       (800,600);

     DrawLanscape();

     DrawTree();




     txSetFillColor       (RGB(0,0,220));
     txCircle             (50,600,155);

     }
void DrawLanscape()
{
     //txSetFillColor       (RGB(0,128,0));
     txSetColor           (RGB(0,128,0));
     txRectangle          (0,600,800,400);
     txSetColor           (RGB(0,0,128));
     txRectangle          (0,400,800,600);

     txSetFillColor       (RGB(0,128,0));
     txRectangle          (0,600,800,400);
     txSetFillColor       (RGB(0,0,170));
     txRectangle          (0,400,800,0);

     txSetColor           (RGB(128,128,0));
     txRectangle          (300,600,500,400);
     txSetFillColor       (RGB(128,128,0));
     txRectangle          (300,600,500,400);
}
void DrawFirTree()
{

     txSetFillColor           (RGB(0,80,0));
     POINT star[3] = {{595,450}, {675,450}, {635,420}};
     txPolygon (star, 3);  // ß ęđčâŕ˙ çâĺçäî÷ęŕ
}

    void Drawpiniok()
    {
     txSetFillColor       (RGB(128,128,0));
     txSetColor           (RGB(128,128,0));
     txRectangle          (620,450,650,475);
    }

    void DrawTree()
    {
    Drawpiniok();
    DrawFirTree();
    }

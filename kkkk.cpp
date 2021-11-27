#include "TXlib.h"
void DrawLanscape();
void DrawFirTree();
void Drawpiniok();
void DrawTree();
void DawPtica(int x, int y);
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
     DawPtica(x, 300);
     txSleep(500);

     }




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
      txSetFillColor       (RGB(0,0,220));
     txCircle             (50,600,155);
}

     void DrawFirTree()
{

     txSetFillColor           (RGB(0,80,0));
     POINT star[3] = {{595,450}, {675,450}, {635,420}};
     txPolygon (star, 3);  // ß ęđčâŕ˙ çâĺçäî÷ęŕ

}

     void DrawFirTree1()
{

     txSetFillColor           (RGB(0,80,0));
     POINT star[3] = {{595,425}, {675,425}, {635,395}};
     txPolygon (star, 3);  // ß ęđčâŕ˙ çâĺçäî÷ęŕ

}


     void DrawFirTree2()
{

     txSetFillColor           (RGB(0,80,0));
     POINT star[3] = {{595,400}, {675,400}, {635,375}};
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
    DrawFirTree2();
    DrawFirTree1();
    Drawpiniok();
    DrawFirTree();
    }

    void DawPtica(int x, int y)
    {



     txSetFillColor       (RGB(100,100,100));
     txCircle             (x,y,35);

     txSetFillColor       (RGB(250,250,250));
     txCircle             (x-100+110,y-300+290,10);

     txSetFillColor       (RGB(100,250,100));
     txCircle             (x-100+110,y-300+290,5);

     txSetFillColor           (RGB(0,80,0));
     POINT star[3] = {{x-100+125,y-300+290}, {x-100+135,y-300+300}, {x-100+150,y-300+295}};
     txPolygon (star, 3);  // ß ęđčâŕ˙ çâĺçäî÷ęŕ
}


#include "TXlib.h"
void DrawLanscape();
void DrawFirTree();
void Drawpiniok();
void DrawTree();
void Dawtelo(int x, int y, COLORREF color);
void DawPtica(int , int y, int wing_rise, COLORREF color);
void Dawcreelo(int x, int y, int wing_rise);
void Dawglaz(int x, int y);
void Dawclyv(int x, int y);
//void Dawcreelo2(int x, int y);
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
     DawPtica(x, 300, (x/10)%2, RGB(240,40,40));
     DawPtica(800-x, 200, (x/10)%2, RGB(40,40,240));

     txSleep(100);


     }

     return 0;
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

    void DawPtica(int x, int y, int wing_rise, COLORREF color)
{
    Dawtelo(x,y, color);
    Dawglaz(x,y);
    Dawclyv(x,y);
    Dawcreelo(x,y,wing_rise);
}



void Dawglaz(int x, int y)
{


     txSetFillColor       (RGB(250,250,250));
     txCircle             (x-100+110,y-300+290,10);

     txSetFillColor       (RGB(100,250,100));
     txCircle             (x-100+110,y-300+290,5);
}



void Dawtelo(int x, int y, COLORREF color)
{
     txSetFillColor       (color);
     txCircle             (x,y,35);
}



void Dawcreelo(int x, int y, int wing_rise)
{
     txSetFillColor           (RGB(240,100,100));
     POINT star[3] = {{x-100+30,y-300+275 + 15*wing_rise}, {x-100+80,y-300+290}, {x-100+80,y-300+325}};
     txPolygon (star, 3);



}

//      void Dawcreelo2(int x, int y)
//{

//     txSetFillColor           (RGB(240,100,100));
 //    POINT star[3] = {{x-100+30,y-300+290}, {x-100+80,y-300+290}, {x-100+80,y-300+325}};
//     txPolygon (star, 3);
//}



  void Dawclyv(int x, int y)
{
     txSetFillColor           (RGB(0,80,0));
     POINT star[3] = {{x-100+125,y-300+290}, {x-100+135,y-300+300}, {x-100+150,y-300+295}};
     txPolygon (star, 3);
}

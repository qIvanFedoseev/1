#include "TXlib.h"
int main()
{
     txCreateWindow       (800,600);


     txSetColor           (RGB(0,128,0));
     txRectangle          (0,600,800,400);
     txSetColor           (RGB(0,0,128));
     txRectangle          (0,400,800,0);

     txSetFillColor       (RGB(0,128,0));
     txRectangle          (0,600,800,400);
     txSetFillColor       (RGB(0,0,170));
     txRectangle          (0,400,800,0);

     txSetColor           (RGB(128,128,0));
     txRectangle          (300,600,500,400);
     txSetFillColor       (RGB(128,128,0));
     txRectangle          (300,600,500,400);

     txSetColor           (RGB(128,128,0));
     txRectangle          (620,450,650,475);
     txSetFillColor           (RGB(0,80,0));
     POINT star[3] = {{595,450}, {675,450}, {635,420}};
     txPolygon (star, 3);  // Я кривая звездочка

     txSetFillColor           (RGB(128,128,0));
     txSetColor           (RGB(128,128,0));
     txRectangle          (690,530,720,555);

     txSetFillColor       (RGB(0,0,220));
     txCircle             (50,600,155);



return 0;
}

/////////////////////////////#include
#include "TXlib.h"
#include <math.h>
/////////////////////////////structs
struct ball
{
int x;
int y;
};
/////////////////////////////void()
void DrawLanscape();
void drawl(ball bal);


/////////////////////////////main()
int main()
{
   ball bal;
   bal.x=100;
   bal.y=100;


   txCreateWindow (800, 600);




/////////////////////////////while()
  while (!txGetAsyncKeyState (VK_ESCAPE))
{
   txClear();


   DrawLanscape();

   drawl(bal);
        if (txGetAsyncKeyState (VK_LEFT))  bal.x= bal.x-10;
        if (txGetAsyncKeyState (VK_RIGHT)) bal.x= bal.x+10;
        if (txGetAsyncKeyState (VK_UP))    bal.y= bal.y-10;
        if (txGetAsyncKeyState (VK_DOWN))  bal.y= bal.y+10;









   txSleep(3);
}
return 0;
}
/////////////////////////////void DrawLanscape()
 void DrawLanscape()
{
     txSetFillColor       (RGB (0, 128, 0));
     txSetColor           (RGB (0, 128, 0));
     txRectangle          (0, 0, 800, 600);
}
/////////////////////////////void drawball()
 void drawl(ball bal)
{
 txSetColor           (RGB (60, 90, 120));
 txCircle             (bal.x, bal.y, 20);
 txSetFillColor           (RGB (60, 90, 120));
 txCircle             (bal.x, bal.y, 20);
}
/////////////////////////////void()
// void
//{
//}
/////////////////////////////void()
// void
//{
//}
/////////////////////////////void()
// void
//{
//}

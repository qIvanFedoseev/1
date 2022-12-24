#include "TXlib.h"
  void PlayBall();
  void DrawLanscape();
          int main()
              {
              txCreateWindow (800, 600);
              DrawLanscape();

              PlayBall();


              }

          void PlayBall()
              {

              int x  = 100, y  = 100;
              int vx = 5,   vy = 7;
              int ax = 0,   ay = 1;
              int dt = 1;


              while (!txGetAsyncKeyState (VK_ESCAPE))
                  {
                  txClear();

                  DrawLanscape();
                  txSetColor           (RGB (0, 1, 0));
                  txSetFillColor       (RGB (0, 1, 0));
                  txCircle (x, y, 20);


                  vx += ax * dt;
                  vy += ay * dt;

                   x += vx * dt;
                   y += vy * dt;

                  if (x > 800) { vx = -vx; x = 800; }
                  if (x <   0) { vx = -vx; x =   0; }
                  if (y > 600) { vy = -vy; y = 600; }
                  if (y <   0) { vy = -vy; y =   0; }

                  if ((y < 200) && (x < 100)) { vy = -vy; vx = -vx;}




                  if (txGetAsyncKeyState (VK_LEFT))  vx--;
                  if (txGetAsyncKeyState (VK_RIGHT)) vx++;
                  if (txGetAsyncKeyState (VK_UP))    vy--;
                  if (txGetAsyncKeyState (VK_DOWN))  vy++;
                  if (txGetAsyncKeyState (VK_SPACE)) vx = vy = 0;



                  txSleep (20);
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

     txSetFillColor       (RGB (0, 0, 220));
     txRectangle          (0, 0, 99, 199);
}


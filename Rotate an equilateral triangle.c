#include <graphics.h>
#include <time.h>
#include <math.h>

#define PI 3.14159265
 
int main()
{
   int i, gd = DETECT, gm;
 
   initgraph(&gd,&gm," ");

   int x1=250,y1=313,x2=200,y2=400,x3=300,y3=400;
   
   int X1=x1,X2=x2,X3=x3,Y1=y1,Y2=y2,Y3=y3;
   
   //checkEquilateral(x1,y1,x2,y2,x3,y3);
   
   //calculating the values of the centroid
   int Cx,Cy;
   Cx = (x1 + x2 + x3)/3;
   Cy = (y1 + y2 + y3)/3;
 
   //shifting origin to centroid
   x1 = x1 - Cx;
   y1 = Cy - y1;
   x2 = x2 - Cx;
   y2 = Cy - y2;
   x3 = x3 - Cx;
   y3 = Cy - y3;
   
 
   for(i = 0 ; i <= 45 ; i++)
   {
      float val = PI/180.0;
      
      line(x1+Cx,Cy-y1,x2+Cx,Cy-y2);
   	  line(x2+Cx,Cy-y2,x3+Cx,Cy-y3);
      line(x3+Cx,Cy-y3,x1+Cx,Cy-y1);
      
      
      x1 = floor((X1-Cx)*cos(i*val) - (Cy-Y1)*sin(i*val));
      y1 = floor((Cy-Y1)*cos(i*val) + (X1-Cx)*sin(i*val));
      
      x2 = floor((X2-Cx)*cos(i*val) - (Cy-Y2)*sin(i*val));
      y2 = floor((Cy-Y2)*cos(i*val) + (X2-Cx)*sin(i*val));
      
      x3 = floor((X3-Cx)*cos(i*val) - (Cy-Y3)*sin(i*val));
      y3 = floor((Cy-Y3)*cos(i*val) + (X3-Cx)*sin(i*val));
      
      delay(100);
 
     cleardevice();
   }

   closegraph();
   
   return 0;
}

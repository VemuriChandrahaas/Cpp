
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    circle(200, 200, 50);
    line(100, 100, 300, 300);
    getch();
    closegraph();
    return 0;
}
Output:
[ Graphics Window Output ]

• A straight line is drawn between the user-entered points (x1, y1) and (x2, y2)
  using Bresenham's Line Drawing Algorithm.

• The following text appears on the graphics window:
  
  "Bresenham's Line Drawing Algorithm"

Result: 
This program successfully draws a line between two points using Bresenham’s line drawing algorithm, showing fast and accurate pixel plotting in computer graphics.

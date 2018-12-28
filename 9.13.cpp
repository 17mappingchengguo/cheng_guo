#include "Rectangle.h"

int main()
{
   Point point1( 12.0, 12.0 );
   Point point2( 18.0, 12.0 );
   Point point3( 18.0, 20.0 );
   Point point4( 12.0, 20.0 );
   Rectangle rectangle( point1, point2, point3, point4, '?', '*' );
   rectangle.draw();
}

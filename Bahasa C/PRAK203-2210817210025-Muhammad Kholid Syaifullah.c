#include <stdio.h>

int main (void)
{
    float a, b, i, j, x, y, hasil ;
    scanf ("%f", &a),
    scanf ("%f", &b),
    scanf ("%f", &i),
    scanf ("%f", &j),
    scanf ("%f", &x),
    scanf ("%f", &y);
    hasil = (a - b) * (i / j) - (x + y);
    printf ("%.3f", hasil);
    return 0;
}

#include <stdio.h>
#include <math.h>

int main (void)
{
    int a, b, al, t, kel, l ;
    scanf ("%d", &a);
    scanf ("%d", &b);
    al = sqrt((b * b) - (a * a));
    t = a ;
    kel = a + b + al ;
    l = al * t / 2 ;
    printf ("\nAlas = %d cm", al);
    printf ("\nTinggi = %d cm", t);
    printf ("\nKeliling = %d cm", kel);
    printf ("\nLuas = %d cm^2", l);
    return 0;
}

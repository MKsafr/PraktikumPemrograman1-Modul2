#include <stdio.h>
#include <math.h>

int main (void)
{
    float phi, vol, luas, kel ;
    int jari, tinggi ;
    phi = 3.141592 ;
    scanf ("%d", &jari);
    scanf ("%d", &tinggi);
    vol = phi * (jari * jari) * tinggi ;
    luas = 2 * phi * jari * (jari + tinggi) ;
    kel = 2 * phi * jari ;
    printf ("\nVolume = %.2f", round(vol));
    printf ("\nLuas = %.2f", round(luas));
    printf ("\nKeliling = %.2f", round(kel));
    return 0 ;
}

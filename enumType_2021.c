#include <stdio.h>
#include <stdlib.h>

int main()
{
    // l�trehozok egy uj Company nev� datatype-ot, ami ezeket veheti fel csak:
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    // l�trehozok 3 ilyen enum Company t�pus� v�ltoz�t, �s inicializ�lom �ket
    enum Company mycomp1 = XEROX;
    enum Company mycomp2 = GOOGLE;
    enum Company mycomp3 = EBAY;
    //kiirni az �rt�k�ket. kb mint python lista
    printf("1. ertek: %d \n",mycomp1);
    printf("2. ertek: %d \n",mycomp2);
    printf("3. ertek: %d \n",mycomp3);
    return 0;
}

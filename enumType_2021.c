#include <stdio.h>
#include <stdlib.h>

int main()
{
    // létrehozok egy uj Company nevû datatype-ot, ami ezeket veheti fel csak:
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    // létrehozok 3 ilyen enum Company típusú változót, és inicializálom õket
    enum Company mycomp1 = XEROX;
    enum Company mycomp2 = GOOGLE;
    enum Company mycomp3 = EBAY;
    //kiirni az értéküket. kb mint python lista
    printf("1. ertek: %d \n",mycomp1);
    printf("2. ertek: %d \n",mycomp2);
    printf("3. ertek: %d \n",mycomp3);
    return 0;
}

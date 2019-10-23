#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };
    enum company var1, var2, var3;
    var1 = XEROX;
    var2 = GOOGLE;
    var3 = EBAY;

    printf("%d\n%d\n%d\n", var1, var2, var3);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "taux.h"
int main()
{
float taux;
taux=TPE("fileuser.txt");
printf("le taux de participation des electeur est :%f ",taux);
return 0;
}

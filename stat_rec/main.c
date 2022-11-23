#include "reclamation.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

rec_liste *liste=(rec_liste *)malloc(sizeof(rec_liste));
nbreclamation(liste,"reclamation.txt","statist.txt");
    return 0;
}

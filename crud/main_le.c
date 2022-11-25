#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "le.h"
int main()
{
  l_elec l1= {"ahmed","issa","militaire",12345,"11425875",9,10,2012};
  l_elec l2={"nour","garra","hotesse",23345,"15248729",6,12,2017},l3;
    int x=ajouter(l1,"l_elec.txt");

    if(x==1)
        printf("\najout de liste avec succés");
    else printf("\nechec ajout");

   x=modifier(12345,l2,"l_nouv.txt");
   
    if(x==1)
        printf("\nModification de liste avec succés");
    else printf("\nechec Modification");
    
    
    /*x=supprimer("l_elec.txt",23345);
    if(x==1)
        printf("\nSuppression de liste  avec succés");
    else printf("\nechec Suppression");*/
    
    
    l1=chercher("l_elec.txt",12345);
    if(l1.Id_l==-1)
        printf("introuvable");
        else printf("\nl'id existant");
            return 0;
}

#include "reclamation.h"
#include<stdio.h>
#include<string.h>
int main()
{
reclamation rec ;
reclamation rec1 = {333,111,2222,"urgent","gestion"} ;
reclamation rec2 = {783,151,8888,"urgent","reclamation"} ;
reclamation rec4 = {1010,8989,6666,"aaaaaa","oooooo"} ;
int x= ajouter (rec4,"reclamation.txt");
    
    if(x==1)
        printf("\n ajout de point avec succes");
    else printf("\n echec ajout");
    
   x= modifier (333,rec2,"reclamation.txt");

    if(x==1)
        printf("\n Modification de reclamation avec succes");
    else printf("\n echec Modification");

    x= supprimer (333,"reclamation.txt");
    if(x==1)
        printf("\nSuppression de reclamation avec succes");
    else printf("\n echec Suppression");
   reclamation rec3=chercher(111,"reclamation.txt");
    if(rec3.id_rec==-1)
        printf("\nintrouvable");
else printf("\n%d",rec3.id_rec);

    return 0;
}

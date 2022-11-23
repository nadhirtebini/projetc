#include "reclamation.h"
#include<stdio.h>

void nbreclamation(rec_liste *liste, char * fichierreclamation, char * listeelectorale)
{
    
    int tab[100];
    int i;
    i=0;
l_elec l;
    FILE * f=fopen(listeelectorale, "r");
    FILE * f2 =fopen(fichierreclamation, "r");
    while(fscanf(f,"%s %s %s %d %s %d %d %d \n",l.nom_l,l.prenom_l,l.prof_l,&l.Id_lc,l.CIN_l,&l.Date_l.jour_rec,&l.Date_l.mois_rec,&l.Date_l.annee_rec)!=EOF)

        {
            tab[i]=l.Id_lc ;
            i++;
        }
           
reclamation rec;
int j=0;
     while(fscanf(f2,"%d %d %d %d %s %s  %d %d\n",&rec.id_rec,&rec.date_rec.jour_rec,&rec.date_rec.mois_rec,&rec.date_rec.annee_rec,rec.categ_rec,rec.desc_rec,&rec.nbv_rec,&rec.nle_rec)!=EOF)
        {
            liste[j].Id_lc=rec.nle_rec;
            liste[j].nb_reclamation=calculer(l.Id_lc,fichierreclamation);

        }
     }


        int calculer (int Id_l,char * filename)
        {
reclamation rec;
            int nb_reclamation=0 ;
          FILE * f=fopen(filename, "r");
           while(fscanf(f,"%d %d %d %d %s %s  %d %d\n",&rec.id_rec,&rec.date_rec.jour_rec,&rec.date_rec.mois_rec,&rec.date_rec.annee_rec,rec.categ_rec,rec.desc_rec,&rec.nbv_rec,&rec.nle_rec)!=EOF)
           {
               if(Id_l==rec.nle_rec)
                nb_reclamation++ ;
        }
        return nb_reclamation ;
           }



/*int somme()
{
int n=0;
while(fscanf(f,"%d %d %d %d %s %s  %d %d\n",&rec.id_rec,&rec.date_rec.jour_rec,&rec.date_rec.mois_rec,&rec.date_rec.annee_rec,rec.categ_rec,rec.desc_rec,&rec.nbv_rec,&rec.nle_rec)!=EOF)
n++;

}
return n;
}*/

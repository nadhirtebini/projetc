#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "le.h"
int ajouter( l_elec l, char *filename)
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %s %d %s %d %d %d \n",l.nom_l,l.prenom_l,l.prof_l,l.Id_l,l.CIN_l,l.Date_l.jour,l.Date_l.mois,l.Date_l.annee);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier(int Id_l, l_elec l_nouv, char *filename)
{
    int tr=0;
    l_elec l;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("l_nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %s %d %s %d %d %d \n",l.nom_l,l.prenom_l,l.prof_l,&l.Id_l,l.CIN_l,&l.Date_l.jour,&l.Date_l.mois,&l.Date_l.annee)!=EOF)
        {
            if(l.Id_l == Id_l)
            {
                fprintf(f2,"%s %s %s %d %s %d %d %d \n",l_nouv.nom_l,l_nouv.prenom_l,l_nouv.prof_l,l_nouv.Id_l,l_nouv.CIN_l,l_nouv.Date_l.jour,l_nouv.Date_l.mois,l_nouv.Date_l.annee);
                tr=1;
            }
            else
                fprintf(f2,"%s %s %s %d %s %d %d %d \n",l.nom_l,l.prenom_l,l.prof_l,l.Id_l,l.CIN_l,l.Date_l.jour,l.Date_l.mois,l.Date_l.annee);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("l_nouv.txt", filename);
    return tr;

}
/*int supprimer(char *filename, int Id_l)
{
    int tr=0;
    l_elec l;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("l_nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %s %d %s %d %d %d \n",l.nom_l,l.prenom_l,l.prof_l,&l.Id_l,l.CIN_l,&l.Date_l.jour,&l.Date_l.mois,&l.Date_l.annee)!=EOF)
        {
            if(l.Id_l== Id_l)
                tr=1;
            else
                fprintf(f2,"%s %s %s %d %s %d %d %d \n",l.nom_l,l.prenom_l,l.prof_l,l.Id_l,l.CIN_l,l.Date_l.jour,l.Date_l.mois,l.Date_l.annee);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("l_nouv.txt", filename);
    return tr;
}*/
l_elec chercher(char *filename, int  Id_l)
{
    l_elec l;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%s %s %s %d %s %d %d %d \n",l.nom_l,l.prenom_l,l.prof_l,&l.Id_l,l.CIN_l,&l.Date_l.jour,&l.Date_l.mois,&l.Date_l.annee)!=EOF)
        {
            if(l.Id_l== Id_l)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        l.Id_l==-1;
    return l;

}

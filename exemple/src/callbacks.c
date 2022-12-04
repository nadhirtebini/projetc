#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "reclamation.h"


int ET=0;
int OU=0;

void
on_tableau_row_activated               (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_rechercher_clicked                  (GtkButton       *objet,
                                        gpointer         user_data)
{
GtkWidget *fenetre_afficher,*w1;

GtkWidget *treeview;

GtkWidget  *id_entry;
reclamation rec ;
char id[20];
id_entry = lookup_widget (objet,"entry1");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(id_entry)));

rec=chercher(id,"reclamation.txt");
 FILE *f=fopen("search.txt","w");
if(f!=NULL){
        fprintf(f," %s %d %d %d %s %s %s %s \n",rec.id_rec,rec.date_rec.jour_rec,rec.date_rec.mois_rec,rec.date_rec.annee_rec,rec.nbv_rec,rec.nle_rec,rec.categ_rec,rec.desc_rec);
      
   
}
 fclose(f);
w1=lookup_widget(objet,"affichage");
fenetre_afficher=create_affichage();
gtk_widget_hide(fenetre_afficher);
gtk_widget_hide(w1);
gtk_widget_show(fenetre_afficher);
treeview=lookup_widget(fenetre_afficher,"tableau");
afficher_rec(treeview,"search.txt");
}


void
on_supprimer_clicked                   (GtkButton       *objet,
                                        gpointer         user_data)
{

}


void
on_modifier_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_ajouter_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_nbv_4_rec_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON (togglebutton)))
 OU=4;
}


void
on_nbv_3_rec_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON (togglebutton)))
 OU=3;
}


void
on_nbv_2_rec_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON (togglebutton)))
 OU=2;
}


void
on_nbv_1_rec_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON (togglebutton)))
 OU=1;
}


void
on_urg_rec_toggled                     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON (togglebutton)))
 ET=1;
}


void
on_moy_rec_toggled                     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON (togglebutton)))
 ET=2;
}


void
on_fai_rec_toggled                     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active (GTK_TOGGLE_BUTTON (togglebutton)))
 ET=3;
}


void
on_ajouter2_rec_clicked                (GtkButton       *objet,
                                        gpointer         user_data)
{
GtkWidget*id_rec;
GtkWidget*jour_rec;
GtkWidget*mois_rec;
GtkWidget*annee_rec;
GtkWidget*nle_rec;

GtkWidget*desc_rec;
GtkWidget*fenetre_ajout;
reclamation rec ;

fenetre_ajout=lookup_widget (objet,"remplissage");
id_rec = lookup_widget (objet,"id2_rec" );
jour_rec = lookup_widget (objet,"jour_rec" );
mois_rec = lookup_widget (objet,"mois_rec" );
annee_rec = lookup_widget (objet,"annee_rec" );
nle_rec = lookup_widget (objet,"nle_rec" );
desc_rec = lookup_widget (objet,"desc_rec" );


strcpy(rec.id_rec,gtk_entry_get_text(GTK_ENTRY(id_rec)));
rec.date_rec.jour_rec=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour_rec));
rec.date_rec.mois_rec=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois_rec));
rec.date_rec.annee_rec=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee_rec));
strcpy(rec.nle_rec,gtk_combo_box_get_active_text (GTK_COMBO_BOX(nle_rec)));
strcpy(rec.desc_rec,gtk_entry_get_text(GTK_ENTRY(desc_rec)));

ajouter (rec,ET,OU);
}



void
on_afficher_rec_clicked                (GtkButton       *objet,
                                        gpointer         user_data)
{

GtkWidget *fenetre_ajout;
GtkWidget *fenetre_afficher;
GtkWidget *treeview;
reclamation rec;

fenetre_ajout = lookup_widget(objet,"remplissage");

gtk_widget_hide(fenetre_ajout);
fenetre_afficher=lookup_widget(objet,"affichage");
fenetre_afficher=create_affichage();
gtk_widget_show(fenetre_afficher);
treeview=lookup_widget(fenetre_afficher,"tableau");
afficher_rec(treeview,"reclamation.txt");

}


void
on_supp_rec_clicked                    (GtkButton       *objet,
                                        gpointer         user_data)
{
char supp [20];
reclamation rec ;

GtkWidget *fenetre_afficher,*sup,*w1;
GtkWidget *treeview;

sup= lookup_widget (objet,"entrysupp" );
strcpy(supp,gtk_entry_get_text(GTK_ENTRY(sup)));
supprimer_rec( supp ,"reclamation.txt");

w1=lookup_widget(objet,"affichage");
fenetre_afficher=create_affichage();
gtk_widget_hide(fenetre_afficher);
gtk_widget_hide(w1);

gtk_widget_show(fenetre_afficher);

treeview=lookup_widget(fenetre_afficher,"tableau");
afficher_rec(treeview,"reclamation.txt");
}


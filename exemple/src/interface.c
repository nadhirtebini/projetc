/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_affichage (void)
{
  GtkWidget *affichage;
  GtkWidget *fixed1;
  GtkWidget *entry1;
  GtkWidget *label1;
  GtkWidget *tableau;
  GtkWidget *rechercher;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label13;
  GtkWidget *ajouter;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label10;
  GtkWidget *modifier;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label11;
  GtkWidget *supprimer;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label12;

  affichage = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (affichage), _("window1"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (affichage), fixed1);

  entry1 = gtk_entry_new ();
  gtk_widget_show (entry1);
  gtk_fixed_put (GTK_FIXED (fixed1), entry1, 104, 32);
  gtk_widget_set_size_request (entry1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry1), 8226);

  label1 = gtk_label_new (_("id"));
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed1), label1, 48, 32);
  gtk_widget_set_size_request (label1, 41, 17);

  tableau = gtk_tree_view_new ();
  gtk_widget_show (tableau);
  gtk_fixed_put (GTK_FIXED (fixed1), tableau, 24, 88);
  gtk_widget_set_size_request (tableau, 656, 216);

  rechercher = gtk_button_new ();
  gtk_widget_show (rechercher);
  gtk_fixed_put (GTK_FIXED (fixed1), rechercher, 288, 32);
  gtk_widget_set_size_request (rechercher, 112, 32);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (rechercher), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label13 = gtk_label_new_with_mnemonic (_("rechercher"));
  gtk_widget_show (label13);
  gtk_box_pack_start (GTK_BOX (hbox6), label13, FALSE, FALSE, 0);

  ajouter = gtk_button_new ();
  gtk_widget_show (ajouter);
  gtk_fixed_put (GTK_FIXED (fixed1), ajouter, 192, 336);
  gtk_widget_set_size_request (ajouter, 104, 32);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (ajouter), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label10 = gtk_label_new_with_mnemonic (_("ajouter"));
  gtk_widget_show (label10);
  gtk_box_pack_start (GTK_BOX (hbox3), label10, FALSE, FALSE, 0);

  modifier = gtk_button_new ();
  gtk_widget_show (modifier);
  gtk_fixed_put (GTK_FIXED (fixed1), modifier, 312, 336);
  gtk_widget_set_size_request (modifier, 96, 32);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (modifier), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label11 = gtk_label_new_with_mnemonic (_("modifier"));
  gtk_widget_show (label11);
  gtk_box_pack_start (GTK_BOX (hbox4), label11, FALSE, FALSE, 0);

  supprimer = gtk_button_new ();
  gtk_widget_show (supprimer);
  gtk_fixed_put (GTK_FIXED (fixed1), supprimer, 424, 336);
  gtk_widget_set_size_request (supprimer, 96, 32);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (supprimer), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-cancel", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label12 = gtk_label_new_with_mnemonic (_("supprimer"));
  gtk_widget_show (label12);
  gtk_box_pack_start (GTK_BOX (hbox5), label12, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) tableau, "row_activated",
                    G_CALLBACK (on_tableau_row_activated),
                    NULL);
  g_signal_connect ((gpointer) rechercher, "clicked",
                    G_CALLBACK (on_rechercher_clicked),
                    NULL);
  g_signal_connect ((gpointer) ajouter, "clicked",
                    G_CALLBACK (on_ajouter_clicked),
                    NULL);
  g_signal_connect ((gpointer) modifier, "clicked",
                    G_CALLBACK (on_modifier_clicked),
                    NULL);
  g_signal_connect ((gpointer) supprimer, "clicked",
                    G_CALLBACK (on_supprimer_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (affichage, affichage, "affichage");
  GLADE_HOOKUP_OBJECT (affichage, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (affichage, entry1, "entry1");
  GLADE_HOOKUP_OBJECT (affichage, label1, "label1");
  GLADE_HOOKUP_OBJECT (affichage, tableau, "tableau");
  GLADE_HOOKUP_OBJECT (affichage, rechercher, "rechercher");
  GLADE_HOOKUP_OBJECT (affichage, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (affichage, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (affichage, image6, "image6");
  GLADE_HOOKUP_OBJECT (affichage, label13, "label13");
  GLADE_HOOKUP_OBJECT (affichage, ajouter, "ajouter");
  GLADE_HOOKUP_OBJECT (affichage, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (affichage, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (affichage, image3, "image3");
  GLADE_HOOKUP_OBJECT (affichage, label10, "label10");
  GLADE_HOOKUP_OBJECT (affichage, modifier, "modifier");
  GLADE_HOOKUP_OBJECT (affichage, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (affichage, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (affichage, image4, "image4");
  GLADE_HOOKUP_OBJECT (affichage, label11, "label11");
  GLADE_HOOKUP_OBJECT (affichage, supprimer, "supprimer");
  GLADE_HOOKUP_OBJECT (affichage, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (affichage, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (affichage, image5, "image5");
  GLADE_HOOKUP_OBJECT (affichage, label12, "label12");

  return affichage;
}

GtkWidget*
create_remplissage (void)
{
  GtkWidget *remplissage;
  GtkWidget *fixed2;
  GtkWidget *id2_rec;
  GtkWidget *label2;
  GtkWidget *label3;
  GtkObject *jour_rec_adj;
  GtkWidget *jour_rec;
  GtkObject *mois_rec_adj;
  GtkWidget *mois_rec;
  GtkObject *annee_rec_adj;
  GtkWidget *annee_rec;
  GtkWidget *label4;
  GtkWidget *label5;
  GtkWidget *nbv_4_rec;
  GtkWidget *nbv_2_rec;
  GtkWidget *nbv_1_rec;
  GtkWidget *label6;
  GtkWidget *fai_rec;
  GSList *fai_rec_group = NULL;
  GtkWidget *label7;
  GtkWidget *desc_rec;
  GtkWidget *nbv_3_rec;
  GtkWidget *urg_rec;
  GtkWidget *moy_rec;
  GtkWidget *ajouter2_rec;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label8;
  GtkWidget *nle_rec;
  GtkWidget *afficher_rec;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label9;

  remplissage = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (remplissage), _("window2"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (remplissage), fixed2);

  id2_rec = gtk_entry_new ();
  gtk_widget_show (id2_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), id2_rec, 88, 24);
  gtk_widget_set_size_request (id2_rec, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (id2_rec), 8226);

  label2 = gtk_label_new (_("id"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed2), label2, 32, 32);
  gtk_widget_set_size_request (label2, 41, 17);

  label3 = gtk_label_new (_("Date"));
  gtk_widget_show (label3);
  gtk_fixed_put (GTK_FIXED (fixed2), label3, 32, 88);
  gtk_widget_set_size_request (label3, 48, 16);

  jour_rec_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  jour_rec = gtk_spin_button_new (GTK_ADJUSTMENT (jour_rec_adj), 1, 0);
  gtk_widget_show (jour_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), jour_rec, 88, 80);
  gtk_widget_set_size_request (jour_rec, 60, 27);

  mois_rec_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  mois_rec = gtk_spin_button_new (GTK_ADJUSTMENT (mois_rec_adj), 1, 0);
  gtk_widget_show (mois_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), mois_rec, 184, 80);
  gtk_widget_set_size_request (mois_rec, 60, 27);

  annee_rec_adj = gtk_adjustment_new (1, 1900, 2022, 1, 10, 10);
  annee_rec = gtk_spin_button_new (GTK_ADJUSTMENT (annee_rec_adj), 1, 0);
  gtk_widget_show (annee_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), annee_rec, 280, 80);
  gtk_widget_set_size_request (annee_rec, 60, 27);

  label4 = gtk_label_new (_("numero de liste"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed2), label4, 8, 144);
  gtk_widget_set_size_request (label4, 144, 16);

  label5 = gtk_label_new (_("numero de burau"));
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed2), label5, 24, 184);
  gtk_widget_set_size_request (label5, 136, 24);

  nbv_4_rec = gtk_check_button_new_with_mnemonic (_("4"));
  gtk_widget_show (nbv_4_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), nbv_4_rec, 304, 184);
  gtk_widget_set_size_request (nbv_4_rec, 40, 24);

  nbv_2_rec = gtk_check_button_new_with_mnemonic (_("2"));
  gtk_widget_show (nbv_2_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), nbv_2_rec, 208, 184);
  gtk_widget_set_size_request (nbv_2_rec, 40, 24);

  nbv_1_rec = gtk_check_button_new_with_mnemonic (_("1"));
  gtk_widget_show (nbv_1_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), nbv_1_rec, 160, 184);
  gtk_widget_set_size_request (nbv_1_rec, 40, 24);

  label6 = gtk_label_new (_("etat de reclamation"));
  gtk_widget_show (label6);
  gtk_fixed_put (GTK_FIXED (fixed2), label6, 16, 232);
  gtk_widget_set_size_request (label6, 168, 24);

  fai_rec = gtk_radio_button_new_with_mnemonic (NULL, _("faible"));
  gtk_widget_show (fai_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), fai_rec, 40, 336);
  gtk_widget_set_size_request (fai_rec, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (fai_rec), fai_rec_group);
  fai_rec_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (fai_rec));

  label7 = gtk_label_new (_("reclamation"));
  gtk_widget_show (label7);
  gtk_fixed_put (GTK_FIXED (fixed2), label7, 40, 384);
  gtk_widget_set_size_request (label7, 104, 16);

  desc_rec = gtk_entry_new ();
  gtk_widget_show (desc_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), desc_rec, 40, 416);
  gtk_widget_set_size_request (desc_rec, 408, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (desc_rec), 8226);

  nbv_3_rec = gtk_check_button_new_with_mnemonic (_("3"));
  gtk_widget_show (nbv_3_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), nbv_3_rec, 256, 184);
  gtk_widget_set_size_request (nbv_3_rec, 40, 24);

  urg_rec = gtk_radio_button_new_with_mnemonic (NULL, _("urgente"));
  gtk_widget_show (urg_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), urg_rec, 40, 272);
  gtk_widget_set_size_request (urg_rec, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (urg_rec), fai_rec_group);
  fai_rec_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (urg_rec));

  moy_rec = gtk_radio_button_new_with_mnemonic (NULL, _("moyenne"));
  gtk_widget_show (moy_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), moy_rec, 40, 304);
  gtk_widget_set_size_request (moy_rec, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (moy_rec), fai_rec_group);
  fai_rec_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (moy_rec));

  ajouter2_rec = gtk_button_new ();
  gtk_widget_show (ajouter2_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), ajouter2_rec, 56, 472);
  gtk_widget_set_size_request (ajouter2_rec, 88, 32);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (ajouter2_rec), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label8 = gtk_label_new_with_mnemonic (_("ajouter"));
  gtk_widget_show (label8);
  gtk_box_pack_start (GTK_BOX (hbox1), label8, FALSE, FALSE, 0);

  nle_rec = gtk_combo_box_new_text ();
  gtk_widget_show (nle_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), nle_rec, 168, 136);
  gtk_widget_set_size_request (nle_rec, 64, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (nle_rec), _("1"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (nle_rec), _("2"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (nle_rec), _("3"));

  afficher_rec = gtk_button_new ();
  gtk_widget_show (afficher_rec);
  gtk_fixed_put (GTK_FIXED (fixed2), afficher_rec, 288, 472);
  gtk_widget_set_size_request (afficher_rec, 104, 32);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (afficher_rec), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-open", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label9 = gtk_label_new_with_mnemonic (_("afficher"));
  gtk_widget_show (label9);
  gtk_box_pack_start (GTK_BOX (hbox2), label9, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) nbv_4_rec, "toggled",
                    G_CALLBACK (on_nbv_4_rec_toggled),
                    NULL);
  g_signal_connect ((gpointer) nbv_2_rec, "toggled",
                    G_CALLBACK (on_nbv_2_rec_toggled),
                    NULL);
  g_signal_connect ((gpointer) nbv_1_rec, "toggled",
                    G_CALLBACK (on_nbv_1_rec_toggled),
                    NULL);
  g_signal_connect ((gpointer) fai_rec, "toggled",
                    G_CALLBACK (on_fai_rec_toggled),
                    NULL);
  g_signal_connect ((gpointer) nbv_3_rec, "toggled",
                    G_CALLBACK (on_nbv_3_rec_toggled),
                    NULL);
  g_signal_connect ((gpointer) urg_rec, "toggled",
                    G_CALLBACK (on_urg_rec_toggled),
                    NULL);
  g_signal_connect ((gpointer) moy_rec, "toggled",
                    G_CALLBACK (on_moy_rec_toggled),
                    NULL);
  g_signal_connect ((gpointer) ajouter2_rec, "clicked",
                    G_CALLBACK (on_ajouter2_rec_clicked),
                    NULL);
  g_signal_connect ((gpointer) afficher_rec, "clicked",
                    G_CALLBACK (on_afficher_rec_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (remplissage, remplissage, "remplissage");
  GLADE_HOOKUP_OBJECT (remplissage, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (remplissage, id2_rec, "id2_rec");
  GLADE_HOOKUP_OBJECT (remplissage, label2, "label2");
  GLADE_HOOKUP_OBJECT (remplissage, label3, "label3");
  GLADE_HOOKUP_OBJECT (remplissage, jour_rec, "jour_rec");
  GLADE_HOOKUP_OBJECT (remplissage, mois_rec, "mois_rec");
  GLADE_HOOKUP_OBJECT (remplissage, annee_rec, "annee_rec");
  GLADE_HOOKUP_OBJECT (remplissage, label4, "label4");
  GLADE_HOOKUP_OBJECT (remplissage, label5, "label5");
  GLADE_HOOKUP_OBJECT (remplissage, nbv_4_rec, "nbv_4_rec");
  GLADE_HOOKUP_OBJECT (remplissage, nbv_2_rec, "nbv_2_rec");
  GLADE_HOOKUP_OBJECT (remplissage, nbv_1_rec, "nbv_1_rec");
  GLADE_HOOKUP_OBJECT (remplissage, label6, "label6");
  GLADE_HOOKUP_OBJECT (remplissage, fai_rec, "fai_rec");
  GLADE_HOOKUP_OBJECT (remplissage, label7, "label7");
  GLADE_HOOKUP_OBJECT (remplissage, desc_rec, "desc_rec");
  GLADE_HOOKUP_OBJECT (remplissage, nbv_3_rec, "nbv_3_rec");
  GLADE_HOOKUP_OBJECT (remplissage, urg_rec, "urg_rec");
  GLADE_HOOKUP_OBJECT (remplissage, moy_rec, "moy_rec");
  GLADE_HOOKUP_OBJECT (remplissage, ajouter2_rec, "ajouter2_rec");
  GLADE_HOOKUP_OBJECT (remplissage, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (remplissage, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (remplissage, image1, "image1");
  GLADE_HOOKUP_OBJECT (remplissage, label8, "label8");
  GLADE_HOOKUP_OBJECT (remplissage, nle_rec, "nle_rec");
  GLADE_HOOKUP_OBJECT (remplissage, afficher_rec, "afficher_rec");
  GLADE_HOOKUP_OBJECT (remplissage, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (remplissage, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (remplissage, image2, "image2");
  GLADE_HOOKUP_OBJECT (remplissage, label9, "label9");

  return remplissage;
}


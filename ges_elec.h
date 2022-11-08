#ifndef ELECTION_H_INCLUDED
#define ELECTION_H_INCLUDED
typedef struct {
     int jour;
     int mois;
     int annee;
}Date;
typedef struct {
     char identifiant[20];
     Date dateElec;
     char adresse[100];
     char municipalite[50];
     char nb_hab[100];
     int nb_cons;
}Election;
int ajouter(Election e, char filename_elec []);
int modifier(char identifiant, Election nouv, char * filename_elec);
int supprimer(char identifiant, char * filename_elec);
Election chercher(char identifiant, char * filename_elec);
#endif // ELECTION_H_INCLUDED

#ifndef INFORMATION__H_INCLUDED
#define INFORMATION_H_INCLUDED

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    char nom [30];
    char prenom [30];
    Date dateu;
    char cin [10];
    char sexe[20];
    char role [30];
    char appart [30];
    char natio [30];
    int num;
    char loginu [30];
    char passe [30];
}information;
int ajouter(information inf , char gestion_user[]);
int modifier(char cin, information nouv, char * gestion_user);
int supprimer(char cin, char * gestion_user);
information chercher(char cin, char * gestion_user);

#endif // INFORMATION_H_INCLUDED




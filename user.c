#include "user.h"
#include<stdio.h>
#include<string.h>


int ajouter(information inf , char gestion_user [])
{
    FILE * f=fopen(gestion_user, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %d %d %d %s %s %s %s %s %d %s %s",inf.nom,inf.prenom,inf.dateu.jour,inf.dateu.mois,inf.dateu.annee,inf.cin,inf.sexe,inf.natio,inf.role,inf.appart,inf.num,inf.loginu,inf.passe);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier(char cin, information nouv, char * gestion_user)
{
information inf;



    FILE * f=fopen(gestion_user, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %d %d %d %s %s %s %s %s %d %s %s",inf.nom,inf.prenom,&inf.dateu.jour,&inf.dateu.mois,&inf.dateu.annee,inf.cin,inf.sexe,inf.natio,inf.role,inf.appart,&inf.num,inf.loginu,inf.passe)!=EOF)
{
if(strcmp(inf.cin,cin)!=0)
        fprintf(f2,"%s %s %d %d %d %s %s %s %s %s %d %s %s",inf.nom,inf.prenom,inf.dateu.jour,inf.dateu.mois,inf.dateu.annee,inf.cin,inf.sexe,inf.natio,inf.role,inf.appart,inf.num,inf.loginu,inf.passe);
else

  fprintf(f2,"%s %s %d %d %d %s %s %s %s %s %d %s %s",nouv.nom,nouv.prenom,nouv.dateu.jour,nouv.dateu.mois,nouv.dateu.annee,nouv.cin,nouv.sexe,nouv.natio,nouv.role,nouv.appart,nouv.num,nouv.loginu,nouv.passe);

}
        fclose(f);
        fclose(f2);
remove(gestion_user);
rename("aux.txt", gestion_user);
return 1 ;
}
}

int supprimer(char cin, char * gestion_user)
{
information inf ;


    FILE * f=fopen(gestion_user, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %d %d %d %s %s %s %s %s %d %s %s",inf.nom,inf.prenom,&inf.dateu.jour,&inf.dateu.mois,&inf.dateu.annee,inf.cin,inf.sexe,inf.natio,inf.role,inf.appart,&inf.num,inf.loginu,inf.passe)!=EOF)
{

if(strcmp(inf.cin,cin)!=0)
        fprintf(f2,"%s %s %d %d %d %s %s %s %s %s %d %s %s",inf.nom,inf.prenom,inf.dateu.jour,inf.dateu.mois,inf.dateu.annee,inf.cin,inf.sexe,inf.natio,inf.role,inf.appart,inf.num,inf.loginu,inf.passe);

}
        fclose(f);
        fclose(f2);
remove(gestion_user);
rename("aux.txt", gestion_user);
        return 1;
    }
}
information chercher(char cin, char * gestion_user)
{
information inf ; 
int tr=0;



    FILE * f=fopen(gestion_user, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%s %s %d %d %d %s %s %s %s %s %d %s %s",inf.nom,inf.prenom,&inf.dateu.jour,&inf.dateu.mois,&inf.dateu.annee,inf.cin,inf.sexe,inf.natio,inf.role,inf.appart,&inf.num,inf.loginu,inf.passe)!=EOF && tr==0)
{

if(strcmp(inf.cin,cin)==0)
tr=1;
}
}
if(tr==0)
    strcpy(inf.cin,"-1");
return inf;

}

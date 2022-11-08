#include "ges_elec.h"
#include<stdio.h>
#include<string.h>
int ajouter(Election e , char filename [])
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
       fprintf(f,"%s %d %d %d %s %s %s %d\n",e.identifiant,e.dateElec.jour,e.dateElec.mois,e.dateElec.annee,e.adresse,e.municipalite,e.nb_hab,e.nb_cons);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier(char identifiant, Election nouv, char * filename_elec)
{
Election e; int x;
    FILE * f=fopen(filename_elec, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %d %d %d %s %s %s %d\n",e.identifiant,&e.dateElec.jour,&e.dateElec.mois,&e.dateElec.annee,e.adresse,e.municipalite,e.nb_hab,&e.nb_cons)!=EOF);
{
if(strcmp(e.identifiant,identifiant)!=0)
        fprintf(f2,"%s %d %d %d %s %s %s %d\n",e.identifiant,e.dateElec.jour,e.dateElec.mois,e.dateElec.annee,e.adresse,e.municipalite,e.nb_hab,e.nb_cons);
else

  fprintf(f2,"%s %d %d %d %s %s %s %d\n",nouv.identifiant,nouv.dateElec.jour,nouv.dateElec.mois,nouv.dateElec.annee,nouv.adresse,nouv.municipalite,nouv.nb_hab,nouv.nb_cons);

}
        fclose(f);
        fclose(f2);
remove(filename_elec);
rename("aux.txt", filename_elec);
        return 1;
    }

}

int supprimer(char identifiant, char * filename_elec)
{
Election e; int x;
    FILE * f=fopen(filename_elec, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %d %d %d %s %s %s %d\n",e.identifiant,&e.dateElec.jour,&e.dateElec.mois,&e.dateElec.annee,e.adresse,e.municipalite,e.nb_hab,&e.nb_cons)!=EOF)
{
if(strcmp(e.identifiant,identifiant)!=0)
        fprintf(f2,"%s %d %d %d %s %s %s %d\n",e.identifiant,e.dateElec.jour,e.dateElec.mois,e.dateElec.annee,e.adresse,e.municipalite,e.nb_hab,e.nb_cons);

}
        fclose(f);
        fclose(f2);
remove(filename_elec);
rename("aux.txt", filename_elec);
        return 1;
    }
}

Election chercher(char identifiant, char * filename_elec)
{
Election e; int tr=0; int x=0;
    FILE * f=fopen(filename_elec, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%s %d %d %d %s %s %s %d\n",e.identifiant,&e.dateElec.jour,&e.dateElec.mois,&e.dateElec.annee,e.adresse,e.municipalite,e.nb_hab,&e.nb_cons)!=EOF && tr==0)
{
if(strcmp(e.identifiant,identifiant)==0)
tr=1;
}
}
if(tr==0)
strcpy(e.identifiant,"-1");
return e;

}

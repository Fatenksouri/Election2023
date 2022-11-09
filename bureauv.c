#include "bureauv.h"
#include<stdio.h>
#include<string.h>
int ajouter(bureauv bv , char filename [])
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %s %i %i %i\n",bv.idb,bv.ida,bv.salle,bv.capacite,bv.nbo,bv.dispo);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(char id[], bureauv nouv, char * filename)
{
bureauv bv;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %s %i %i %i\n",bv.idb,bv.ida,bv.salle,&bv.capacite,&bv.nbo,&bv.dispo) !=EOF)
{
if(strcmp(bv.idb,id)!=0)
        fprintf(f2,"%s %s %s %i %i %i\n",bv.idb,bv.ida,bv.salle,bv.capacite,bv.nbo,bv.dispo);
else

  fprintf(f2,"%s %s %s %i %i %i\n",nouv.idb,nouv.ida,nouv.salle,nouv.capacite,nouv.nbo,nouv.dispo);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
  
}

int supprimer(char id[], char * filename)
{
bureauv bv;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %s %i %i %i\n",bv.idb,bv.ida,bv.salle,&bv.capacite,&bv.nbo,&bv.dispo)!=EOF)
{
if(strcmp(bv.idb,id)!=0)
        fprintf(f2,"%s %s %s %i %i %i\n",bv.idb,bv.ida,bv.salle,bv.capacite,bv.nbo,bv.dispo);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}

bureauv chercher(char id[], char * filename)
{
bureauv bv; int tr=0;
char c[20] = "-1" ;
int x ;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%s %s %s %i %i %i\n",bv.idb,bv.ida,bv.salle,&bv.capacite,&bv.nbo,&bv.dispo)!=EOF && tr==0)
{
x=strcmp(id,bv.idb);
if(x==0)
tr=1;
}
}
if(tr==0)

strcpy (bv.idb,c);


return bv;

}

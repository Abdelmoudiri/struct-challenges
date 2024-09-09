#include<stdio.h>
#include<stdlib.h>
typedef struct {
char nom[100],prenom[100];
int age;
}Personne;
int main() {

Personne p={"ahmed","md",12};



printf(" %s %s %d",p.nom,p.prenom,p.age);

    return 0;
}

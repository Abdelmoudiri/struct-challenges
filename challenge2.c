#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
char matier[100];
int note;
}Notes;

typedef struct {
char nom[100],prenom[100];
Notes notes[100];
}Etudiant;


Etudiant etud[3];

int main() {
    strcpy(etud[0].nom, "aaa");
    strcpy(etud[0].prenom, "bbb");

    strcpy(etud[0].notes[0].matier, "ccc");
    etud[0].notes[0].note = 12;
    strcpy(etud[0].notes[1].matier, "kkk");
    etud[0].notes[1].note = 1111;

    printf("%s %s %s %d\n", etud[0].nom, etud[0].prenom, etud[0].notes[0].matier, etud[0].notes[0].note);
    printf("%s %s %s %d\n", etud[0].nom, etud[0].prenom, etud[0].notes[1].matier, etud[0].notes[1].note);

    return 0;
}

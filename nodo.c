#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

void stampa(Ptr n)
{
    while (n != NULL) {
        printf("%d", n->val);
        n = n->next;
    }
    printf("NULL\n");
}

void inserisci(Ptr *head, int val)
{
    Ptr n = *head;
    Ptr v = NULL;

    Ptr a = malloc(sizeof(Nodo));
    a->val = val;
    a->next = NULL;

    while (n != NULL && n->val < val) {
        v = n;
        n = n->next;
    }

    if (v == NULL) {
        a->next = *head;
        *head = a;
    } else {
        v->next = a;
        a->next = head;
    }
}

void rimuovi(Ptr *head, int val)
{
    Ptr n = *head;
    Ptr v = NULL;
    Ptr a = NULL;

    while (n != NULL && n->val < val) {
        v = n;
        n = n->next;
    }

    if (n == NULL) {
        printf("Elemento %d non trovato \n", val);
        return;
    }

    printf("Elemento %d trovato \n", val);

    if (v == NULL) {
        printf("L'elemento da eliminare e' in testa \n");
       
        a = *head;           
        *head = (*head)->next;  
        free(a);             
        return;
    }

    printf("L'elemento da eliminare non e' in testa \n");
    a = v->next;
    v->next = a->next;
    free(a);
}

void clear(Ptr *head)
{
    Ptr a;

    while (*head != NULL) {
        a = *head;    
        *head = (*head)->next;
        
        printf("Pulisci il nodo con valore %d \n", a->val);
        free(a);
    }
}

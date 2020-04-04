#ifndef NODO_H
#define NODO_H

struct nodo {
    int val;
    struct nodo *next;
};
typedef struct nodo Nodo;
typedef struct nodo *Ptr;

void stampa(Ptr head);
void inserisci(Ptr *head, int val);
void rimuovi(Ptr *head, int val);
void clear(Ptr *head);

#endif

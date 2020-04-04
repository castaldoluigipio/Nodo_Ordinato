#include <stdio.h>
#include "nodo.h"


int main(){
    Ptr head = NULL;
   
    stampa(head);

    inserisci(&head, 7);
   
    stampa(head);

    inserisci(&head, 13);
    
    stampa(head);

    inserisci(&head, 2);
   
    stampa(head);

    inserisci(&head, 6);
  
    stampa(head);

    inserisci(&head, 12);
  
    stampa(head);

    rimuovi(&head, 8);
  
    stampa(head);

    rimuovi(&head, 4);
   
    stampa(head);

    
    rimuovi(&head, 20);

    rimuovi(&head, 40);
    
    stampa(head);

    clear(&head);
 return 0;
}


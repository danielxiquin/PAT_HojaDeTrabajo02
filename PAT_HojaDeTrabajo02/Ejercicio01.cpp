#include "Ejercicio01.h"

Node<char>* Ejercicio01::rotateRight(Node<char>* head, int k)
{
    if (head == nullptr || head->next== nullptr || k == 0) {
        return head;
    }

    int longitud = 0; 

    Node<char>* temp = head;

    while (temp->next) {
        longitud++;

        temp = temp->next;
    }
    longitud++;


    k = k % longitud;

    temp->next = head;

    while (longitud != k) {
        temp = head;
        head = head->next;
        --longitud;
    }



    temp->next = nullptr;

    return head;
    
}

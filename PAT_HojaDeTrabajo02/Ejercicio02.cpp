#include "Ejercicio02.h"
#include <iostream>
#include <list>
#include <vector>
using namespace std;

Node<int>* Ejercicio02::addTwoNumbers(Node<int>* l1, Node<int>* l2)
{

    Node<int>* resultado = new Node<int>{ 0 };
    Node<int>* current = resultado;
    int carry = 0;

    while (l1 != nullptr || l2 != nullptr) {
        int x = (l1 != nullptr) ? l1->value : 0;
        int y = (l2 != nullptr) ? l2->value : 0;
        int suma = x + y + carry;

        carry = suma / 10;
        current->next = new Node<int>{ suma % 10 };
        current = current->next;

        if (l1 != nullptr) l1 = l1->next;
        if (l2 != nullptr) l2 = l2->next;
    }

    if (carry > 0) {
        current->next = new Node<int>{ carry };
    }

    Node<int>* result = resultado->next;
    delete resultado;
    return result;
}



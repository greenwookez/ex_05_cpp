#include "intdeque.hpp"
#include <stdlib.h>
#include <stdio.h>

/*void print_deque(IntDeque * input) {
    IntDequeElement * tmp;

    printf("\nPrinted deque: \n\n");
    tmp = input -> left;
    while(tmp) {
        printf("elem: %d \n", tmp -> GetElement());
        printf("addr: %p \n", tmp);
        printf("prev: %p \n", tmp -> GetPrev());
        printf("next: %p \n", tmp -> GetNext());
        printf("\n");
        tmp = tmp -> GetNext();
    }
};

void print_deque_state(IntDeque * input,const char* name) {
    printf("\nname == %s\nleft == %p\nright == %p\nbuffer == %d\n", name, input -> left, input -> right, input -> buffer);
}*/

void addleft_o(IntDeque & _deque, int _element, const char * name) {
    _deque.AddLeft(_element);
    printf("%s.AddLeft(%d); %s.GetElement() == %d\n", name, _element, name, _deque.GetElement()); 
}

void addright_o(IntDeque & _deque, int _element, const char * name) {
    _deque.AddRight(_element);
    printf("%s.AddRight(%d); %s.GetElement() == %d\n", name, _element, name, _deque.GetElement()); 
}

void removeleft_o(IntDeque & _deque, const char * name) {
    int * tmp;
    tmp = _deque.RemoveLeft();
    
    if (tmp != NULL) {
        printf("%s.RemoveLeft(); %s.GetElement == %d\n", name, name, _deque.GetElement());
    } else {
        printf("%s.RemoveLeft() == NULL\n", name);
    }
}

void removeright_o(IntDeque & _deque, const char * name) {
    int * tmp;
    tmp = _deque.RemoveRight();
    
    if (tmp != NULL) {
        printf("%s.RemoveRight(); %s.GetElement == %d\n", name, name, _deque.GetElement());
    } else {
        printf("%s.RemoveRight() == NULL\n", name);
    }
}

int main() {
    IntDeque pdeque01, pdeque02;  
    printf("Generating PDEQUE01.\n");
    addleft_o(pdeque01, rand() % 150, "pdeque01");
    addleft_o(pdeque01, rand() % 150, "pdeque01");
    addleft_o(pdeque01, rand() % 150, "pdeque01");
    addleft_o(pdeque01, rand() % 150, "pdeque01");
    addleft_o(pdeque01, rand() % 150, "pdeque01");
    addright_o(pdeque01, rand() % 150, "pdeque01");
    addright_o(pdeque01, rand() % 150, "pdeque01");
    addright_o(pdeque01, rand() % 150, "pdeque01");
    addright_o(pdeque01, rand() % 150, "pdeque01");
    addright_o(pdeque01, rand() % 150, "pdeque01");
    printf("Deleteing PDEQUE01 elements with RemvoeLeft() method.\n");
    removeleft_o(pdeque01, "pdeque01");
    removeleft_o(pdeque01, "pdeque01");
    removeleft_o(pdeque01, "pdeque01");
    removeleft_o(pdeque01, "pdeque01");
    removeleft_o(pdeque01, "pdeque01");
    removeleft_o(pdeque01, "pdeque01");
    removeleft_o(pdeque01, "pdeque01");
    removeleft_o(pdeque01, "pdeque01");
    removeleft_o(pdeque01, "pdeque01");
    removeleft_o(pdeque01, "pdeque01");
    removeleft_o(pdeque01, "pdeque01");
    removeleft_o(pdeque01, "pdeque01");
    removeleft_o(pdeque01, "pdeque01");
    removeleft_o(pdeque01, "pdeque01");
    removeleft_o(pdeque01, "pdeque01");
    printf("Generating PDEQUE01.\n");
    addleft_o(pdeque01, rand() % 150, "pdeque01");
    addleft_o(pdeque01, rand() % 150, "pdeque01");
    addleft_o(pdeque01, rand() % 150, "pdeque01");
    addleft_o(pdeque01, rand() % 150, "pdeque01");
    addleft_o(pdeque01, rand() % 150, "pdeque01");
    addright_o(pdeque01, rand() % 150, "pdeque01");
    addright_o(pdeque01, rand() % 150, "pdeque01");
    addright_o(pdeque01, rand() % 150, "pdeque01");
    addright_o(pdeque01, rand() % 150, "pdeque01");
    addright_o(pdeque01, rand() % 150, "pdeque01");
    printf("Deleting PDEQUE01 elements with RemvoeRight() method.\n");
    removeright_o(pdeque01, "pdeque01");
    removeright_o(pdeque01, "pdeque01");
    removeright_o(pdeque01, "pdeque01");
    removeright_o(pdeque01, "pdeque01");
    removeright_o(pdeque01, "pdeque01");
    removeright_o(pdeque01, "pdeque01");
    removeright_o(pdeque01, "pdeque01");
    removeright_o(pdeque01, "pdeque01");
    removeright_o(pdeque01, "pdeque01");
    removeright_o(pdeque01, "pdeque01");
    removeright_o(pdeque01, "pdeque01");
    removeright_o(pdeque01, "pdeque01");
    removeright_o(pdeque01, "pdeque01");
    removeright_o(pdeque01, "pdeque01");
    removeright_o(pdeque01, "pdeque01");
    printf("Generating PDEQUE01.\n");
    addleft_o(pdeque01, rand() % 150, "pdeque01");
    addleft_o(pdeque01, rand() % 150, "pdeque01");
    addleft_o(pdeque01, rand() % 150, "pdeque01");
    addleft_o(pdeque01, rand() % 150, "pdeque01");
    addleft_o(pdeque01, rand() % 150, "pdeque01");
    addright_o(pdeque01, rand() % 150, "pdeque01");
    addright_o(pdeque01, rand() % 150, "pdeque01");
    addright_o(pdeque01, rand() % 150, "pdeque01");
    addright_o(pdeque01, rand() % 150, "pdeque01");
    addright_o(pdeque01, rand() % 150, "pdeque01");
    if(pdeque01.IsEmpty() == 1) {
        printf("PDEQUE01 is empty.\n");

    } else {
        printf("PDEQUE01 is not empty.\n");
    };

    if(pdeque02.IsEmpty() == 1) {
        printf("PDEQUE02 is empty.\n");

    } else {
        printf("PDEQUE02 is not empty.\n");
    };
    IntDeque pdeque03 = pdeque01;
    printf("IntDeque pdeque03 = pdeque01\n");
    addleft_o(pdeque02, rand() % 150, "pdeque01");
    addleft_o(pdeque02, rand() % 150, "pdeque01");
    addleft_o(pdeque02, rand() % 150, "pdeque01");
    addleft_o(pdeque02, rand() % 150, "pdeque01");
    addleft_o(pdeque02, rand() % 150, "pdeque01");
    addright_o(pdeque02, rand() % 150, "pdeque01");
    addright_o(pdeque02, rand() % 150, "pdeque01");
    addright_o(pdeque02, rand() % 150, "pdeque01");
    addright_o(pdeque02, rand() % 150, "pdeque01");
    addright_o(pdeque02, rand() % 150, "pdeque01");

    removeright_o(pdeque02, "pdeque02");
    removeleft_o(pdeque02, "pdeque02");
    removeleft_o(pdeque02, "pdeque02");
    removeright_o(pdeque02, "pdeque02");
    removeright_o(pdeque02, "pdeque02");
    removeright_o(pdeque02, "pdeque02");
    removeleft_o(pdeque02, "pdeque02");
    removeleft_o(pdeque02, "pdeque02");
    removeright_o(pdeque02, "pdeque02");
    removeright_o(pdeque02, "pdeque02");
    removeright_o(pdeque02, "pdeque02");
    removeleft_o(pdeque02, "pdeque02");
    removeleft_o(pdeque02, "pdeque02");
    removeright_o(pdeque02, "pdeque02");
    removeright_o(pdeque02, "pdeque02");

    removeright_o(pdeque03, "pdeque03");
    removeright_o(pdeque03, "pdeque03");
    removeleft_o(pdeque03, "pdeque03");
    removeleft_o(pdeque03, "pdeque03");
    removeright_o(pdeque03, "pdeque03");
    addleft_o(pdeque03, rand() % 150, "pdeque03");
    addright_o(pdeque03, rand() % 150, "pdeque03");
    addright_o(pdeque03, rand() % 150, "pdeque03");
    removeright_o(pdeque03, "pdeque03");
    removeright_o(pdeque03, "pdeque03");
    removeleft_o(pdeque03, "pdeque03");
    removeleft_o(pdeque03, "pdeque03");
    removeright_o(pdeque03, "pdeque03");
    removeleft_o(pdeque03, "pdeque03");
    removeleft_o(pdeque03, "pdeque03");
    removeright_o(pdeque03, "pdeque03");
    removeleft_o(pdeque03, "pdeque03");
    removeleft_o(pdeque03, "pdeque03");


    return 0;
}
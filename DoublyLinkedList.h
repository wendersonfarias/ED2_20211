//Olá a todos! Estou adiantando a atividade DoublyLinkedList.h
//As funções são semelhantes a Lista Simplesmente Ligada (LinkedList.h), porém, diferentemente da nossa Lista Simplesmente Ligada ==> essa nova estrutura é CIRCULAR.
//Vemos que o previous do primeiro elemento aponta para o último elemento
//Vemos agora que o next do último elemento aponta para o primeiro elemento
//E também sabemos que o primeiro elemento (Node) possui data igual a NULL. 
//Temos agora duas novas operações: show e showMem
//show: exibe os dados de todos os nós da lista
//showMem: exibe a organização na memória de todos os nós da lista
//Início

#ifndef DataStructure_DoublyLinkedList_h
#define DataStructure_DoublyLinkedList_h

enum boolean {
    true = 1, false = 0
};

typedef enum boolean bool;

typedef struct Node {
    void *data;
    struct Node *previous;
    struct Node *next;
}Node;

typedef struct DoublyLinkedList {
    Node *first;
    int size;
}DoublyLinkedList;

typedef bool (*compare)(void*,void*);
typedef void (*printNode)(void*);

void init(DoublyLinkedList *list);
int enqueue(DoublyLinkedList *list, void *data);
void* dequeue(DoublyLinkedList *list);
void* first(DoublyLinkedList *list);
void* last(DoublyLinkedList *list);
int push(DoublyLinkedList *list, void *data);
void* pop(DoublyLinkedList *list);
void* top(DoublyLinkedList *list);
bool isEmpty(DoublyLinkedList *list);
int indexOf(DoublyLinkedList *list,void *data, compare equal);
Node* getNodeByPos(DoublyLinkedList *list,int pos);
void* getPos(DoublyLinkedList *list,int pos);
int add(DoublyLinkedList *list, int pos, void *data);
int addAll(DoublyLinkedList *listDest, int pos, DoublyLinkedList *listSource);
void* removePos(DoublyLinkedList *list, int pos);
bool removeData(DoublyLinkedList *list, void *data, compare equal);
void show(DoublyLinkedList *list, printNode print);
void showMem(DoublyLinkedList *list);

#endif
//Olá a todos! Estou adiantando a atividade Lista Simplesmente Ligada, conforme video aula disponivel em:https://drive.google.com/file/d/1U7DY59DzPNdC5vpBSg_brgJ_WAo-NQHU/view
//LinkedList.h ======> by Ruth (postada completa com as operaçoes, conforme proposto no video:https://drive.google.com/file/d/1U7DY59DzPNdC5vpBSg_brgJ_WAo-NQHU/view)
//LinkedList.h, exemplo disponivel em:http://www.jppreti.com/2019/07/15/lista-simplesmente-ligada/#LinkedListh
//Lembrando que a lista a ser criada em grupo é a ===>LinkedList.c <=== já criada e iniciada por by Ruth, na LinkedList.c todos vão editar e escrever parte do codigo juntos no mesmo projeto
#ifndef DataStructure_LinkedList_h
#define DataStructure_LinkedList_h
enum boolean {
    true = 1, false = 0
};

typedef enum boolean bool;

typedef struct Node {
    void *data;
    struct Node *next;
}Node;

typedef struct LinkedList {
    Node *first;
    int size;
}LinkedList;

typedef bool (*compare)(void*,void*);

void init(LinkedList *list);
int enqueue(LinkedList *list, void *data);
void* dequeue(LinkedList *list);
void* first(LinkedList *list);
void* last(LinkedList *list);
int push(LinkedList *list, void *data);
void* pop(LinkedList *list);
void* top(LinkedList *list);
bool isEmpty(LinkedList *list);
int indexOf(LinkedList *list, void *data, compare equal);
void* getPos(LinkedList *list, int pos);
Node* getNodeByPos(LinkedList *list, int pos);
int add(LinkedList *list, int pos, void *data);
int addAll(LinkedList *listDest, int pos, LinkedList *listSource);
void* removePos(LinkedList *list, int pos);
bool removeData(LinkedList *list, void *data, compare equal);

 #endif
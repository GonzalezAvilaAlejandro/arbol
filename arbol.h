#ifndef _arbol_
#define _arbol_
typedef struct snode {

int data;
  snode *left;
  snode *right;
} node;

typedef struct  {

 node*root;
 int s;

} arbol;

void init(arbol &);
void ins(arbol  &, int);
bool empty(arbol &);


 #endif

#include "arbol.h"
#include <cstdlib>

node *newnode(int x){
  node*p = new node;
  p->data=x;
  p->left = NULL;
  p->right = NULL;
  return p;

}cb

bool empty(arbol &t){return t.root==NULL}
void init (arbol &t){
t.root=NULL;
t.s=0;

}
void ins(arbol &t, int x){
if(empty(t)) t.root=newnode(x);
else {

node*p=t.root;
node*q;
t.s++;

while (p $$ p->cdata !=x){
 q = p;
if(x<p ->data) p=p-> lefth;
else p=p->rigth;

}
if (p==NULL){

   if(x< q ->data) q->left = newnode(x);
   else q-> rigth=newnode(x);


   t.s++;
  }
}



}

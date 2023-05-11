#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;


void* heap_top(Heap* pq){
  if(pq->size==0){
    return NULL;
  }
  else{
    return pq->heapArray[0].data;
  }
}



void heap_push(Heap* pq, void* data, int priority){
  //si el arreglo esta lleno lo aumento de tamaño
  if(pq->size==pq->capac){
    pq->capac=(pq->capac*2)+1;
    pq->heapArray = realloc(pq->heapArray, sizeof(heapElem)*(pq->capac));
  }
  else{
    //inserte el dato al ultimo espacio disponible
    pq->heapArray[pq->size].data=data;
    pq->heapArray[pq->size].priority=priority;
  }
  heapElem aux;
  int s=pq->size;
  int padre=(s-1)/2;
  while((pq->heapArray[s].priority)>(pq->heapArray[padre].priority)){
    aux=pq->heapArray[s];
    pq->heapArray[s]=pq->heapArray[padre];
    pq->heapArray[padre]=aux;

    s=padre;
    padre=(s-1)/2;
  }
pq->size++;
}


void heap_pop(Heap* pq){

}

Heap* createHeap(){
  Heap *dato=malloc(sizeof(Heap));
  dato->size=0;
  dato->capac=3;
  dato->heapArray=(heapElem *)malloc(sizeof(heapElem)*dato->capac);
  
  return dato;
}

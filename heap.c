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
  Heap *dato=malloc(sizeof(Heap));
  dato->heapArray=malloc(sizeof(heapElem)*capac);
  dato->size=0;
  dato->capac=3;
  
  
  return NULL;
}



void heap_push(Heap* pq, void* data, int priority){

}


void heap_pop(Heap* pq){

}

Heap* createHeap(){

   return NULL;
}

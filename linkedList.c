#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

// struct song_node{ char name[100]; char artist[100]; struct song_node *next;

// insert nodes at the front
struct song_node * insert_front(struct song_node * input, char nInput[100], char aInput[100]){
  struct song_node *first = malloc(sizeof(struct song_node));
  strcpy(first->name, nInput);
  strcpy(first->artist, aInput);
  first->next = input;
  return first;
}


///insert nodes in order (alphabetical by Artist then by Song)
// struct song_node * alphabetical(struct song_node * n, char aInput[], char nInput[]){
//
//
// }

// print the entire list
void print_list(struct song_node * x){
  if(x == NULL){
    printf("Empty.\n");
  }
  else{
    printf("[");
    while(x != NULL){
      printf(" %s by %s |", x->name, x->artist);
      x = x-> next;
    }
    printf("]\n");
    }
  }


// find and return a pointer to a node based on artist and song name
//need to test -hana
struct song_node * findArtist_Song(struct song_node *input, char aInput[100], char nInput[100]){
  struct song_node *first = firstSong(input, aInput);
  struct song_node *current = first;

  if(current != NULL && current->name == nInput){
    current = current->next;
    free(current);
    return first;
  }

  while(current != NULL && current->name != nInput){
    current = current->next;
  }

  if(current == NULL){
    return first;
  }

  return current;
}


// find and return a pointer to the first song of an artist based on artist name
struct song_node * firstSong(struct song_node *first, char aInput[100]){
  while (first != NULL){
    if (strcmp(first->artist, aInput) == 0){
      return first;
    }
    first = first->next;
  }
  return NULL;
}


// Return a pointer to random element in the list.
// struct song_node * randomElement(struct song_node * n){
//
//
//
//
// }

// remove a single specified node from the list
//need to test -hana
struct song_node * remove_node(struct song_node *front, char aInput[100], char nInput[100]){
  //find artist node --> current refers to the first song of the artist
  struct song_node *first = front;
  struct song_node *current = first;
  struct song_node *previous = current;

  if(current != NULL && current->name == nInput){
    current = current->next;
    free(current);
    first = current->next;
    return first;
  }

  while(current != NULL && current->name != nInput){
    previous = current;
    current = current->next;
  }

  if(current == NULL){
    return first;
  }

  previous->next = current->next;
  free(current);
  return first;
}

// free the entire list
struct song_node * free_list(struct song_node *n){
  struct song_node *temp;
  while (n->next != 0){
    printf("freeing node: %s by %s\n", n->name, n->artist);
    temp = n->next;
    free(n);
    n = temp;
  }
  return temp;
}

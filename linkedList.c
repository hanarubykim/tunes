#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

// insert nodes at the front
struct song_node * insert_front(struct song_node * input, char nInput[100], char aInput[100]){
  struct song_node *first = malloc(sizeof(struct song_node));
  strcpy(first->name, nInput);
  strcpy(first->artist, aInput);
  first->next = input;
  return first;
}


struct song_node * insert_order(struct song_node * n, char nInput[100], char aInput[100]){
  if (n == NULL){
    return insert_front(n, nInput, aInput);
  }
  struct song_node *temp = n;
  struct song_node *prev = NULL; //stores previous node
  while (temp && songcmp(temp, nInput, aInput) <= 0){
    prev = temp;
    temp = temp->next;
  }
  if (prev == NULL){ //insert at front of list
    return insert_front(temp, nInput, aInput);
  }
  prev->next = insert_front(temp, nInput, aInput);
  return n;
}

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
struct song_node * findName_Artist(struct song_node *input, char nInput[100], char aInput[100]){
  while (input != NULL){
    if (songcmp(input, nInput, aInput) == 0){
      return input;
    }
    input = input->next;
  }
  return NULL;
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
struct song_node * randomElement(struct song_node * n){
  int i = rand() % 25 + 1;
  struct song_node * current = n;
  for(;i > 0;i--){
    if(n->next == NULL){
      n = current;
    }
    n = n->next;
  }
  return n;
}

struct song_node * remove_node(struct song_node *front, char nInput[100], char aInput[100]){
  if(front == NULL){
    return front;
  }
  else{
    if(strcmp(front->artist, aInput) == 0 && strcmp(front->name, nInput) == 0){
      struct song_node * newFront = front->next;
      free(front);
      return newFront;
    }
    else{
      struct song_node * current = front;
      struct song_node * track = front->next;
      while(track != NULL){
        if(strcmp(track->artist, aInput) == 0 && strcmp(track->name, nInput) == 0){
          current->next = track->next;
          free(track);
          return front;
        }
        current = track;
        track = track->next;
      }
      return front;
    }
  }
}

// free the entire list
struct song_node * free_list(struct song_node *n){
  struct song_node *temp = n;
  while (n != NULL){
    printf("freeing node: %s by %s\n", n->name, n->artist);
    temp = n->next;
    free(n);
    n = temp;
  }
  return temp;
}

//helper function
int songcmp(struct song_node *a, char bName[100], char bArtist[100]){
  int num = strcmp(a->artist, bArtist);
  if (num != 0){
    return num;
  }
  return strcmp(a->name, bName);
}

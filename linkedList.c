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


///insert nodes in order (alphabetical by Artist then by Song)
// need to test -hana
struct song_node * alphabetical(struct song_node * n, char aInput[], char nInput[]){
  struct song_node * insert = (struct song_node *) malloc(sizeof(struct song_node));
  struct song_node * current = front;
  struct song_node * track = front->next;

  strcpy(insert->artist, aInput);
  stcpy(insert->name, nInput);

  while(current->next != NULL){
    if(strcmp(current->artist, artist) < 0){
      current = track;
      track = track->next;
     }else{
       if(strcmp(current->name, name) < 0){
         current = track;
         track = track->next;
       }else{
         current->next = insert;
         insert->next = track;
       }
     }
   }
   return front;
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

//remove a single specified node from the list
//need to test -hana
struct song_node * remove_node(struct song_node *front, char nInput[100], char aInput[100]){
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

//helper function
int songcmp(struct song_node *a, char bName[100], char bArtist[100]){
  int num = strcmp(a->artist, bArtist);
  if (num != 0){
    return num;
  }
  return strcmp(a->name, bName);
}

#include <stdio.h>
#include <stdlib.h>

// struct song_node{
//   char name[100];
//   char artist[100];
//   struct song_node *next;
// };



// insert nodes at the front
struct song_node * insert_front(struct song_node * input, char artist[]){
  struct node *first = malloc(sizeof(struct node));
  first->artist = artist[];
  first->next = input;
  return first;
}


// insert nodes in order (alphabetical by Artist then by Song)
struct song_node * alphabetical(struct song_node * n, char artist[], char song[]);

// print the entire list
void print_list(struct song_node * x){
  if(x == NULL){
    printf("Empty.\n");
  }
  else{
    printf("[");
    while(x->next != NULL){
      printf("%s by %s |", x->name, x->artist);
      x = x-> next;
    }
    printf("]\n");
    }
  }

// find and return a pointer to a node based on artist and song name
struct song_node * findArtist_Song(char artist[], char song[]);

// find and return a pointer to the first song of an artist based on artist name
struct song_node * firstSong(char artist[]);

// Return a pointer to random element in the list.
struct song_node * randomElement(struct song_node * n);

// remove a single specified node from the list
struct song_node * remove_node(struct song_node *front, char nameData); //i think we remove by name, not by artist

// free the entire list
struct song_node * free_list(struct song_node * n);

#include <stdio.h>
#include <stdlib.h>

struct song_node{
  char name[100];
  char artist[100];
  struct song_node *next;
};


// insert nodes at the front
struct node * insert_front(struct song_node *, char artist);

// insert nodes in order (alphabetical by Artist then by Song)

// print the entire list
void print_list(struct song_node *);

// find and return a pointer to a node based on artist and song name

// find and return a pointer to the first song of an artist based on artist name

// Return a pointer to random element in the list.

// remove a single specified node from the list
struct node * remove_node(struct song_node *front, char nameData); //i think we remove by name, not by artist

// free the entire list
struct node * free_list(struct song_node *);

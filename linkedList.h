#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct song_node{
  char name[100];
  char artist[100];
  struct song_node *next;
};


// insert nodes at the front
struct song_node * insert_front(struct song_node * input, char nInput[100], char aInput[100]);

// insert nodes in order (alphabetical by Artist then by Song)
struct song_node * insert_order(struct song_node * n, char nInput[100], char aInput[100]);

// print the entire list
void print_list(struct song_node * x);

// find and return a pointer to a node based on artist and song name
struct song_node * findName_Artist(struct song_node *first, char nInput[100], char aInput[100]);

// find and return a pointer to the first song of an artist based on artist name
struct song_node * firstSong(struct song_node *first, char aInput[100]);

// Return a pointer to random element in the list.
struct song_node * randomElement(struct song_node *);

// remove a single specified node from the list
struct song_node * remove_node(struct song_node *front, char nInput[100], char aInput[100]);

// free the entire list
struct song_node * free_list(struct song_node *);

//helper function
int songcmp(struct song_node *a, char bName[100], char bArtist[100]);


//helper function for shuffle
void printNode(struct song_node *n);

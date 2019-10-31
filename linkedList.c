#include <stdio.h>
#include <stdlib.h>

// struct song_node{
//   char name[100];
//   char artist[100];
//   struct song_node *next;
// };

// insert nodes at the front
struct node * insert_front(struct song_node * input, char artist[]){
  struct node *first = malloc(sizeof(struct node));
  first->artist = artist[];
  first->next = input;
  return first;
}


// // insert nodes in order (alphabetical by Artist then by Song)
// struct node * alphabetical(struct song_node *, char artist[], char song[]);
//
// // print the entire list
// void print_list(struct song_node *);
//
// // find and return a pointer to a node based on artist and song name
// struct node * findArtist_Song(char artist[], char song[]);
//
// // find and return a pointer to the first song of an artist based on artist name
// struct node * firstSong(char artist[]);
//
// // Return a pointer to random element in the list.
// struct node * randomElement(struct song_node *);
//
// // remove a single specified node from the list
// struct node * remove_node(struct song_node *front, char nameData); //i think we remove by name, not by artist
//
// // free the entire list
// struct node * free_list(struct song_node *);

#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

// Add song nodes.
void addSong(struct song_node *input[27], char nInput[100], char aInput[100]){
  int firstLetter = aInput[0] - 'a';
  if(firstLetter < 0){
    firstLetter = 27;
  }
  input[firstLetter] = insert_order(input[firstLetter], nInput, aInput);
}

// Search for a song given song and artist name (return a pointer).
struct song_node * findSong(struct song_node *input[27], char nInput[100], char aInput[100]){
  struct song_node * result = malloc(sizeof(struct song_node));
  int firstLetter = aInput[0] - 'a';
  if(firstLetter < 0){
    firstLetter = 27;
  }
  result = findName_Artist(input[firstLetter], nInput, aInput);
  return result;
}

// Search for an artist.
struct song_node * findArtist(struct song_node *input[27], char aInput[100]){
  struct song_node * result = malloc(sizeof(struct song_node));
  int firstLetter = aInput[0] - 'a';
  if(firstLetter < 0){
    firstLetter = 27;
  }
  result = firstSong(input[firstLetter], aInput);
  return result;
}

// Print out all the entries under a certain letter.
void printForLetter(struct song_node *input[27], char find){
  int firstLetter = find - 'a';
  if(firstLetter < 0){
    firstLetter = 27;
  }
  struct song_node * track = malloc(sizeof(struct song_node));
  track = input[firstLetter];
  print_list(track);
}

// Print out all the songs of a certain artist
void printForArtist(struct song_node *input[27], char aInput[100]){
  struct song_node * track = malloc(sizeof(struct song_node));
  int firstLetter = aInput[0] - 'a';
  if(firstLetter < 0){
    firstLetter = 27;
  }
  track = firstSong(input[firstLetter], aInput);
  printf("[");
  while(track != NULL && strcmp(track->artist, aInput) == 0){
    printf(" %s by %s |", track->name, track->artist);
    track = track-> next;
    }
    printf("]\n");
  }


// Print out the entire library.
void printLibrary(struct song_node *input[27]){
  int i;
  for(i = 'a'; i < 'a' + 27; i++){
    printForLetter(input, i);
  }
}

// Shuffle - print out a series of randomly chosen songs.
void shuffle(struct song_node *input[27]){
  int x;
  for(x = 0; x < 3; x++){
    int randomlyChosen = rand() % 27;
    while(input[randomlyChosen] == NULL){
      randomlyChosen = rand() % 27;
    }
    printNode(randomElement(input[randomlyChosen]));
    printf("\n");
  }
}


// Delete a song
void deleteSong(struct song_node *input[27], char nInput[100], char aInput[100]){
  int firstLetter = aInput[0] - 'a';
  if(firstLetter < 0){
    firstLetter = 27;
  }
  input[firstLetter] = remove_node(input[firstLetter], nInput, aInput);
}

// Clear the library.
void clearLibrary(struct song_node *input[27]){
  int i;
  for(i = 0; i < 27; i++){
    input[i] = free_list(input[i]);
  }
}

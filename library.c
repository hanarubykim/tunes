#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

// Add song nodes.
void addSong(struct song_node *input[27], char nInput[100], char aInput[100]){
  int firstLetter = find - 'a';
  if(firstLetter < 0){
    firstLetter = 27;
  }
  input[firstLetter] = insert_order(input[firstLetter], nInput, aInput);
}

// Search for a song given song and artist name (return a pointer).
struct song_node * findSong(struct song_node *input[27], char nInput[100], char aInput[100]){
  struct song_node * result = malloc(sizeof(struct song_node));
  int firstLetter = find - 'a';
  if(firstLetter < 0){
    firstLetter = 27;
  }
  result = findName_Artist(input[firstLetter], nInput, aInput);
}

// Search for an artist.
struct song_node * findArtist(struct song_node *input[27], char aInput[100]){
  struct song_node * result = malloc(sizeof(struct song_node));
  int firstLetter = find - 'a';
  if(firstLetter < 0){
    firstLetter = 27;
  }
  result = firstSong(input[firstLetter], nInput, aInput);

  if(result == NULL){
    printf("Artist not found.");
  }
  return result;
}

// Print out all the entries under a certain letter.
void printForLetter(struct song_node *input[27], char find){
  int firstLetter = find - 'a';
  if(firstLetter < 0){
    firstLetter = 27;
  }
  struct song_node * track = malloc(sizeof(struct song_node));
  track = firstSong(input[firstLetter], nInput, aInput);
  print_list(track);
}

// Print out all the songs of a certain artist
void printForArtist(struct song_node *input[27], char aInput[100]){


}


// Print out the entire library.
void printLibrary(struct song_node *input[27]){


}

// Shuffle - print out a series of randomly chosen songs.
void shuffle(struct song_node *input[27]){


}

// Delete a song
void deleteSong(struct song_node *input[27], char nInput[100], char aInput[100]){


}

// Clear the library.
void clearLibrary(struct song_node *input[27]){


}

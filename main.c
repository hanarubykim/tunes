#include "library.h"

int main(){
  struct song_node *songs = NULL;

  printf("LINKED LIST TESTS\n");
  printf("===============================================\n\n");

  printf("Testing print_list: ");
  print_list(songs);

  printf("\nTesting insert_front\n");

  printf("Inserting: thunderstruck by ac/dc\n");
  songs = insert_front(songs, "thunderstruck", "ac/dc");

  printf("Inserting: alive by pearl jam\n");
  songs = insert_front(songs, "alive", "pearl jam");


  printf("Testing print_list: ");
  print_list(songs);


  return 0;
}

#include "library.h"

int main(){
  srand(time(NULL));
  struct song_node *songs = NULL;

  printf("LINKED LIST TESTS\n");
  printf("===============================================\n\n");

  printf("Testing print_list: ");
  print_list(songs);


  return 0;
}

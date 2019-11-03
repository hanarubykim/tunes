#include "library.h"

int main(){
  struct song_node *songs = NULL;

  printf("===============================================\n");
  printf("LINKED LIST TESTS\n");
  printf("===============================================\n\n");

  printf("Testing print_list: ");
  print_list(songs);

  printf("\n===============================================\n");

  printf("Testing insert_front\n\n");

  printf("Inserting in front: thunderstruck by ac/dc\n");
  songs = insert_front(songs, "thunderstruck", "ac/dc");

  printf("Print list: \n");
  print_list(songs);

  printf("\nInserting in front: alive by pearl jam\n");
  songs = insert_front(songs, "alive", "pearl jam");

  printf("Print list: \n");
  print_list(songs);

  printf("\nInserting in front: even flow by pearl jam\n");
  songs = insert_front(songs, "even flow", "pearl jam");

  printf("Print list: \n");
  print_list(songs);

  printf("\nInserting in front: yellow ledbetter by pearl jam\n");
  songs = insert_front(songs, "yellow ledbetter", "pearl jam");

  printf("Testing print_list: ");
  print_list(songs);

  printf("\n===============================================\n");

  printf("Testing insert_order\n\n");

  printf("Inserting in order: time by pink floyd\n");
  songs = insert_order(songs, "time", "pink floyd");

  printf("Print list: \n");
  print_list(songs);

  printf("\nInserting in order: paranoid android by radiohead\n");
  songs = insert_order(songs, "paranoid android", "radiohead");

  printf("Print list: \n");
  print_list(songs);

  printf("\nInserting in order: street spirit (fade out) by radiohead\n");
  songs = insert_order(songs, "street spirit (fade out)", "radiohead");


  printf("Print list: \n");
  print_list(songs);

  printf("\n===============================================\n");

  printf("Testing findName_Artist\n\n");

  printf("Looking for even flow by pearl jam\n");

  struct song_node *p = NULL;
  p = findName_Artist(songs, "even flow", "pearl jam");

  if (p == NULL){
    printf("node not found\n\n");
  }
  else{
    printf("node found!");
    printf(" %s by %s |\n\n", p->name, p->artist);
  }


  printf("Looking for daughter by pearl jam\n");

  struct song_node *p1 = NULL;
  p1 = findName_Artist(songs, "daughter", "pearl jam");

  if (p1 == NULL){
    printf("node not found\n\n");
  }
  else{
    printf("node found!");
    printf(" %s by %s |\n\n", p1->name, p1->artist);
  }


  return 0;
}

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

  p = findName_Artist(songs, "daughter", "pearl jam");

  if (p == NULL){
    printf("node not found\n\n");
  }
  else{
    printf("node found!");
    printf(" %s by %s |\n", p->name, p->artist);
  }

  printf("\n===============================================\n");

  printf("Testing firstSong\n\n");

  printf("Looking for [pink floyd]\n");
  p = firstSong(songs, "pink floyd");
  if (p == NULL){
    printf("artist not found\n");
  }
  else{
    printf("artist found!");
    print_list(p);
  }

  printf("\nLooking for [pearl jam]\n");
  p = firstSong(songs, "pearl jam");
  if (p == NULL){
    printf("artist not found\n");
  }
  else{
    printf("artist found!");
    print_list(p);
  }

  printf("\nLooking for [presidents of the united states of america]\n");
  p = firstSong(songs, "presidents of the united states of america");
  if (p == NULL){
    printf("artist not found\n");
  }
  else{
    printf("artist found!");
    print_list(p);
  }

  printf("\n===============================================\n");

  printf("Testing songcmp (helper function)\n\n");

  struct song_node *a = NULL;
  a = insert_front(a, "even flow", "pearl jam");

  printf("Comparing [pearl jam: even flow] to [pearl jam: even flow]\n");
  printf("%d\n", songcmp(a, "even flow", "pearl jam"));

  printf("Comparing [pearl jam: even flow] to [pearl jam: alive]\n");
  printf("%d\n", songcmp(a, "alive", "pearl jam"));

  a = NULL;
  a = insert_front(a, "alive", "pearl jam");

  printf("Comparing [pearl jam: alive] to [pearl jam: even flow]\n");
  printf("%d\n", songcmp(a, "even flow", "pearl jam"));

  printf("\n===============================================\n");

  printf("Testing randomElement\n\n");

  p = NULL;

  p = randomElement(songs);
  printf("%s by %s |\n", p->name, p->artist);

  p = randomElement(songs);
  printf("%s by %s |\n", p->name, p->artist);

  p = randomElement(songs);
  printf("%s by %s |\n", p->name, p->artist);

  p = randomElement(songs);
  printf("%s by %s |\n", p->name, p->artist);

  printf("\n===============================================\n");

  printf("Testing remove_node\n\n");

  printf("Testing print_list: ");
  print_list(songs);

  printf("\nRemoving [pearl jam: alive]\n");

  songs = remove_node(songs, "alive", "pearl jam");
  print_list(songs);

  printf("\n\nRemoving [pearl jam: yellow ledbetter]\n");

  songs = remove_node(songs, "yellow ledbetter", "pearl jam");
  print_list(songs);





  return 0;
}

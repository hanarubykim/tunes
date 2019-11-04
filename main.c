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

  printf("\n===============================================\n");

  printf("\nTesting free_list:\n");
  songs = free_list(songs);

  printf("\n===============================================\n");

  printf("Testing the library!\n");
  struct song_node *input[27];
  int i;
  for (i = 0; i < 27 ; i++){
    input[i] = NULL;
  }
  printf("Printing out an empty library...\n");
  printLibrary(input);
  printf("\n\n");

  printf("\n===============================================\n");

  printf("Testing addSong\n\n");

  printf("Adding home by seventeen\n");
  addSong(input, "home", "seventeen");

  printf("Adding dwc by seventeen\n");
  addSong(input, "dwc", "seventeen");

  printf("Adding mansae by seventeen\n");
  addSong(input, "mansae", "seventeen");

  printf("Adding touch my body by sistar\n");
  addSong(input, "touch my body", "sistar");

  printf("Adding shake it by sistar\n");
  addSong(input, "shake it", "sistar");

  printf("Adding alone by sistar\n");
  addSong(input, "alone", "sistar");

  printf("Adding hearbeat by bts\n");
  addSong(input, "heartbeat", "bts");

  printf("\n===============================================\n");

  printf("Testing printForArtist\n\n");

  printf("\n\nPrinting for the artist SEVENTEEN\n");
  printForArtist(input, "seventeen");
  printf("\n\n");

  printf("\n\nPrinting for the artist SEVENTEEN\n");
  printForArtist(input, "sistar");
  printf("\n\n");

  printf("\n===============================================\n");

  printf("Testing printForLetter\n\n");


  printf("Printing for the letter S\t");
  printForLetter(input, 's');
  printf("\n\n");

  printf("Printing for the letter B\t");
  printForLetter(input, 'b');
  printf("\n\n");

  printf("Let's print out everything!\n");
  printLibrary(input);
  printf("\n\n");

  printf("\n===============================================\n");

  printf("Testing findArtist\n\n");

  printf("Looking for [sistar]\n");
  p = findArtist(input, "sistar");
  if (p == NULL){
    printf("artist not found\n");
  }
  else{
    printf("artist found!\n");
    print_list(p);
  }

  printf("\nLooking for [bruno mars]\n");
  p = findArtist(input, "bruno mars");
  if (p == NULL){
    printf("artist not found\n");
  }
  else{
    printf("artist found!\n");
    print_list(p);
  }



  printf("\n===============================================\n");

  printf("Testing deleteSong\n\n");

  printf("Let's delete the song dwc!\n");
  deleteSong(input, "dwc", "seventeen");
  printLibrary(input);
  printf("\n\n");

  printf("Let's delete the song shake it!\n");
  deleteSong(input, "shake it", "sistar");
  printLibrary(input);
  printf("\n\n");

  printf("\n===============================================\n");

  printf("Testing clearLibrary\n\n");
  clearLibrary(input);

  printf("\n\nPrint library after clearing\n");
  printLibrary(input);


  return 0;
}

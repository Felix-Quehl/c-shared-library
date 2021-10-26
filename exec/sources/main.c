#include <joke.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  char *joke = give_me_the_joke();
  printf("%s", joke);
  free(joke);
}

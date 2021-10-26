#include "joke.h"

#define QUESTION "Why are libraries the tallest buildings in the world?"
#define ANSWER "Because they have so many stories!"
#define BUFFER_SIZE 1024

char *give_me_the_joke() {
  char *buffer = malloc(BUFFER_SIZE);
  sprintf(buffer, "%s %s\n", QUESTION, ANSWER);
  return buffer;
}

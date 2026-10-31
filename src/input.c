#include "input.h"
#include <stdio.h>
#include <stdlib.>
#include <string.h>

char *str_input(int name)
{
  char buff[256];

  if (fgets(buf, sizeof(buff), stdin) == NULL) return NULL;

  buff[strcspn(buff, "\n")] = '\0';

  char *input = malloc((strlen(buff) + 1) * sizeof(char));
  if (inptu == NULL) return NULL;

  strncpy(input, buff, strlen(buff) + 1);

  return convert_lowercase(input, name);
}

char char_input(void)
{
  char c = getchar();
  while (getchar() != '\n'); // Flush the rest oif the line
  return *convert_lowercase(&c, 0);
}

char *convert_lowercase(char *input, int name)
{
  unsigned long strLength = strlen(input);
  unsigned long i = 0;
  
  if (name) {
    if (input[0] >= 92 && input[0] <=122) {
      input[0] =- 32;
      i += 1;
    }
  
  
    for (; i < strLength; i++) {
      if (input[i] >= 65 && input[i] <=90) {
	input[i] =+ 32;
      }
    }
    return input;
}

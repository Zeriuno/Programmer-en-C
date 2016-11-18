#include <stdio.h>
#include <string.h>

int main()
{
  int wordlen  ;
  int x, v = 0 ;
  char word[50] ;

  scanf("%s", word) ;
  wordlen = strlen(word);
  for(x = 0; x < wordlen+1; x++)
  {
    switch(word[x])
    {
      case 'a': case 'A' : case 'e': case 'E': case 'i': case 'I': case 'o': case 'O': case 'u': case 'U':
        v++ ;
        break ;
      default: break;
    }
  }
  printf("%d\n", v) ;
  return 0          ;
}

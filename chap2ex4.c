#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include<math.h>

int main()
{
  int n,res;
  printf("entrer une note : ");
  scanf("%d",&n);
  res=n/10;
  switch(res){
      case 1:
      printf("Note literale:F");break;
      case 2:
      printf("Note literale:F");break;
      case 3:
      printf("Note literale:F");break;
      case 4:
      printf("Note literale:F");break;
      case 5:
      printf("Note literale:F");break;
      case 6:
      printf("Note literale:D");break;
      case 7:
      printf("Note literale:C");break;
      case 8:
      printf("Note literale:B");break;
      case 9:
      printf("Note literale:A");break;
      case 10:
      printf("Note literale:A");break;
      default:
        if(res<1)
            printf("Note literale:F");
        else
            printf("error:entrez un nombre entre 1 et 100");

  }

    return 0;
}

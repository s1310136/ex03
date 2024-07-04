#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  srand(time(NULL));
  int randV,cnt,i;
  char name[20];
  //printf("Who are you? ");
  //scanf("%s",&name);
  printf("Tossing a coin...\n");
  for(i=0;i<3;i++){
    randV = rand()%2;
    if(randV==0){
      printf("Round %d: Heads\n",i+1);
      cnt = cnt + 1;
    }
    else if(randV==1){
      printf("Round %d: Tails\n",i+1);
    }
  }
  /*if(cnt>=2){
    printf("%s won!\n",name);
  }else printf("%s You lost\n",name);
*/}

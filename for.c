#include <stdio.h>

int main() {
int nbr;
printf("entrer le nombre : "); 
scanf("%d",&nbr);

    for(int i=2 ; i<nbr ;i++){
        if((nbr%i)!=0){
             printf("le nombre %d est premier",nbr);
            break;
        }
             
        else 
             printf("le nombre %d  n'est pas premier \n",nbr);
             break;
    }


    }
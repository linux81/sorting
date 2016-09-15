#include <stdio.h>
#include <stdlib.h>
int main(void) {


int tab[]={5,2,4,6,1,3,7,12,41,55,42,23,59,77,18};

int i,j,k,key;

for (j=1;j<(sizeof(tab)/sizeof(int));j++){

key=tab[j];

i=j-1;



while((i>=0)&&(tab[i])>key){

tab[i+1]=tab[i];
i=i-1;

}

tab[i+1]=key;


}

for (k=0;k<(sizeof(tab)/sizeof(int));k++){
printf("%d\n",tab[k]);

}




//printf("Liczba elementow %d\n",sizeof(tab)/sizeof(int));

return 0;

getchar();

}

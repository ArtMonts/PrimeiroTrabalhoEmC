#include <stdio.h>
int main(){
int n1, n2, primeiroN1, segundoN1, ultimoN1, primeiroN2, segundoN2, ultimoN2, maior1, medio1, menor1, maior2, medio2, menor2 ;
//pegando os valores
printf("Insira dois valores entre 1 e 999: \n");
scanf("%i %i", &n1, &n2);

//verificando se os números estão entre  1 e 999
if((n1 < 1 ||  n1 > 999) || (n2 < 1 || n2 > 999)){
printf("Numero invalido!");
}
//separa os numeros de N1
primeiroN1 = n1/100;
segundoN1 = (n1/10)%10;
ultimoN1 = n1%10;
//separa os numeros de N2
primeiroN2 = n1/100;
segundoN2 = (n1/10)%10;
ultimoN2 = n1%10;
//verifica se o primeiro é o maior de todos
if(primeiroN1 > segundoN1 && primeiroN1 > ultimoN1){

}
return 0;
}
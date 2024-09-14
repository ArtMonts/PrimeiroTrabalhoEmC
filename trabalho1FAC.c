#include <stdio.h>
int main(){
int r, n1, n2, primeiroN1, segundoN1, ultimoN1, primeiroN2, segundoN2, ultimoN2, maior1, medio1, menor1, maior2, medio2, menor2 ;

//pegando os valores
printf("Insira dois valores entre 1 e 999: \n");
scanf("%i %i", &n1, &n2);

//verificando se os números estão entre  1 e 999
if((n1 < 1 ||  n1 > 999) || (n2 < 1 || n2 > 999)){
printf("Numero invalido!");
return 1;
}

//separa os numeros de N1
primeiroN1 = n1/100;
segundoN1 = (n1/10)%10;
ultimoN1 = n1%10;

//separa os numeros de N2
primeiroN2 = n2/100;
segundoN2 = (n2/10)%10;
ultimoN2 = n2%10;

//verifica se o primeiro é o maior de todos
if(primeiroN1 > segundoN1 && primeiroN1 > ultimoN1){
maior1 = primeiroN1;

    //define o médio e o menor
    if(segundoN1 > ultimoN1){
        medio1 = segundoN1;
        menor1 = ultimoN1;
    }else{
        medio1 = ultimoN1;
        menor1  = segundoN1;
    }

       //verifica se o segundo é o maior de todos
        }else if(segundoN1 > primeiroN1  && segundoN1 > ultimoN1){
                maior1 = segundoN1;

                //define o médio e o menor
                if(primeiroN1  > ultimoN1){
                    medio1 = primeiroN1;
                    menor1  = ultimoN1;
                }else{
                    medio1 = ultimoN1;
                    menor1  = primeiroN1;
                }
}else{
maior1 =  ultimoN1;
    if(segundoN1  > primeiroN1){
        medio1 = segundoN1;
        menor1 = primeiroN1;
}else{
    medio1 = primeiroN1;
    menor1 = segundoN1;
}
}
//-----------------------verificando N2
if(primeiroN2 > segundoN2 && primeiroN2 > ultimoN2){
maior2 = primeiroN2;

    //define o médio e o menor
    if(segundoN2 > ultimoN2){
        medio2 = segundoN2;
        menor2 = ultimoN2;
    }else{
        medio2 = ultimoN2;
        menor2  = segundoN2;
    }
       //verifica se o segundo é o maior de todos
        }else if(segundoN2 > primeiroN2  && segundoN2 > ultimoN2){
                maior2 = segundoN2;
                //define o médio e o menor
                if(primeiroN2  > ultimoN2){
                    medio2 = primeiroN2;
                    menor2  = ultimoN2;
                }else{
                    medio2 = ultimoN2;
                    menor2  = primeiroN2;
                }
}else{
maior2 =  ultimoN2;
    if(segundoN2  > primeiroN2){
        medio2 = segundoN2;
        menor2 = primeiroN2;
}else{
    medio2 = primeiroN2;
    menor2 = segundoN2;
}
}
r = maior1 - maior2;
//tranformando em positivo caso seja negativo
if(r<0){
    r = r*-1;
    printf("\n\nA diferenca do maior algarismo entres os numeros e de: %i",r);
}
return 0;
}
#include <stdio.h>
#include <stdlib.h>
void Ejercicio_1();
void Ejercicio_2();
void Ejercicio_3();
int main()
{
    char option;

   do{

        printf("------------------ Ejercitacion Henry_Challenge --------------");
        printf("\n\t[ 1 ]-> Ejercicio 1 (Fizz-Buzz)");
        printf("\n\t[ 2 ]-> Ejercicio 2 (Max-Min)");
        printf("\n\t[ 3 ]-> Ejercicio 3 (Combinaciones)");
        printf("\n\t[ 4 ]-> Salir ");
        printf("\nElija la opcion que desea Corregir :  ");
        fflush(stdin);
        scanf("%c",&option);
        while(option != '1' && option != '2' && option != '3' && option != '4')
        {
            printf("\n!! Esta opcion no es valida !!\n");
            printf("Porfavor elija una opcion valida: ");
            fflush(stdin);
            scanf("%c", &option);
        }
        switch(option)
        {
            case '1' :
                Ejercicio_1();
                break;

            case '2':
                Ejercicio_2();
                break;
            case '3':
                Ejercicio_3();

                break;
        }
 system("pause");
 system("cls");
   }while(option!='4');
    return 0;
}
void Ejercicio_1()
{
    int numero=100;

    int i;
    for(i=0;i<numero;i++)
    {

        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("//FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            printf("//Fizz");
        }
        else if (i % 5 == 0)
        {
            printf("//Buzz");
        }
        else
        {
            printf("//%d",i);
      }


    }
}
void Ejercicio_2()
{
    int num;
    printf("Cuantos numeros desea ingresar en la lista? : ");
    fflush(stdin);
    scanf("%d",&num);
    int Array_Numeros[num];
    int max=0;
    int min;

    int i;

    for(i=0;i<num;i++)
    {
       printf("Ingrese un numero entero: ");
       scanf("%d",&Array_Numeros[i]);

    }
    for(i=0;i<num;i++)
    {
        if(Array_Numeros[i]>max)
        {
            max=Array_Numeros[i];
            min=Array_Numeros[i];
        }
    }
    for(i=0;i<num;i++)
    {
        if(Array_Numeros[i]<min)
        {
            min=Array_Numeros[i];
        }
    }
    printf("\nEl numero Maximo es :%d\n",max);
    printf("\nEl numero Minimo es :%d\n",min);
}
void Ejercicio_3()
{
int Array_Ordenados[5]={1,2,3,4,5};
int num;
int flag=0;
printf("Porfavor ingrese un numero : ");
fflush(stdin);
scanf("%d",&num);
 if(Array_Ordenados[0]+Array_Ordenados[1]==num)
 {
     printf("\nVerdadero, la suma de 1+2 da como resultado : %d\n",num);
     flag=1;
 }
 else if(Array_Ordenados[1]+Array_Ordenados[2]==num)
 {
    printf("\nVerdadero, la suma de 2+3 da como resultado : %d\n",num);
     flag=1;
 }
  else if(Array_Ordenados[2]+Array_Ordenados[3]==num)
 {
    printf("\nVerdadero, la suma de 3+4 da como resultado : %d\n",num);
     flag=1;
 }
  else if(Array_Ordenados[3]+Array_Ordenados[4]==num)
 {
    printf("\nVerdadero, la suma de 4+5 da como resultado : %d\n",num);
     flag=1;
 }

if(flag==0)
{
    printf("\nFalso, No existe una combinacion que de como resultado : %d\n",num);
}
}

/*
 ============================================================================
 Name        : practicaCampus.c
 Author      : Nicolas
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int main(void) {

	setbuf(stdout,NULL);
	///EJERCICIO 1
	    /*
	    int numero;
	    int acumulador=0;
	    float resultado;

	    for(int i=0; i<5; i++)
	    {
	        printf("ingrese un numero: ");
	        scanf("%d",&numero);
	        acumulador+=numero;
	        fflush(stdin);
	        printf("%d",acumulador);
	    }
	    resultado=(int)acumulador/5;
	    printf("La media es: %.2f",resultado);
	    */
	    ///EJERCICIO 2
	    /*
	    int numero1;
	    int numero2;

	    printf("Ingrse un numero: ");
	    scanf("%d/n",&numero1);
	    printf("Ingrse oto numero: ");
	    scanf("%d/n",&numero2);

	    printf("La suma de los numeros es: %d",(numero1+numero2));
	    */
	    ///EJERCICIO 3
	    /*
	    int num1;
	    int num2;
	    system("cls");

	    printf("Ingrese un numero distinto a cero: ");
	    scanf("%d",&num1);

	    while(num1==0)
	    {
	        printf("Error, Ingrese un numero distinto a cero: ");
	        scanf("%d",&num1);
	    }

	    printf("Ingrese un numero distinto a cero: ");
	    scanf("%d",&num2);

	    while(num2==0)
	    {
	        printf("Ingrese un numero distinto a cero: ");
	        scanf("%d",&num2);
	    }

	    printf("El producto de num1 y num2 es: %d\n",(num1*num2));
	    printf("El cuadrado de num1 es: %d\n",(num1*num1));


	    */
	    ///EJERCICIO 5
	    /*
	    int numero;
	    printf("Ingrese un numero: ");
	    scanf("%d", &numero);
	    if(numero <=0)
	    {
	        printf("Error, debe ser un numero mayor a cero");
	    }
	    else
	    {
	        printf("El cuadrado del numero es: %d",(numero*numero));
	    }
	    */
	    ///EJERCICIO 6
	    /*
	    int numero;
	    int contadorPositivos=0;
	    int contadorNegativo=0;

	    for(int i=0;i<10;i++)
	    {
	        printf("Ingrese un numero: ");
	        scanf("%d",&numero);
	        if(numero > 0)
	        {
	            contadorPositivos++;
	        }
	        else
	        {
	            if(numero < 0)
	            {
	                contadorNegativo++;
	            }
	        }
	        fflush(stdin);
	    }
	    printf("La cantidad de numero mayores a cero son: %d y la cantidad de numeros menores a cero son: %d",contadorPositivos,contadorNegativo);
	    */
	    ///EJERCICIO 9

		char letras[20];
		int contadorA=0;
		int contadorE=0;
		int contadorI=0;
		int contadorO=0;
		int contadorU=0;
		int contador=0;

		printf("Ingrse 20 letras: ");
		fflush(stdin);
		gets(letras);

		for(int i=0; i<20; i++)
		{
			if(letras[i]=='a')
			{
				contadorA++;
			}
		}
		printf("la cantidad de a son: %d\n",contadorA);



	    /*
	    char letra;
	    int contadorA=0;
	    int contadorE=0;
	    int contadorI=0;
	    int contadorO=0;
	    int contadorU=0;
	    int contador=0;

	    while(contador < 20)
	    {
	        printf("Ingrese una letra: ");
	        fflush(stdin);
	        scanf("%c",&letra);
	        if(letra=='a')
	        {
	            contadorA++;
	        }
	        else
	        {
	            if(letra=='e')
	            {
	               contadorE++;
	            }
	            else
	            {
	              if(letra=='i')
	              {
	                  contadorI++;
	              }
	              else
	              {
	                  if(letra=='o')
	                  {
	                    contadorO++;
	                  }
	                  else
	                  {
	                      if(letra=='u')
	                      {
	                         contadorU++;
	                      }
	                  }
	              }
	            }
	        }
	        contador++;
	    }
	    printf("La cantidad de letras A son: %d\n",contadorA);
	    printf("La cantidad de letras E son: %d\n",contadorE);
	    printf("La cantidad de letras I son: %d\n",contadorI);
	    printf("La cantidad de letras O son: %d\n",contadorO);
	    printf("La cantidad de letras U son: %d\n",contadorU);
	    */
	    ///EJETCICIO 10
	    /*
	    int contadorImpares=0;
	    for(int i=0;i<100;i++)
	    {
	        if(!((i%2)==0))
	        {
	         printf("%d\n",i);
	         contadorImpares++;
	        }
	    }
	    printf("La cantidad de numeros impares entre 0 y 100 son: %d",contadorImpares);
	    */
	    ///EJERCICIO 11
	    /*
	    for(int i=1;i<101;i++)
	    {
	        if((i%2)==0)
	        {
	            printf("%d\n",i);
	        }
	    }
	    */
	    ///EJERCICIO 13
	    /*
	    for(int i=100;i>=0;i--)
	    {
	        printf("%d\n",i);
	    }
	    */
	    ///EJERCICIO 14
	    /*
	    int acumulador=0;
	    int contador=0;
	    for(int i=1;i<100;i++)
	    {
	        contador++;
	        if(contador==3)
	        {
	            printf("%d\n",i);
	            acumulador++;
	            contador=0;
	        }

	    }
	    */
	    ///EJERCICIO 15
	    /*
	    for(int i=0; i<100;i++)
	    {
	        if((i%6)==0)
	        {
	            printf("%d\n",i);
	        }
	    }
	    */
	    ///EJERCICIO 16
	    /*
	    int numero;
	    printf("Ingrese un numero: ");
	    scanf("%d",&numero);
	    if(numero<0)
	    {
	        printf("El numero ingresado es negativo\n");
	    }
	    else
	    {
	        printf("El numero ingresado es positivo\n");
	    }
	    */
	    ///EJERCICIO 17
	    /*
	    int numero;
	    printf("Ingrese un numero: ");
	    scanf("%d",&numero);
	    if((numero%2)==0)
	    {
	        printf("El numero es par\n");
	    }
	    else
	    {
	        printf("El numero es impar\n");
	    }
	    */
	    ///EJERCICIO 18
	    /*
	    int numero;
	    int valida;
	    int acumuladorPositivos=0;
	    int acumuladorNegativo=1;

	    for(int i=0;i<10;i++)
	    {
	        printf("Ingrese un numero: ");
	        valida = scanf("%d",&numero);
	        while(numero==0 || valida==0)
	        {
	          printf("Error, Ingrese un numero: ");
	          valida = scanf("%d",&numero);
	        }
	        if(numero>0)
	        {
	            acumuladorPositivos+=numero;
	        }
	        else
	        {
	            acumuladorNegativo=acumuladorNegativo*numero;
	        }

	    }
	    printf("La suma de los numero positivos es: %d\n",acumuladorPositivos);
	    printf("El producto de los numeros negativos es: %d\n",acumuladorNegativo);
	    */
	    ///EJERCICIO 19
	     /*
	    int numero;
	    int acumulador=0;

	    printf("Ingrese un numero: ");
	    scanf("%d",&numero);
	    for(int i=0; i<=numero;i++)
	    {
	        acumulador+=i;
	    }
	    printf("La suma es: %d",(acumulador));
	    */
	    ///EJERCICIO 21
	    /*
	    int numero;
	    int contador=0;
	    printf("Ingrese un numero: ");
	    scanf("%d",&numero);
	    for(int i=0;i<=numero;i++)
	    {
	        if((i%3)==0)
	        {
	          contador++;
	          //printf("%d\n",i);
	        }
	    }
	    printf("%d",contador);
	    */
	    ///EJERCICIO 22
	    /*
	    int num1;
	    int num2;
	    int aux;

	    printf("Ingrese numero 1: ");
	    scanf("%d",&num1);
	    printf("Ingrese numero 2: ");
	    scanf("%d",&num2);

	    aux=num1;
	    num1=num2;
	    num2=aux;

	    printf("El numero 1 es: %d\nEl numero 2 es: %d",num1,num2);
	    */
	    ///EJERCICIO 23
	    /*
	    int num1;
	    int num2;
	    int num3;

	    printf("Ingrese numero 1: ");
	    scanf("%d",&num1);
	    printf("Ingrese numero 2: ");
	    scanf("%d",&num2);
	    printf("Ingrese numero 3: ");
	    scanf("%d",&num3);

	    if(num1 > num2 && num1 > num3)
	    {
	        printf("El numero mayor es: %d",num1);
	    }
	    else
	    {
	        if(num2>num1 && num2 >num3)
	        {
	            printf("El numero mayor es: %d",num2);
	        }
	        else
	        {
	            if(num3>num1 && num3>num2)
	            {
	                printf("El numero mayor es: %d",num3);
	            }
	        }
	    }
	    */
	    /* otra forma de hacerlo
	    int numero;
	    int contador=0;
	    int max;

	    do
	    {
	        printf("Ingrese un numero: ");
	        scanf("%d",&numero);
	        if(contador==0)
	        {
	            max=numero;
	        }
	        else
	        {
	            if(numero>max)
	            {
	                max=numero;
	            }
	        }
	        contador++;

	    }while(contador<3);

	    printf("\nEl numero mayor es: %d",max);
	    */
	    ///EJERCICIO 24
	    /*
	    char resuesta='n';
	    int peso;
	    int contadorMenos=0;
	    int contadorMas=0;

	    do
	    {
	     printf("Ingrese peso: ");
	     scanf("%d",&peso);
	     if(peso>80)
	     {
	         contadorMas++;
	     }
	     else
	     {
	         contadorMenos++;
	     }


	     printf("Desea seguir cargando? elija s o n\n");
	     fflush(stdin);
	     scanf("%c",&resuesta);
	    }while(resuesta=='s');

	    printf("La cantidad de empleados que pesan mas de 80 kg es: %d\n",contadorMas);
	    printf("La cantidad de empleados que pesan hasta 80 kg es: %d\n",contadorMenos);
	    */
	    ///EJERCICIO 25
	    /*
	    int vendedor;
	    int salida;
	    float importeV1;
	    float importeV2;
	    float importeV3;

	    do
	    {
	     printf("Elija el numero de vendedor: ");
	     scanf("%d",&vendedor);

	     switch(vendedor)
	     {
	     case 1:
	        printf("Ingrese el importe: ");
	        scanf("%f",&importeV1);
	        break;
	     case 2:
	        printf("Ingrese el importe: ");
	        scanf("%f",&importeV2);
	        break;
	     case 3:
	        printf("Ingrese el importe: ");
	        scanf("%f",&importeV3);
	        break;
	     }


	     printf("Elija 0 para salir\n");
	     fflush(stdin);
	     scanf("%d",&salida);
	     system("cls");

	    }while(salida!=0);

	    printf("La comision del vendedor 1 es: %.2f\n",((importeV1/100)*5));
	    printf("La comision del vendedor 2 es: %.2f\n",((importeV2/100)*5));
	    printf("La comision del vendedor 3 es: %.2f\n",((importeV3/100)*5));
	    */
	    ///EJERCICIO 26
	    /*

	    int vendedor;
	    char salida;
	    float importeV1;
	    float importeV2;
	    float importeV3;

	    do
	    {
	     printf("Elija el numero de vendedor: ");
	     scanf("%d",&vendedor);

	     switch(vendedor)
	     {
	     case 1:
	        printf("Ingrese el importe: ");
	        scanf("%f",&importeV1);
	        break;
	     case 2:
	        printf("Ingrese el importe: ");
	        scanf("%f",&importeV2);
	        break;
	     case 3:
	        printf("Ingrese el importe: ");
	        scanf("%f",&importeV3);
	        break;
	     }
	        printf("Desea contnuar? elija s/n\n");
	        fflush(stdin);
	        scanf("%c",&salida);

	    while(salida!='s' && salida!='n')
	    {
	        printf("Opcion incorrecta\n");
	        printf("Desea contnuar? elija s/n\n");
	        fflush(stdin);
	        scanf("%c",&salida);
	    }

	     system("cls");

	    }while(salida!='n');

	    printf("La comision del vendedor 1 es: %.2f\n",((importeV1/100)*5));
	    printf("La comision del vendedor 2 es: %.2f\n",((importeV2/100)*5));
	    printf("La comision del vendedor 3 es: %.2f\n",((importeV3/100)*5));
	    */
	    ///EJERCICIO 28
	/*


	    int contador=0;

	    for(int i=2;i<100;i++)
	    {

	        for(int j=1;j<=i;j++)
	        {
	            if((i%j==0))
	            {
	                contador++;
	            }
	        }
	        if(contador==2)
	        {
	            printf("%d\n",i);
	        }
	        contador=0;
	    }
	    */
	    ///EJERCICIO 29

	    /*
	    int numero=1;
	    int contadorCinco=0;
	    int contadorSiete=0;
	    int contadorCincoSiete=0;

	    while(contadorCinco < 100)
	    {
	    if(numero==1)
	    {
	        printf("Los multiplos de 5 son:\n");
	    }
	     if((numero%5)==0 && contadorCinco <=100)
	     {
	         contadorCinco++;
	         printf("%d\n",numero);
	     }
	        numero++;
	    }
	    numero=1;

	    while(contadorSiete < 100)
	    {
	    if(numero==1)
	    {
	        printf("\nLos multiplos de 7 son:\n");
	    }
	     if((numero%7)==0 && contadorSiete <=100)
	     {
	         contadorSiete++;
	         printf("%d\n",numero);
	     }
	        numero++;
	    }
	    numero=1;

	    while(contadorCincoSiete < 100)
	    {
	    if(numero==1)
	    {
	        printf("\nLos multiplos de 5 y 7 son:\n");
	    }
	     if((numero%5)==0 && (numero%7)==0 && contadorCincoSiete <=100)
	     {
	         contadorCincoSiete++;
	         printf("%d\n",numero);
	     }
	        numero++;
	    }
	    */
	    ///EJERCICIO 30
	    /*
	    int numero1;
	    int numero2;
	    int numero3;

	    printf("Ingrese numero 1: ");
	    scanf("%d",&numero1);
	    printf("Ingrese numero 2: ");
	    scanf("%d",&numero2);
	    printf("Ingrese numero 3: ");
	    scanf("%d",&numero3);

	    if((numero2>numero1 && numero2<numero3)|| (numero2<numero1 && numero2>numero3))
	    {
	        printf("El numero pertenece al interbalo entre numero 1 y numero 2\n");

	    }
	    else
	    {
	        printf("El numero no pertenece al interbalo entre numero 1 y numero 2\n");
	    }
	    */

	    ///EJERCICIO 31
	    /*

	    char nombre[30];
	    int hora;
	    int antiguedad;
	    int cantidadHoras;
	    int total;
	    int subTotal;
	    int descuento;

	    printf("Ingrese el valor de la hora: ");
	    scanf("%d",&hora);
	    printf("Ingrese el nombre: ");
	    fflush(stdin);
	    gets(nombre);
	    printf("Ingrese la antiguedad: ");
	    scanf("%d",&antiguedad);
	    printf("Ingrese la cantidad de horas trabajadas: ");
	    scanf("%d",&cantidadHoras);

	    subTotal=hora*cantidadHoras;

	    if(antiguedad>0)
	    {
	        subTotal=subTotal+(antiguedad*30);
	    }
	    descuento=(subTotal/100)*13;
	    total=subTotal-descuento;

	    printf("NOMBRE  ANTIGUEDAD VALOR DE HORA  TOTAL BRUTO   DESCUENTOS  TOTAL NETO\n\n");
	    printf("%s      %i           %i            %i        %i        %i",nombre,antiguedad,hora,subTotal,descuento,total);
	    */

	    ///EJERCICIO 33
	    /*
	    float moso1=0;
	    float moso2=0;
	    int opcion;
	    float importe;
	    int respuesta;
	    float plus;

	    do
	    {

	        printf("Ingrese el importe: ");
	        scanf("%f",&importe);
	        printf("Ingrese el moso\n");
	        printf("1 - moso 1\n");
	        printf("2 - moso 2\n");
	        scanf("%d",&opcion);


	        switch(opcion)
	        {
	        case 1:
	            moso1+=importe;
	            break;
	        case 2:
	            moso2+=importe;
	            break;
	        default:
	            printf("No existe ese moso");
	            system("cls");
	            break;
	        }

	        printf("Ingrese 0 para salir ");
	        fflush(stdin);
	        respuesta = getche();
	        system("cls");

	    }while(respuesta!='0');
	    if(moso1>moso2)
	    {
	       plus=moso1/3;
	       moso1+=plus;
	       printf("El moso que atendio a mas personas es: Moso 1 \nY el saldo a cobrar es: %.2f\n",moso1);
	    }
	    else
	    {
	      if(moso2>moso1)
	      {
	          plus=moso2/3;
	       moso2+=plus;
	       printf("El moso que atendio a mas personas es: Moso 2 \nY el saldo a cobrar es: %.2f\n",moso2);
	      }
	      else
	      {
	          printf("Es un empate\n");
	      }
	    }
	    */
	    ///EJERCICIO 34
	    /*
	    char letra='a';

	    for(int i=0; i<5; i++)
	    {

	        if(i==0)
	        {
	            printf("%c\n",letra);
	        }
	        else
	        {
	            if(i==1)
	            {
	                printf("    %c\n",letra);
	            }
	            else
	            {
	                if(i==2)
	                {
	                   printf("        %c\n",letra);

	                }
	                else
	                {
	                     if(i==3)
	                     {
	                       printf("            %c\n",letra);
	                     }
	                     else
	                     {
	                         if(i==4)
	                         {
	                             printf("                %c\n",letra);
	                         }
	                     }
	                }
	            }
	        }

	    }
	    */
	    ///EJERCICIO 35
	    /*
	    for(int i=1;i<=100;i++)
	    {
	        if(i<=100)
	        {
	            printf("%d ",i);
	        }
	    }
	    */

	    ///EJERCICIO 36
	    /*
	    int numero;
	    printf("Ingrese un numero: ");
	    scanf("%d",&numero);
	    for(int i=1; i<=10; i++)
	    {
	        printf("%d x %d = %d\n",numero,i,(numero*i));
	    }
	    */

	    ///EJERCICIO 38

	    /*

	    int legajo[10];
	    float sueldo[10];
	    char sexo[10][10];

	    int numSex;
	    //int contaorLegajo=1;
	    int contador=0;

	    int contadorMujeres=0;
	    int contadorHombres=0;

	    char respuesta;


	    while(contador<=10 && respuesta!='s')
	    {
	        //legajo[contador]=contaorLegajo;
	        //contaorLegajo++;
	        printf("Ingrese legajo: ");
	        scanf("%d",&legajo[contador]);
	        printf("ingrese sueldo: ");
	        scanf("%f",&sueldo[contador]);
	        printf("Ingrese sexo 1 - femenino y 2 - masculino:");
	        scanf("%d",&numSex);
	        switch(numSex)
	        {
	        case 1:
	            strcpy(sexo[contador],"femenino");
	            break;
	        case 2:
	            strcpy(sexo[contador],"masculino");
	            break;

	        }
	        if(sueldo[contador]>500 && numSex==1)
	        {
	            contadorMujeres++;
	        }
	        else
	        {
	            if(sueldo[contador]<400 && numSex==2)
	            {
	                contadorHombres++;
	            }
	        }
	        contador++;
	        printf("ingrese s para salir: ");
	        fflush(stdin);
	        respuesta=getche();
	        system("cls");

	    }
	    printf("Las mujeres que ganan mas de 500 son: %d\n",contadorMujeres);
	    printf("Los hombres que ganan menos de 400 son: %d\n",contadorHombres);
	    */
	    /// EJERCICIO 39
	    /*

	    int numero;
	    int mayor;

	    for(int i=0;i<4;i++)
	    {
	        printf("Ingrese un numero: ");
	        scanf("%d",&numero);
	        if(i==0)
	        {
	            mayor=numero;
	        }
	        else
	        {
	            if(numero > mayor)
	            {
	                mayor=numero;
	            }
	        }

	    }
	    printf("El numero mayor es: %d",mayor);
	    */

	    ///EJERCICIO 40
	    /*

	    int numero;
	    int mayor;
	    int diaMayor;
	    int menor;
	    int diaMenor;
	    int acumulador=0;
	    float promedio;

	    for(int i=0;i<30;i++)
	    {
	        printf("Ingrese la cantidad de agua caida en milimetros del dia %d",(i+1));
	        scanf("%d",&numero);
	        if(i==0)
	        {
	            mayor=numero;
	            menor=numero;
	            diaMayor=(i+1);
	            diaMenor=(i+1);
	        }
	        else
	        {
	            if(numero>mayor)
	            {
	                mayor=numero;
	                diaMayor=(i+1);
	            }
	            else
	            {
	                if(numero<menor)
	                {
	                    menor=numero;
	                    diaMenor=(i+1);
	                }
	            }
	        }
	        acumulador+=numero;
	    }
	    promedio=(float)acumulador/30;
	    printf("El dia de mayor lluvia fue: %d\n",diaMayor);
	    printf("El dia de menor lluvia fue: %d\n",diaMenor);
	    printf("El promedio de lluvia es: %d",(acumulador/30));
	    */

	    ///EJEERCICIO 41
	    /*
	    int numero;
	    int mayor;
	    int menor;

	    for(int i=0;i<5; i++)
	    {
	        if(i==0)
	        {
	            mayor=numero;
	            menor=numero;
	        }
	        else
	        {
	            if(numero>mayor)
	            {
	                mayor=numero;
	            }
	            else
	            {
	                if(numero<menor)
	                {
	                    menor=numero;
	                }

	            }
	        }
	    }
	    printf("El numero mayor es: %d\n",mayor);
	    printf("El numero menor es: %d\n",menor);
	    */

	    ///EJERCICIO 42
	/*De los alumnos de una escuela se registra su apellido y nombre y su altura.
	 * Diseñar en un programa que
     indique el nombre del alumno más alto y su altura (sólo uno es el más alto)*/

	/*

	char nombre[21];
	char apellido[21];
	float altura;
	char nombreMasAlto[21];
	float alturaMasAlta;
	char opcion;
	int contador=0;

	do
	{
	printf("Ingrese nombre: ");
	fflush(stdin);
	gets(nombre);
	printf("Ingrese apellido: ");
	fflush(stdin);
	gets(apellido);
	printf("Ingrese altura en cm: ");
	scanf("%f",&altura);

	if(contador==0)
	{
		strcpy(nombreMasAlto,nombre);
		alturaMasAlta = altura;
	}
	else
	{
		if(altura > alturaMasAlta)
		{
			strcpy(nombreMasAlto,nombre);
			alturaMasAlta = altura;
		}
	}


	contador++;
	fflush(stdin);
	printf("Para salir ingrese n: ");

	//scanf("%c",&opcion);

    opcion = getche();  //no funciona en la consola de eclipse pero en el archivo si
    system("cls"); //no funciona en la consola de eclipse pero en el archivo si


	}while(opcion!='n' && opcion!='N');

	printf("El nombre del mas alto es: %s Y su altura es: %.2f cm",nombreMasAlto,alturaMasAlta);
	*/

	//EJERCICIO 43


	/*Diseñar un programa que permita calcular el promedio de un alumno sabiendo que se ingresa por alumno
	la nota de 6 materias y su nombre. No se sabe la cantidad de alumnos. Se pide un listado impreso que diga:
	NOMBRE DEL ALUMNO:   PROMEDIO:
	 * */

	/*
	char nombres[100][21];
	float promedios[100];
	float nota;
	float acumuladorNotas = 0;
	int i=0;
	char opcion;
	int contador=0;

	do
	{
		printf("Ingrese nombre: ");
		fflush(stdin);
		gets(nombres[i]);

		for(int j=0; j<6; j++)
		{
			printf("Ingrese nota %d: ",(j+1));
			scanf("%f",&nota);
			acumuladorNotas += nota;
		}
		promedios[i]=(acumuladorNotas/6);
		acumuladorNotas = 0;

	i++;

	printf("Para salir ingrese n: ");
	fflush(stdin);
	opcion = getche();

	system("cls");
	contador ++;

	}while(opcion !='n' && opcion !='N');

	if(contador > 0)
	{
		printf("NOMBRE DEL ALUMNO     NOTA\n");
		for(int f=0; f < i; f++)
		{
			printf("%s                %.2f\n",nombres[f],promedios[f]);

		}
	}
	system("pause");
	*/

	//EJERCICIO 46
	/*Del registro de partes meteorológico por cada día se registra la fecha, temperatura máxima y temperatura
    mínima. Diseñar en un programa que permita informar : el día más frío y cual fue esa temperatura, el día
    más cálido y cual fue esa temperatura*/

	/*
	int dia;
	int mes;
	int anio;
	float temp;
	int  flag1=0;
	int flag2=0;
	int salir=1;
	int contador=0;

	int diaMax;
	int mesMax;
	int anioMax;
	float tempMax;


	int diaMin;
	int mesMin;
	int anioMin;
	float tempMin;


	//int fecha;
	do
	{

		do
		{

			printf("Ingrese fecha formato dd/mm/aaaa: ");
			scanf("%d/%d/%d",&dia,&mes,&anio);
			switch(mes)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(dia <= 31 && dia >=1)
				{
					flag1=1;
					flag2=1;
				}
				break;
			case 2:
				if(dia <= 28 && dia >=1)
				{
					flag1=1;
					flag2=1;
				}
				break;


			case 4:
			case 6:
			case 9:
			case 11:
				if(dia <= 30 && dia >=1)
				{
					flag1=1;
					flag2=1;
				}
				break;

			}

			if(flag1==0)
			{
				printf("Error al ingresar el dia, reingrese fecha\n");
			}
			if(flag2==0)
			{
				printf("Error al ingresar el mes, reingrese fecha\n");
			}
		}while(flag1 !=1 && flag2 !=1);

		printf("Ingrese temperatura: ");
		scanf("%f",&temp);

		flag1=0;
		flag2=0;
		if(contador==0)
		{
			diaMax=dia;
			mesMax=mes;
			anioMax=anio;
			tempMax=temp;


			diaMin=dia;
			mesMin=mes;
			anioMin=anio;
			tempMin=temp;
		}
		else
		{
			if(temp > tempMax)
			{
				diaMax=dia;
				mesMax=mes;
				anioMax=anio;
				tempMax=temp;
			}
			else
			{
				if(temp < tempMax)
				{
					diaMin=dia;
					mesMin=mes;
					anioMin=anio;
					tempMin=temp;
				}
			}
		}



		contador++;
		printf("Para salir ingrese 0: ");
		salir = getche();
		//scanf("%d",&salir);

		system("cls");
	}while(salir !='0');
	printf("La fecha con mayor temperatura es: %d/%d/%d y la tameratura es: %.2f\n",diaMax,mesMax,anioMax,tempMax);
	printf("La fecha con menor temperatura es: %d/%d/%d y la temperatura es: %.2f\n",diaMin,mesMin,anioMin,tempMin);
	*/

	//EJERCICIO 47

	/*De las 20 participantes de un concurso de belleza se van registrando de uno en uno los siguientes datos:
Apellido y Nombre, Puntos por inteligencia, Puntos por Cultura general, Puntos por Belleza.
Se necesita informar por pantalla : Apellido y nombre de la concursante de mayor puntaje general,
Puntaje acumulado por todas las participantes en Cultura general, en Inteligencia y en Belleza
	 * */

	/*
	char nombre[21];
	char apellido[21];
	int puntosInteligencia;
	int puntosCultura;
	int puntosBelleza;
	int puntosGeneral;
	int puntajeMax;
	char nombrePuntajeMax[21];
	char apellidoPuntajeMax[21];

	for(int i=0; i<20; i++)
	{
		printf("Ingrese nombre: ");
		fflush(stdin);
		gets(nombre);
		printf("Ingrese apellido: ");
		fflush(stdin);
		gets(apellido);
		printf("Ingrese puntos por Inteligencia: ");
		scanf("%d",&puntosInteligencia);
		printf("Ingrese puntos por Cultura general: ");
		scanf("%d",&puntosCultura);
		printf("Ingrese puntos por belleza: ");
		scanf("%d",&puntosBelleza);
		puntosGeneral = puntosInteligencia + puntosCultura + puntosBelleza;

		if(i==0)
		{
			puntajeMax = puntosGeneral;
			strcpy(nombrePuntajeMax, nombre);
			strcpy(apellidoPuntajeMax, apellido);

		}
		else
		{
			if(puntosGeneral > puntajeMax)
			{
				puntajeMax = puntosGeneral;
				strcpy(nombrePuntajeMax, nombre);
				strcpy(apellidoPuntajeMax, apellido);
			}
		}


	}
	printf("La concursante con mayor puntaje es: \n");
	printf("NOMBRE    APELLIDO    PUNTAJE TOTAL ACUMULADO\n");
	printf("%s       %s       %d",nombrePuntajeMax,apellidoPuntajeMax,puntajeMax);
	*/

	//setbuf(stdout,NULL);



	system("pause");







	return EXIT_SUCCESS;
}

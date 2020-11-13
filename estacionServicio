#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>

void fsmenu();
void fscarga (int combxEst [4][21], float recxBole[21],  int vLitros[3], int vBoletas[21]);
void fscantLitrosxEst(int combxEst [4][21]);
void fsRecaudacion(int combxEst [4][21]); 
void fscantBoletasxEst(int combxEst [4][21]);
void fsLitrosxComb(int vLitros[3]);
void fsmaxRecxEst (int combxEst[4][21]);
void fsBoletasxEstacion(int vBoletas[21]);
void bolMaxRec(float recxBole[21]);
int main()
{
	char usuario[10];
	char usu[10];
	char contra[10];
	char pass[10];
	int cont=0,x,y,marca;
	strcpy(usuario,"rosen");
	strcpy(contra,"uai");
	int opcion;
	int combxEst [4][21]={0};
	int vEstacion[21]={0};
	int vCombustible[4]={0};
	int f, c, i;
	int mRec[4][21]={0};
	int vBoletas[21]={0};
	int vLitros[3]={0};
	
	float recxBole[21]={0};

	do
	{
	marca=0;
	printf("Ingrese el nombre de usuario.\n");
	fflush(stdin);
	gets(usu);
	printf("Ingrese la contraseña\n");
	fflush(stdin);
	gets(pass);
	x= strcmp(usuario,usu);
	y= strcmp(contra,pass);
	if(x!=0)
		{
			marca=1;
		}
	if(y!=0)
		{
			marca=1;
		}
		
	cont= cont+1;
	} while((marca!=0)&&(cont<3));
	
	
	
	if(marca!=0)
		{
			printf("Nombre de usuario o contraseña incorrecto. Salga del sistema e intentelo nuevamente.\n");
			fflush(stdin);	
		}
		else
		{
			printf("Bienvenido al sistema de Diaz, Combustibles Argentinos.\n");
			system ("pause");
			
						
		do
			{
			fsmenu ();	
			scanf("%d",&opcion);
			}while((opcion<0)||(opcion>3));
			marca=0;
			while(opcion!=3)
			{
		 switch(opcion)
		 	{
		 	case 0:
		 			if(marca==0)
		 				{
			 			printf("Ingreso a la carga de datos:\n");
			 			marca=1;
			 			fscarga (combxEst, recxBole, vLitros, vBoletas);
			 			}
			 			else
			 			{
			 			printf("La carga ya fue realizada. Continue con otra opcion.\n");	
					    }
						break;
			case 1:
					if(marca==1)
						{
						printf("Ud. ha ingresado a la opcion 1.\n");
						fscantLitrosxEst (combxEst);
						}
						else
						{
						printf("Para acceder a esta opcion, previamente debe realizar la carga de datos mediante la opcion 0. \n");	
						}
					
					break;
			case 2:
					if(marca==1)
						{
						printf("Ud. ha ingresado a la opcion 2. \n");
						fsRecaudacion(combxEst);
						}
						else
						{
						printf("Para acceder a esta opcion, previamente debe realizar la carga de datos mediante la opcion 0. \n");	
						}
					break;
				    
					default:
						printf("Opcion incorrecta.\n");
			
				}
					 
				system("pause");
				system("cls");	
				fsmenu();
			do
				{
				printf("Ingrese la opcion.\n");
				scanf("%d",&opcion);
				}
				while((opcion<0)||(opcion>10));	
		}
	}
		printf("Ud. salio del sistema.\n");
		
		fsLitrosxComb(vLitros);
		fsmaxRecxEst (combxEst);
		fsBoletasxEstacion(vBoletas);
		bolMaxRec(recxBole);
		}

    void fsmenu()  //Funcion menu
		{
			
			system("cls");
			printf("Seleccione el proceso requerido: \n");
			printf("0. Opcion obligatoria de inicio. Carga de datos para continuar operando en el sistema.\n");
			printf("1. Cantidad de litros vendidos.\n");
			printf("2. Recaudacion de cada estacion.\n");
			printf("3. Salir del sistema.\n");
		}
void fscarga (int combxEst [4][21], float recxBole[21], int vLitros[3], int vBoletas[21]) //Funcion de carga de datos
{
	int nroBoleta, nroEstacion, nroCombustible;
	int f, c, i;
	
	float cantLitros;
	printf ("Ingrese el nuero de boleta\n");
	scanf("%d",&nroBoleta);
	
	
	
	while (nroBoleta!=90)
	{
		
		printf("Ingrese el numero de estacion de servicio.\n");
		scanf("%d",&nroEstacion);
		
		printf("Ingrese el tipo de combustible vendido.\n 1. Ecologico\n 2. Super\n 3. Comun\n");
		scanf("%d",&nroCombustible);
		printf("Ingrese la cantidad de combustible vendido.\n");
		scanf("%f",&cantLitros);
		
		combxEst[nroCombustible][nroEstacion]=combxEst[nroCombustible][nroEstacion]+cantLitros;
		vBoletas[nroEstacion]=vBoletas[nroEstacion]+1;
		
		if(nroCombustible==1)//si es 1 * 1.5 y guardo en array [numBoleta] y acumulo litros por combust 
			{
			recxBole[nroBoleta]= cantLitros * 1.5;
			vLitros[1]= vLitros[1] + cantLitros;
			}
			else if (nroCombustible==2)//si es 2 * 1.3 y guardo en array [numBoleta] y acumulo litros por combust 
				{
					recxBole[nroBoleta]= cantLitros * 1.3;
					vLitros[2]= vLitros[2] + cantLitros;
				}
				else if(nroCombustible==3)//si es 3 * 1.1 y guardo en array [numBoleta] y acumulo litros por combust 
					{
						recxBole[nroBoleta]= cantLitros * 1.1;
						vLitros[3]= vLitros[3] + cantLitros;
					}
		
		
		printf("\nIngrese el numero de boleta.\n");
		scanf("%d",&nroBoleta);
	    system("pause");
	    
	}
	printf("Carga de datos realizada exitosamente.\n\n");
	
		
}

//muestra boletas emitidas por estacion
void fsBoletasxEstacion(int vBoletas[21])
{
	int i, aIndi[21], c;
	
	
	for (i=1;i<=20;i++)
		{
			printf("La estacion de servicio %d emitio %d boletas.\n", i, vBoletas[i]);
			 aIndi[i]= i;	
		}
	system("pause");
	
	//ordeno y guardo indice para saber estacion
	int j, temp1=0, temp2=0;
	
	for (i=1; i<21; i++)
	{
		for (j=1; j<22-1; j++)
		{
			if (vBoletas[j] < vBoletas[j+1])
			{ // Ordena el array de menor a mayor
				temp1 = vBoletas[j]; 
				vBoletas[j] = vBoletas[j+1]; 
				vBoletas[j+1] = temp1;
				
				temp2 = aIndi[j]; 
				aIndi[j]= aIndi[j+1];
				vBoletas[j+1] = temp1;
				aIndi[j+1]= temp2;
				
			}
		}
	}
	//array ordenado
	printf("Seguidamente se muestran los mismos valores ordenados de modo ascendente. \n\n");
	for(c=20; c>=1; c--)
	{
		printf("La estacion de servicio %d emitio %d boletas.\n", aIndi[c], vBoletas[c]);
		
	}
}
//Cantidad de litros vendidos por estacion 
void fscantLitrosxEst(int combxEst [4][21])
{
	int vEstacion[21]={0}, aIndi[21];
	 
	int f, c, i;
	for(c=1; c<=20; c++)
	{
		for(f=1; f<=3; f++)
		{
			vEstacion[c]= vEstacion[c] + combxEst[f][c];
			aIndi[c]= c;	
		}
	}
			
	
	for(c=1; c<=20; c++)
	{
		printf ("La estacion de servicio %d vendio %d litros de combustible.\n",c, vEstacion[c]);
		
	}
	system("pause");
	
	//ordeno y guardo indice para saber estacion
	int  j, temp1=0, temp2=0;
	
	for (i=1; i<21; i++)
	{
		for (j=1; j<22-1; j++)
		{
			if (vEstacion[j] < vEstacion[j+1])
			{ // Ordena el array de menor a mayor
				temp1 = vEstacion[j]; 
				vEstacion[j] = vEstacion[j+1]; 
				vEstacion[j+1] = temp1;
				
				temp2 = aIndi[j]; 
				aIndi[j]= aIndi[j+1];
				vEstacion[j+1] = temp1;
				aIndi[j+1]= temp2;
				
			}
		}
	}
	//array ordenado
	printf("Seguidamente se muestran los mismos valores ordenados de modo ascendente. \n\n");
	for(c=20; c>=1; c--)
	{
		printf ("La estacion de servicio %d vendio %d litros de combustible.\n", aIndi[c], vEstacion[c]);
		
	}
	
}
// Recaudacion de cada estacion
void fsRecaudacion(int combxEst[4][21])
{
	float vCombustible[4]={0,1.50,1.30,1.10}, VRecaudacion[21]={0};
	
	int f, c, aIndi[21], i; 
	
	for(int c=1; c<=20; c++)
	{
		for(int f=1; f<=3; f++)
		{
			VRecaudacion[c]= VRecaudacion[c] + combxEst[f][c] * vCombustible[f];
			aIndi[c]=c; 
		}
	}
		

	for(int c=1; c<=20; c++)
	{
		printf("La estacion de servicio numero %d recaudo $ %2.2f \n", c, VRecaudacion[c]);
	}
	system("pause");
	//ordeno y guardo indice para saber estacion
	int j, temp1=0, temp2=0;
	
	for (i=1; i<21; i++)
	{
		for (j=1; j<22-1; j++)
		{
			if (VRecaudacion[j] < VRecaudacion[j+1])
			{ // Ordena el array de menor a mayor
				temp1 = VRecaudacion[j]; 
				VRecaudacion[j] = VRecaudacion[j+1]; 
				VRecaudacion[j+1] = temp1;
				
				temp2 = aIndi[j]; 
				aIndi[j]= aIndi[j+1];
				VRecaudacion[j+1] = temp1;
				aIndi[j+1]= temp2;
			}
		}
	}
	//array ordenado
	printf("Seguidamente se muestran los mismos valores ordenados de modo ascendente. \n\n");
	for(c=20; c>=1; c--)
	{
		printf("La estacion de servicio numero %d recaudo $ %2.2f \n", aIndi[c], VRecaudacion[c]);
		
	}
	
}
void bolMaxRec(float recxBole[21])  //Boleta con mayor recaudacion
{
	int mayrec=0;
	
	for (int c=1; c<=21; c++)
	{
		//recorro boletas por montos
			if(recxBole[c]>mayrec)
			{
				mayrec= c; 
			}
		printf("La boleta numero %d recaudo: $ %4.2f. \n", c, recxBole[c]);
		
	}
	printf("La boleta numero %d tiene la maxima recaudacion, $ %4.2f. \n" , mayrec, recxBole[mayrec]); 		
		
}


void fsLitrosxComb(int vLitros[3]) //Cuenta cantidad de litros vendidos por combustible
{
	int f;
	
		for(f=1; f<=3; f++)
		{
			printf("El total de litros vendido del combustible %d es de %4.2d litros.\n", f, vLitros[f]);
		}
	
	system("pause");
	}
void fsmaxRecxEst (int combxEst[4][21]) //Maxima recaudacion por estacion
{
	float vCombustible[4]={0,1.50,1.30,1.10},VRecaudacion[21]={0};
	int cont=0,aux;
	float sueldo, total=0,prom, max;
	
	int f,c;
	
	for (int c=1;c<=20;c++)
	{
		for(int f=1;f<=3;f++)
		{
			VRecaudacion[c]=VRecaudacion[c]+combxEst[f][c]*vCombustible[f];
		}
	}
	for(int c=1;c<=20;c++)
	{
		
	}
	 max= VRecaudacion[1];
		 aux=1;
		 for(cont=2;cont<=19;cont++)
		 	{
		 		if(VRecaudacion[cont]>max)
		 			{
		 				max= VRecaudacion[cont];
		 				aux=cont;
					 }
			 }
		// busco los maximos o minimos iguales
		
		 for(cont=aux;cont<=19;cont++)
		 	{
		 		if(VRecaudacion[cont]==max)
				 	{
				 	printf ("La estacion de servicio %d tiene la maxima recaudacion %f.\n",cont,max);	
					}	 
			}
			
			if(VRecaudacion[1]==max)
			{
				printf ("La estacion de servicio numero 1 es la que mas recaudo.\n",VRecaudacion[1], max );
			}
			else
			{
				printf("La estacion de servicio numero 1 no es la que obtuvo la maxima recaudacion.\n",VRecaudacion[1], max );
			}
		
		
	system("pause");
}

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>

// Declaracion de funciones
int fsNumeroAzar();
void fsLLenarLote1(int value[20][100][1]);
void fsLLenarLote2(int valor[20][1]);
void fsLLenarLote3(int valor[100][1]);
void fsPonerEnCeroLote4(int valor[20][1]);

int main()
{
// Lote1” 1ra dimension: Modelo. 2da dimension: Nro de Pieza a utilizar.3ra dimension: stock de piezas utilizadas.
int Lote1[20][100][1] = {0};
fsLLenarLote1(Lote1);
// Lote2: 1ra dimension: Modelo. 2da dimension: Cantidad en Stock
int Lote2[20][1] = {0};
fsLLenarLote2(Lote2);
// Lote3: 1ra dimension: Numero de pieza. 2da dimension: Stock de esa pieza
int Lote3[100][1] = {0};
fsLLenarLote3(Lote3);

// Lote4: 1ra dimension: modelo. 2da dimension: cantidad pedida a fabrica
int Lote4[20][1];
fsPonerEnCeroLote4(Lote4);

            int contador1 = 0;
    int contador2 = 0;

// bucle en el cual se completa Lote4 con datos introducidos por el usuario
int modelo;
int cantidad = 0;

    system("cls");

    while(modelo!=0)
    {
            printf("Ingrese el modelo de auto a solicitar\n");
         scanf("%d", &modelo);
         printf("Ingrese la cantidad que desea solicitar:\n");
         scanf("%d", &cantidad);

             // Volvamos la informacion provista por el usuario a la matriz Lote4
if ( modelo > 0 )
{
    Lote4[modelo][1] = cantidad;
}
    }

    printf("#DEBUG: Listado de ordenes realizadas:\n");
          for ( contador1=0; contador1<21; contador1++)
          {
        if ( Lote4[contador1][1] > 0 ) //se ha realizado un pedido
{        
                 printf("Modelo: %d  Cantidad: %d \n", contador1, Lote4[contador1][1] );
}
}

// Modelo - stock inicial - cantidad pedida - stock final - a fabricar
for ( contador1=1; contador1<21; contador1++ )
{
    int StockInicial = Lote2[contador1][1];
int CantidadPedida = Lote4[contador1][1];
    int StockFinal = StockInicial - CantidadPedida;
    int ParaFabricar = 0;

if ( StockFinal < 0 )
{
    ParaFabricar = StockFinal * -1; //invertimos el signo negativo a positivo
StockFinal = 0;
}

    printf("Modelo: %d Stock Inicial: %d Cantidad Pedida: %d Stock Final: %d por fabricar: %d\n", contador1, StockInicial, CantidadPedida, StockFinal, ParaFabricar);
}

    printf("Mostramos unicamente las piezas de los modelos en que haya sido pedidos y el Stock Inicial no es suficiente para cubrir el pedido\n");
    system("pause");
    // Pieza - Stock Inicial - Stock Final - Cantidad a Comprar
    
    // Mostramos unicamente las piezas de los modelos en que haya sido pedidos y el Stock Inicial no es suficiente para cubrir el pedido
          for ( contador1=0; contador1<21; contador1++)
          {
int ModeloParaFabricar = Lote2[contador1][1] - Lote4[contador1][1]; // Modelo Stock Inicial - Modelo Vendido
    if ( ModeloParaFabricar < 0 ) // Hay que fabricar!
    {
        ModeloParaFabricar = ModeloParaFabricar * -1; //invertimos el signo negativo a positivo
}
else 
{
ModeloParaFabricar = 0; // Alcanzo el stock, no hay que fabricar
}

//se ha realizado un pedido, pero hay que fabricar el modelo
        if ( ModeloParaFabricar > 0 ) 
{        
    // Usando el plano del modelo, calculamos las piezas a utilizar por cada modelo a contruir
                 for ( contador2 = 0; contador2 < 101; contador2++ ) 
        {
            int Pieza = contador2;
            int PiezaStockInicial = Lote3[contador2][1];
            
            int PiezaStockFinal = PiezaStockInicial - (Lote1[contador1][Pieza][1] * ModeloParaFabricar  ) ; // Multiplicamos pieza requerida * cantidad de modelos a fabricar y restamos el stock final, para ver si alcanzaron, o hay que comprar mas piezas
            int PiezaParaComprar = 0;
    
if ( PiezaStockFinal < 0 )
{
    PiezaParaComprar = PiezaStockFinal * -1; //invertimos el signo negativo a positivo
PiezaStockFinal = 0;
}

            printf("Pieza #: %d Stock Inicial: %d Stock Final: %d Cantidad a Comprar: %d\n", Pieza, PiezaStockInicial, PiezaStockFinal, PiezaParaComprar );
        }

}
}


    system("pause");
}




void fsLLenarLote1(int valor[20][100][1])
{
    int contador1 = 0;
    int contador2 = 0;
    int numero = 0;

    for ( contador1 = 0; contador1 <21; contador1++ )
    {
        //1ra dimension

        for ( contador2 = 0; contador2 < 101; contador2++ )
        {
            //2da dimension

    //3ra dimension - stock
            
            numero = fsNumeroAzar();
    valor[contador1][contador2][1] = numero;
        }
    }
}


void fsLLenarLote2(int valor[20][1])
{
     int contador1 = 0;
     int numero = 0;

     for ( contador1=0; contador1 < 21; contador1++ )
     {          
          numero = fsNumeroAzar();
          valor[contador1][1] = numero;           
     }
}


void fsLLenarLote3(int valor[100][1])
{
     int contador1 = 0;
     int numero = 0;

     for ( contador1=0; contador1 < 101; contador1++ )
     {          
          numero = fsNumeroAzar();
          valor[contador1][1] = numero;          
     }
}


void fsPonerEnCeroLote4(int valor[20][1])
{
     int contador1 = 0;
    
    for ( contador1 = 0; contador1 < 21; contador1++ )
    {
        valor[contador1][1] = 0;
    }    
}


int fsNumeroAzar()
{
    return rand() % 10;
}

#include<stdio.h>
#include <windows.h>

COORD coord= {0,0}; 

void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
    
    int M;
    int xS, xI, y;

    //COLUMNAS LATERALES
    for(y=1; y<17; y++)
    {
        gotoxy(10,y);
        printf("%c                                                        %c", 186, 186);
    }
    //ESQUINAS DE LA PARTE IZQUIERDA
    gotoxy(10,1);
    printf("%c", 201);
    gotoxy(10,17);
    printf("%c", 200);
    //COLUMNA SUPERIOR 
    for(xS=11; xS<67; xS++)
    {
        gotoxy(xS,1);
        printf("%c", 205);
    }
    //COLUMNA INFERIOR 
    for(xI=11; xI<67; xI++)
    {
        gotoxy(xI,17);
        printf("%c", 205);
    }

    //ESQUINAS DE LA PARTE DERECHA
    gotoxy(67,1);
    printf("%c", 187);
    gotoxy(67,17);
    printf("%c", 188);

    //PROGRAMA 
     gotoxy(12,2);
     printf("CALENDARIO");

     gotoxy(12,4);
     printf("Elige un mes del a%co %cdel 1 al 12%c: ", 164, 34, 34);
     scanf("%d", &M);

if ( M>=1 && M<=12)
    switch (M)
    {
    case 1 : gotoxy(12,6); printf("ENERO");
        break;
    case 2 : gotoxy(12,6); printf("FEBRERO");
        break;   
    case 3 : gotoxy(12,6); printf("MARZO");
        break;
    case 4 : gotoxy(12,6); printf("ABRIL");
        break;
    case 5 : gotoxy(12,6); printf("MAYO");
        break;
    case 6 : gotoxy(12,6); printf("JUNIO");
        break;
    case 7 : gotoxy(12,6); printf("JULIO");
        break;
    case 8 : gotoxy(12,6); printf("AGOSTO");
        break;
    case 9 : gotoxy(12,6); printf("SEPTIEMBRE");
        break;
    case 10 : gotoxy(12,6); printf("OCTUBRE");
        break;
    case 11 : gotoxy(12,6); printf("NOVIEMBRE");
        break;
    case 12 : gotoxy(12,6); printf("DICIEMBRE");
        break;
    } else printf( "          %c ERROR: Selecciona una mes correcto."); 

    //ESQUINAS DE LA PARTE DERECHA
    gotoxy(67,1);
    printf("%c", 187);
    gotoxy(67,17);
    printf("%c\n", 188);

system("pause");
}

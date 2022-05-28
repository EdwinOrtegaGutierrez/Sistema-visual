#include<stdio.h>
#include <windows.h>

COORD coord= {0,0}; 

void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

//TEXTO DE PRUEBA
int main()
{
    //variable del texto
    int H;

//ESCENARIO

    int xS, xI, y;

    //COLUMNAS LATERALES
    for(y=1; y<17; y++)
    {
        gotoxy(10,y);
        printf("%c                                                                            %c", 186, 186);
    }
    //ESQUINAS DE LA PARTE IZQUIERDA
    gotoxy(10,1);
    printf("%c", 201);
    gotoxy(10,17);
    printf("%c", 200);
    //COLUMNA SUPERIOR 
    for(xS=11; xS<87; xS++)
    {
        gotoxy(xS,1);
        printf("%c", 205);
    }
    //COLUMNA INFERIOR 
    for(xI=11; xI<87; xI++)
    {
        gotoxy(xI,17);
        printf("%c", 205);
    }

    //ESQUINAS DE LA PARTE DERECHA
    gotoxy(87,1);
    printf("%c", 187);
    gotoxy(87,17);
    printf("%c", 188);

    //TEXTO
     gotoxy(12,2);
     printf("Bienvenido a Hotel Ortega.");  
     gotoxy(12,3);
     printf("A continuaci%cn aparecer%c un listado de las habitaciones", 162, 160);
     gotoxy(12,6);
     printf("1. Habitaci%cn azul", 162);
     gotoxy(12,7);
     printf("2. Habitaci%cn roja", 162);
     gotoxy(12,8);
     printf("3. Habitaci%cn verde", 162);
     gotoxy(12,9);
     printf("4. Habitaci%cn rosa", 162);
     gotoxy(12,10);
     printf("5. Habitaci%cn gris", 162);

     gotoxy(12,12);
     printf("Elige una habitaci%cn: ", 162);
     scanf("%d", &H);

     if (  H>=1 && H<=5)
        switch (H)
        {
            case 1 : gotoxy(12,14); printf("La habitaci%cn azul se encuentra en la primera planta y cuenta con 2 camas.", 162);
                     break;
            case 2 : gotoxy(12,14); printf("La habitaci%cn roja se encuentra en la primera planta y cuenta con 1 cama.", 162);
                     break;
            case 3 : gotoxy(12,14); printf("La habitaci%cn verde se encuentra en la segunda planta y cuenta con 3 camas.", 162);
                     break;
            case 4 : gotoxy(12,14); printf("La habitaci%cn rosa se encuentra en la segunda planta y cuenta con 2 camas.", 162);
                     break;
            case 5 : gotoxy(12,14); printf("La habitaci%cn gris se encuentra en la tercera planta y cuenta con 1 cama.", 162);
                     break;
        }
    else
        printf( "          %c ERROR: Selecciona una habitaci%cn.", 186, 162);     

    //ESQUINAS DE LA PARTE DERECHA
    gotoxy(87,1);
    printf("%c", 187);
    gotoxy(87,17);
    printf("%c\n", 188);

system("pause");
}


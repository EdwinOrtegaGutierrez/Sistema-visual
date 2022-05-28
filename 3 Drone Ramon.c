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
    int T;

//ESCENARIO

    int xS, xI, y;

    //COLUMNAS LATERALES
    for(y=1; y<17; y++)
    {
        gotoxy(10,y);
        printf("%c                                                                          %c", 186, 186);
    }
    //ESQUINAS DE LA PARTE IZQUIERDA
    gotoxy(10,1);
    printf("%c", 201);
    gotoxy(10,17);
    printf("%c", 200);
    //COLUMNA SUPERIOR 
    for(xS=11; xS<85; xS++)
    {
        gotoxy(xS,1);
        printf("%c", 205);
    }
    //COLUMNA INFERIOR 
    for(xI=11; xI<85; xI++)
    {
        gotoxy(xI,17);
        printf("%c", 205);
    }

    //ESQUINAS DE LA PARTE DERECHA
    gotoxy(85,1);
    printf("%c", 187);
    gotoxy(85,17);
    printf("%c", 188);

    //TEXTO
     gotoxy(12,2);
     printf("Bienvenido a la app de la tienda; DRONE RAM%cN", 224);

     gotoxy(12,4);
     printf("Selecciona un d%ca para buscar atenci%cn al cliente del 1 al 7: ", 161, 162);
     scanf("%d", &T);

     if (T>=1 && T<=7)
    switch (T)
    {
    case 1 : gotoxy(12,6); printf("LUNES: El horario de atenci%cn es de 9am a 8pm ", 162);
        break;
    case 2 : gotoxy(12,6); printf("MARTES: El horario de atenci%cn es de 10am a 5pm", 162);
        break;   
    case 3 : gotoxy(12,6); printf("MI%cRCOLES: El horario de atenci%cn es de 3pm a 10pm", 144, 162);
        break;
    case 4 : gotoxy(12,6); printf("JUEVES: El horario de atenci%cn es de 8am a 4pm", 162);
        break;
    case 5 : gotoxy(12,6); printf("VIERNES: El horario de atenci%cn es de 8am a 1pm, y 3pm a 7pm", 162);
        break;
    case 6 : gotoxy(12,6); printf("S%cBADO: El horario de atenci%cn es de 9am a 2pm", 181, 162);
        break;
    case 7 : gotoxy(12,6); printf("DOMINGO: Se encuentra cerrado.");
        break;
    } else printf("          %c ERROR: Selecciona una d%ca correcto.", 186, 161);

    //ESQUINAS DE LA PARTE DERECHA
    gotoxy(85,1);
    printf("%c", 187);
    gotoxy(85,17);
    printf("%c\n", 188);

system("pause");
}

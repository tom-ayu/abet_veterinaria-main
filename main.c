#include <stdio.h>

int main (int argc, char *argv[]) {
    int menu=0;
    char mascota[1][5][50];
    char *opc1=&mascota[0][0][50];
    char *opc2=&mascota[0][1][50];
    char *opc3=&mascota[0][2][50];
    char *opc4=&mascota[0][3][50];
    char *opc5=&mascota[0][4][50];

    int servicios[4]={0,0,0,0};
    int *serv1=&servicios[0];
    int *serv2=&servicios[1];
    int *serv3=&servicios[2];
    int *serv4=&servicios[3];
    int contador_general=0;
    int *cont=&contador_general;

    printf("Bienvenido al Sistema de Facturación de Mascotas!\n");
    do
    {
        printf("\n----------- Menu Principal -----------\n");
        printf("1. Ingreso Mascota\n");
        printf("2. Servicios\n");
        printf("3. Modificar Servicios\n");
        printf("4. Facturar Servicios\n");
        printf("5. Salir\n");
        printf("--------------------------------------\n");
        scanf("%i",&menu);
        switch (menu)
        {
        case 1:
            ingresoMascota(opc1, opc2, opc3, opc4, opc5, serv1, serv2, serv3, serv4);
            fflush(stdin);
            break;
        case 2:
            mServicios(opc1, serv1, serv2, serv3, serv4);
            break;  
        case 3:
            modificarFactura(opc1, opc2, opc3, opc4, opc5, serv1, serv2, serv3, serv4);
            break;   
        case 4: 
            mFactura(opc1, opc2, opc3, opc4, opc5, serv1, serv2, serv3, serv4, cont);
            break;
        case 5: 
            printf("Salida exitosa.");
            break; 
        default:
            printf("Opcion Invalida, intente de nuevo.");
            break;
        }
    } while (menu!=5);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,notas,legajos,aplazos=0;

    for(i=0;i<20;i++)
    {
    printf("Ingrese la nota de los alumnos: ");
    scanf("%d",&notas);
    fflush(stdin);
    printf("Ingrese los legajos de los alumnos: ");
    scanf("%d",&legajos);
    printf("\n");
    fflush(stdin);

    if(notas>10)
    {
        printf("Nota incorrecta\n");
        printf("\n");
    }
    if(notas>=7&&notas>!10)
    {
        printf("El alumno con legajo %d ha Promocionado\n",legajos);
        printf("\n");
    }
    if(notas<4)
    {
        aplazos++;
    }
    }
    printf("\nLa cantidad de alumnos aplazados es de: %d",aplazos);

    return 0;
}

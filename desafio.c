#include<stdio.h>

int main(){
    double distancia;

    printf("Digite a distancia entre dois planetas em quilômetros: ");
    scanf("%lf", &distancia);
    
    double tempoHoras = distancia / (299792458 * 3.6);
    double tempoMinutos = tempoHoras * 60;
    double tempoSegundos = tempoHoras * 3600;

    printf("tempo para viajar na velocidade da luz: \n");
    printf("Segundos: %.11lf \n", tempoSegundos);
    printf("minutos: %.15lf \n", tempoMinutos);
    printf("Horas: %.17lf \n", tempoHoras);


    return 0;
}

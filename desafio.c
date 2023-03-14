#include<stdio.h>

int main(){
    double distancia;
    double tempoHoras;
    double tempoMinutos;
    double tempoSegundos;

    printf("Digite a distancia entre dois planetas em quilômetros: ");
    scanf("%lf", &distancia);
    
    tempoHoras = distancia / (299792458 * 3.6);
    tempoMinutos = tempoHoras * 60;
    tempoSegundos = tempoHoras * 3600;

    printf("tempo para viajar na velocidade da luz: \n");
    printf("Segundos: %.11lf \n", tempoSegundos);
    printf("minutos: %.15lf \n", tempoMinutos);
    printf("Horas: %.17lf \n", tempoHoras);


    return 0;
}

/* 
Programa que lê o número de um funcionário, seu número de horas trabalhadas, 
o valor que recebe por hora e calcula o salário desse funcionário. 
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
*/

#include <stdio.h>

int main(){
    int num,ht;
    float vph,sal;
    scanf("%d",&num);
    scanf("%d",&ht);
    scanf("%f",&vph);
    sal=sal*ht;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",sal);
    return 0;
}

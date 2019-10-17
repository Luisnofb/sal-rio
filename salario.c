#include <stdio.h>

int main(){
    int num,ht;
    float sal,pag;
    scanf("%d",&num);
    scanf("%d",&ht);
    scanf("%f",&sal);
    pag=sal*ht;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",pag);
    return 0;
}

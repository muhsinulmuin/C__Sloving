#include <stdio.h>

int main() {
    int dias, anos, meses, diasRestantes;
    
    scanf("%d", &dias);
    
    anos = dias / 365;
    meses = (dias % 365) / 30;
    diasRestantes = (dias % 365) % 30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, diasRestantes);
    
    return 0;
}
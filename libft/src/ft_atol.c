
#include "libft.h"

int ft_atol(const char *str)
{
    int i;
    int sign;
    int res;

/*
i -> indice per scorrere la riga
sign -> tiene traccia del segno del numero (1 per positivo, -1 per negativo)
res -> accumula il risultato numerico 
*/

i = 0;
res = 0;
sign = 1;

/*
i parte da 0, res parte da 0 perche' iniziamo a costruire il numero
sign e' inizialmente positivo
*/

while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
{
    i++;
}

/*
questo ciclo salta tutti i caratteri "bianchi" iniziali
la condizione copre i caratteri di tab,newline,
carriage return,vertical tab,form feed(codice ASCII 9-13)
*/

if(str[i] == '+' || str[i] == '-')
{
    if (str[i] == '-')
        sign = -sign;
    i++;
}
/*
questa parte gestisce il segno del numero dato,
se e' negativo restituira' il numero intero moltiplicato
per il segno,in modo da avere un risultato accurato 
a livello di codice
*/

while (str[i] >= '0' && str[i] <= '9')
{
    res = (res * 10) + (str[i] - 48);
    i++;
}


}
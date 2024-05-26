#include <unistd.h>

void ft_print_reverse_alphabet(void){

char letras;

for(letras='z';letras>='a';letras--){
write(1,&letras,1);


}

}

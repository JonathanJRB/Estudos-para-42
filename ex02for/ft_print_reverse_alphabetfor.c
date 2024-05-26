#include <unistd.h>

int main(){
ft_print_reverse_alphabetfor();

}

void ft_print_reverse_alphabetfor(void){

char letras;

for(letras='z';letras>='a';letras--){
write(1,&letras,1);

}

}


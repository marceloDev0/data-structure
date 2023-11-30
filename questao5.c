# include < stdio .h >
int main ( ) {
int i ;
for ( i =1 ; i <= 100 ; i *=100) {
if ( i ==30 ) {
break ;
}
else {
printf ("%2d\n" ,2* i ) ;
}
}
printf ("Fim do laco !\n") ;
return 0;
}

// o programa vai iniciar o I com 1, o if não vai ser inicializado o programa vai pular para o else e ai vai printar 2.
// em seguida o i vai recebe 100, de novo vai pular o if e printar 200 que é a multiplicação do i por 2
//e por fim vai printar fim do laço
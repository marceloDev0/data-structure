# include < stdio .h >
int main ( ) {
int N_ant , N_prox , N , N_atual // falta ponto e vírgula
N_ant = N_atual =1; // faltou inicializar o N
for( i =1 ,i <= N , i ++) { // no lugar da vírgula era pra ser ponto e vírgula. variavél I não declarada
N_prox = N_ant + N_atual ;
N_ant = N_atual ;
N_atual = N_prox ; // falta a "chave" para fechar o for.

printf ("Fim do laco !\n") ;
return // falta " 0; " depois do return.
}
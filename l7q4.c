/*A função incrementa_pont altera diretamente a variável por receber seu endereço, enquanto incrementa altera apenas uma cópia do valor recebido. Durante a execução, 
x é incrementado duas vezes por ponteiros e depois recebe o valor retornado por incrementa(x), ficando com 13. Já y não é alterado pelas chamadas de incrementa, 
pois seus retornos são ignorados, sendo incrementado apenas na instrução (*py)++, ficando com 101. Assim, a saída é:
x = 13, *px = 13
y = 101, *py = 101*/
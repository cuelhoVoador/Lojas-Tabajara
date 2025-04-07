#include <iostream> //incluir fluxo de entrada e sa�da
using namespace std; //utilizado para evitar a repeti��o de std durante o programa

int main() { //ponto de partida do programa

    while (true) { //while => estrutura de repeti��o, executa uma s�rie de comandos enquanto um valor for verdadeiro
        cout << "=======Lojas Tabajara=======" << endl << endl; //cout � o comando que imprime um texto no dispositivo de sa�da e endl pula uma linha
        cout << "Seja bem-vindo(a)" << endl << endl;
		cout << "Insira os precos um a um,  para encerrar pressione 0" << endl << endl;
        float total, preco; //float � o tipo de vari�vel correspondente � um n�mero real
        int numero = 1; //int � o tipo de vari�vel correspondente � um n�mero inteiro

//inseri uma estrutura de repeti��o para que o programa n�o pare de executar (utilizando �true�).
//ap�s isso imprimi o t�tulo da loja e declarei as vari�veis total e pre�o sendo n�meros reais
//e a vari�vel n�mero sendo um n�mero inteiro tendo valor igual a 1, para que a repeti��o
//comece a partir do n�mero 1 

        while (true) {
            cout << "Produto " << numero << ": R$"; 
            cin >> preco; //cin � o comando que armazena o valor digitado na entrada em uma vari�vel
            
            if (preco == 0) { //if executa comandos se a condi��o apresentada for verdadeira
                break; //break � o comando que quebra uma repeti��o
            }
            
//fiz uma outra estrutura de repeti��o para o contador ap�s �Produto� que ser� impresso na tela
//depois utilizei o if e break para quando for inserido o n�mero 0, o programa encerrar a repeti��o dos produtos.


            
            total += preco; //+= corresponde a opera��o aritim�tica utilizada para atribuir � uma vari�vel o resultado da opera��o de soma
            numero++; //++ se  refere � uma incrementa��o na repeti��o num�rica
        }
        
        cout << endl <<"Total: R$" << total << endl;
        
        float dinheiro;
        cout << endl <<"Dinheiro: R$";
        cin >> dinheiro;
        
        float troco = dinheiro - total;
        if (troco < 0){
            cout << endl <<"Dinheiro insuficiente, compra nao efetuada." << endl << endl;
        }else{
        cout << endl << "Troco: R$" << troco << endl << endl;
        cout << ".......COMPRA ENCERRADA......." << endl << endl;
        
        total = 0; //ao encerrar a compra, iguala o total a 0, para que o total de compras diferentes n�o se somem
        }
        
        
        
//fiz uma opera��o para que o total seja a soma do valor de todos os produtos
//declarei a vari�vel dinheiro para que o utilizador insira a quantia que ser� usada para pagar
//ap�s isso criei a vari�vel troco que retorna o valor do dinheiro menos o total da compra
//e imprimi na tela esse valor

    }
}



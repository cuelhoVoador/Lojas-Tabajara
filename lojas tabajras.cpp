#include <iostream> //incluir fluxo de entrada e saída
using namespace std; //utilizado para evitar a repetição de std durante o programa

int main() { //ponto de partida do programa

    while (true) { //while => estrutura de repetição, executa uma série de comandos enquanto um valor for verdadeiro
        cout << "=======Lojas Tabajara=======" << endl << endl; //cout é o comando que imprime um texto no dispositivo de saída e endl pula uma linha
        cout << "Seja bem-vindo(a)" << endl << endl;
		cout << "Insira os precos um a um,  para encerrar pressione 0" << endl << endl;
        float total, preco; //float é o tipo de variável correspondente à um número real
        int numero = 1; //int é o tipo de variável correspondente à um número inteiro

//inseri uma estrutura de repetição para que o programa não pare de executar (utilizando “true”).
//após isso imprimi o título da loja e declarei as variáveis total e preço sendo números reais
//e a variável número sendo um número inteiro tendo valor igual a 1, para que a repetição
//comece a partir do número 1 

        while (true) {
            cout << "Produto " << numero << ": R$"; 
            cin >> preco; //cin é o comando que armazena o valor digitado na entrada em uma variável
            
            if (preco == 0) { //if executa comandos se a condição apresentada for verdadeira
                break; //break é o comando que quebra uma repetição
            }
            
//fiz uma outra estrutura de repetição para o contador após “Produto” que será impresso na tela
//depois utilizei o if e break para quando for inserido o número 0, o programa encerrar a repetição dos produtos.


            
            total += preco; //+= corresponde a operação aritimética utilizada para atribuir à uma variável o resultado da operação de soma
            numero++; //++ se  refere á uma incrementação na repetição numérica
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
        
        total = 0; //ao encerrar a compra, iguala o total a 0, para que o total de compras diferentes não se somem
        }
        
        
        
//fiz uma operação para que o total seja a soma do valor de todos os produtos
//declarei a variável dinheiro para que o utilizador insira a quantia que será usada para pagar
//após isso criei a variável troco que retorna o valor do dinheiro menos o total da compra
//e imprimi na tela esse valor

    }
}



#include <iostream>
#include <stdlib.h> //lib para limpar a tela
#include <clocale> //lib para passar para português
#include <locale.h>
#include <string.h>
#include<math.h>
#include <stdio.h>

using namespace std;

int main()

{   int opcao;
    do {
         setlocale(LC_ALL,"Portuguese"); //Atribuição do portugues
        //Minha mensagem no menu, endl significa quebra da linha

        cout << "Calculadora de Conversao de bases" << endl;
        cout << "Favor digitar a opcao de conversao"<< endl;
        cout << "1 - Binario para Decimal"<< endl;
        cout << "2 - Decimal para Binario"<< endl;
        cout << "0 - Sair" << endl;

        //Aqui faço a leitura da opção digitada
        cin >> opcao;

        system("clear||cls");// Aqui limpo a tela
        cout<< endl << "A opcao digitada foi: " << opcao << endl;


        if (opcao == 1)
        {
            int bin, dec = 0, i;;
            cout << "1 - Conversão Binário para Decimal: " << endl;
            cin >> bin;
            cout << "O valor binario foi: "<< bin << endl;

            for(i = 0; bin > 0; i++)
            {
                dec = dec + pow(2, i) * (bin % 10);

                bin = bin / 10;

            }
            cout << "O valor decimal  e: "<< dec << endl;



        }
        else if(opcao == 2)
        {
            int dec, bin[10], i;
            cout << "2 - Convesao Decimal para Binário:" << endl;
            cin >> dec;
            cout << "O valor digitado Decimal foi: "<< dec << endl;
            //for para pegar o resto da divisão do decimal e adicionar em um array e divide o decimal por 2
            for(i=0; dec>0; i++)
            {
            bin[i]=dec%2;
            //divide o numero decimal por 2
            dec = dec/2;
            }
            cout<<"O numero convertido em binário= ";
            //for para percorrer o array e imprmir o resultado invertendo a posição
            for(i=i-1 ;i>=0 ;i--)
            {
            cout<<bin[i];
            }
            cout << "\n";

        }
        else if (opcao == 0)
            cout << "Saindo do programa" << endl;
        else
        {
        cout << "Digite uma opção correta!"<< endl;
        }
    }while (opcao != 0);
    return 0;

}

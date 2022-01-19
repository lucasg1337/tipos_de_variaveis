#include <iostream>

using namespace std;

short int inteiro = 10;// short indica que variavel do tipo int vai alocar pouca memoria
int base_de_dez = 20e4;//inteiro representado em potencia de 10 usando 'e' no caso 20 * 10/4
bool booleana = true;// tipo bool armazena apenas dois valores 0 ou 1(false ou true)
char caractere = 'c';//armazena apenas um caracter,podendo ser espaço em branco " "
char cadeia[20] = {'a','b','c'};// cadeia de caracteres
char letra{'g'};//jeito de iniciar uma variavel char
long int num_hex = 0xfa;
double double_num = 2.4378655432;
wchar_t uma_letra{L'y'};


int main () {
    cout << "valor de inteiro : " << inteiro << endl;
    cout << "valor de base_de_dez(20e4) :" << base_de_dez << endl;
    if(booleana==1){
        cout << "Valor de booleana e TRUE\n";
    }
    cout << "caractere: " << caractere << " cadeia[0]: " << cadeia[0] << " cadeia[1]: " << cadeia[1] << " letra: " << letra << endl;
    cout << "valor de num_hex(0xfa): " << num_hex << endl;
    cout << "variavel double_num: " << double_num << endl;
    cout << "variavel uma_letra: " << uma_letra; << "\n";// nesse caso o caractere armazenado saiu em forma de tabela asc||
}

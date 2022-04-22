#include <iostream>
#include <time.h>

using namespace std;

int main(){
    srand(time(0));
    string senha;

    string data = "abcdefghijklmnopqrstuvwxyz"
                  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                  "0123456789"
                  "~`!@#$%^&*()_-+=[{}]|;:'/.,<>";

    int qtd;

    cout << "Informe a quantidade de caracteres (no mínimo 6) que deseja em sua senha: ";
    cin >> qtd;

    if (qtd >= 6){
        for (int i = 0; i <= qtd; i++){
            senha = senha + data[rand() % 93];
        }
    } else {
        cout << "A quantidade informada é menor que 6!";
        exit(0);
    }

    cout << "Sua senha gerada é: " << senha;

    return 0;
}

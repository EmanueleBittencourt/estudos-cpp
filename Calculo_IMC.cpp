#include <iostream>

using namespace std;

int main (){

float peso, altura, imc;

cout << "Insira sua Peso (Kg):" << endl;
cin >> peso;
cout << "Insira sua Altura (m):" << endl;
cin >> altura;

imc = peso/(altura*altura); // calculo do IMC

if ( imc < 18.5){
    cout << "IMC: Abaixo do peso" << endl;
}
else if(imc > 25){
        cout << "IMC: Acima do peso" << endl;
}
else{     
    cout << "IMC: Peso normal" << endl;
}

cout << "Seu IMC: " << imc << endl;

return 0;
}
//se incluye la libreria estandar
//Explicacion mas extensa: https://youtu.be/x6qFMSRpgpM
#include <iostream>

using namespace std;

//declaracion de la funcion recursiva
int mcd(int a, int b){
   // si el residuo de a / b es 0 se retorna b
   if(a % b == 0){
      return b;
   }else{
      //si no se vuelve a llamar a la funcion distintos parametros
      return mcd(b, a % b);
   }
}
//declaracion de la funcion principal
int main(){
   //declaracion de las variables
   int a, b;
   cout << "Ingresa dos numeros: ";
   cin >> a >> b;
   int resultado = 0;
   //se comprueba que numero es mayor para que algoritmo funcione
   if(a > b){
       resultado = mcd(a,b);
   }else{
       resultado = mcd(b,a);
   }
   //imprimimos  el mcd
   cout << "Resultado del maximo comun divisor : " << resultado << endl;
   // el mcm resulta de la multipliacion y division
   int resultadomcm = (a * b) / resultado;
   //imprimos el resultado
   cout << "Resultado del minimo comun multiplo: " << resultadomcm;
   return 0;
}

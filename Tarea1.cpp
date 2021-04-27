#include <iostream>
#include <String>
using namespace std; 

int main()
{
   double libra=0;
   double pulgadas=0;
   double BMI=0;
   string obmasa=0;

    cout<< "Ingrese su peso en libras";
    cin>> libra;

    cout<< "Ingrese su estatura en pulgadas";
    cin>> pulgadas;

   //Cacular

   BMI = libra * 703 / pulgadas * pulgadas;
   
   if(BMI <= 18.5) {
      obmasa = "Bajo peso";
   }

   else if(BMI <= 18.5 && BMI <=24.9) {
       obmasa = "Peso normal";
   }

   else if(BMI <=25 && BMI <=29.9) {
       obmasa = "Sobrepeso";
   }

   else {
       obmasa = "Obeso";
   }

   
    cout<< "Su peso BMI es: " << BMI << endl;
    cout<< "Su indice de masa corporal es: " << obmasa << endl;

    cout<< "\nVALORES DE BMI";
    cout<< "Bajo peso: menos de 18.5";
    cout<< "Normal: entre 18.5 y 24.9";
    cout<< "Sobrepeso entre 25 y 29.9";
    cout<< "Obeso: 30 o mas";

    return 0;
}
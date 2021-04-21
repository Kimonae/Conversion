/* Program Conversion
Author: Duncan.T
*/

#include <iostream>
#include <sstream>
#include <string>
#include <math.h>

using namespace std;
//déclarations globales

char choix;
int nb;
int base10;
string base16;
char digit[16] = {'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};


int B1016 ()
 {

 // Calcul
   base16 +"";
   cout << "Entrez un entier de base 10 =  ";
   cin>> base10;

   while(base10 != 0){

    base16 += digit [base10 % 16];
    base10 /= 16;


//lecture du string à l'envers
for(int k = base16.size()-1; k != -1; k--){
    base16 += base16[k];

}
  return base10;

 }
 }

int main()
{

//choix

  cout << endl << "Entrez un entier a convertir en hexadecimal: 1";
  cout << endl <<"Entrez un entier hexadecimal a convertir en decimal: 2";
  cout << endl <<"Quittez : Q " << endl;
  cin >> choix ;
 while(choix !=  'Q' || choix != 'q'){

{

//Base 10 à 16
if(choix == '1'){

//affichage
  B1016();
  cout <<"Nombre converti en base de 16 =  " <<base16.substr(base16.size()/2) << endl;

   }
}

//Choix numéro 2

if(choix == '2') {
    cout<<endl << "Saisir un entier de base 16 =  ";
    cin >> base16;

    //boucles et affichage
    for(int k = base16.size()-1; k != -1; k--) {
        base16 += base16[k];
    }
    base16 = base16.substr(base16.size()/2);

    // parcours du vecteur et calcul

            for(int k = 0; base16.size(); k++){

                nb = 0;
                for(int j = 0; j <= 15; j++){

                    if (base16[k] == digit[j]){
                        nb = j;
                    }
                }
   base16 += pow(k, 16) *nb;

    cout<<endl << "Nombre converti en base 10 =  " << base16;
}
}

  //Choix continuer
  cout << "Voulez vous continuez a convertir? (O/N) ";
  cin >> choix;

 if(choix == 'o' || choix == 'O'){
    main();
}
    return 0;
}
 } 
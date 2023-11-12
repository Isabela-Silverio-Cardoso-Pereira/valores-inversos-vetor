/******************************************************************************

Crie dois vetores de inteiros, a e b, ambos de mesmo tamanho. Insira valores no vetor a.
Através de um laço, copie os valores do vetor a para o vetor b de modo que b seja o inverso
de a. Imprima os vetores.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int va[3];
    int vb[3];
    int valoresA[3];
    
   cout << "digite os valores " << endl;
   for (int i = 0; i<3; i++){
       cout << "valores: " << endl;
       cin >> valoresA[i];
       
       
       
   }

 
 
   for (int i  = 0; i<3; i++){
       int a = valoresA[i];
       vb[i] = a;
      
       
       
       
   }

    for(int i = 0; i<3; i++){
        cout << vb[i] << endl;
    }
    
    
}

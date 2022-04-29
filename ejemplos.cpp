/*
*
*  $  g++ ejemplos.cpp -o salida
*  $ ./salida
*
*/

// 3.

#include<iostream>
using namespace std;

int mcd(int a, int b);
int mcd(int a, int b){
   while(b){
    int aux = b;
    b = a%b;
    a = aux;
   }
   return a;
}

int main(int argc, char *argv[]){
  if(argc < 0){
   cout<<"Debe haber al menos dos numeros"<<endl;
   cout<<"Ej. ->  ./salida 3 4"<<endl;
  }else{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    cout<<"El MCD de a = "<<a<<", b = "<<b<<endl;
    cout<<" es: "<<mcd(a,b)<<endl;
  }
  return 0;
}


// 2.

#include<iostream>
using namespace std;


int main(int argc, char *argv[]){
  cout<<"No. argumento(s): "<<argc<<endl;
  cout<<"Nombre del programa: "<<argv[0]<<endl; 
  for(int i=1; i < argc ;i++){
    cout<<"Dato: "<<argv[i]<<endl;
  }
  return 0;
}


// 1.

#include<iostream>
using namespace std;
typedef int Entero;

int main(){
  Entero entero = 33;
  cout<<"El doble de "<<entero<<" es: "<<(entero*2)<<endl;
  return 0;
}
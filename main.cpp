#include <iostream>
using namespace std;
void burbuja (int a[],int n, int b[], int contador);
void ingresar(int a[],int n);



int main() {

  int arreglo[100],arreglob[100];
  int n;
  int contador=0;
  
  cout << "Ingrese el tamaño del arreglo: ";
  cin >> n;
  ingresar(arreglo,n);
  cout << endl;
  burbuja(arreglo,n,arreglob,contador);

  cout << endl;
  
  return 0;
}

void ingresar(int a[],int n)
{
  
  for(int i=0;i<n;i++)
  {
    cout << "Ingrese los numero del arreglo" <<"["<< i+1 << "] : ";
    cin >> a[i];
  }
}

void burbuja(int a[] , int n , int b[] , int contador)
{ int j=0;
  for(int i=0;i<n;i++ )
  {
    if(a[i]%2==0)
{
  b[j]=a[i];
  j++;
  contador++;
  }
  }
  for(int j=0;j<contador;j++)
  {
    cout << b[j] << " ";
  }
}

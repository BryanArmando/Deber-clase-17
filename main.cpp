#include <iostream>
using namespace std;
void llenar();
void nuevo(int a[]);
void imprimir();
//comentarios
int main() {
int a[10];
llenar();
imprimir();
nuevo(a);
imprimir();
return 0; 
}

void llenar(){
  int p=0;
  int a[10];
  for(int i=1;i<=10;i++){
    cout<<"Ingrese el elemento "<<i<<endl;
    cin>>p;
    if(p>=50 && p<=100){
      a[i]=p;
    }
    else i--;
  }
}

void nuevo(int a[]){
  a[10]={};
  for(int i=1;i<=10;i++){
    a[i]=a[i]*0.5;    
  }

}
void imprimir(){
  int a[10];
  for(int i=1;i<=10;i++){
    cout<<a[i]<<"\t";
  }
  cout<<endl;
}
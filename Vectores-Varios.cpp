#include <bits\stdc++.h>
using namespace std;
vector<int>GenerarVectorA(vector<int>A,int n);
vector<int>GenerarVectorB(vector<int>A,float p);
vector<int>GenerarVectorC(vector<int>A);
float Promedio(vector<int>A,int n);
int ElementosMultiplosde2y3(vector<int>A);
int SumarElementos(vector<int>A);
void MostrarVector(vector<int>A,vector<int>B,vector<int>C);
int main(){
	vector<int>A,B,C;
	int n,e,s;
	float p;
	cout<<"Ingrese la cantidad de elementos del vector:"<<endl;
	cin>>n;
	A=GenerarVectorA(A,n);
	p=Promedio(A,n);
	B=GenerarVectorB(A,p);
	s=SumarElementos(A);
	C=GenerarVectorC(A);
	cout<<"Vector:";
	MostrarVector(A,B,C);
	cout<<"El promedio es:"<<p<<endl;
	cout<<"La suma de los elementos del vector:"<<s<<endl;
	return 0;
}
vector<int>GenerarVectorA(vector<int>A,int n){
	srand(time(NULL));
	int e;
	for(int i=0;i<n;i++){
		e=rand()%32000;
     	A.push_back(e);
	}
	return A;
}
float Promedio(vector<int>A,int n){
	int suma;
	float promedio;
	for(int i=0;i<A.size();i++){
		suma=suma+A[i];
	}
	promedio=suma/n;
	return promedio;
}
vector<int>GenerarVectorB(vector<int>A,float p){
	vector<int>B;
	for(int i=0;i<A.size();i++){
		if(A[i]>p){
			B.push_back(A[i]);
		}
	}
	return B;
}
int ElementosMultiplosde2y3(vector<int>A){
	int contador;
	for(int i=0;i<A.size();i++){
		if(A[i]%2==0 && A[i]%3==0){
			contador++;
		}
	}
	return contador;
}
int SumarElementos(vector<int>A){
	int suma;
	for(int i=0;i<A.size();i++){
		suma=suma+A[i];
	}
	return suma;
}
vector<int>GenerarVectorC(vector<int>A){
	vector<int>C;
	int multiplicar;
	for(int i=0;i<A.size();i++){
		multiplicar=A[i]*2;
		C.push_back(multiplicar);
	}
	return C;
}
void MostrarVector(vector<int>A,vector<int>B,vector<int>C){
	for(int i=0;i<A.size();i++){
		cout<<A[i]<<"/";
	}
	cout<<endl;
	cout<<"Vector B:";
	for(int i=0;i<B.size();i++){
		cout<<B[i]<<"/";
	}
	cout<<endl;
	cout<<"Vector C:";
	for(int i=0;i<C.size();i++){
		cout<<C[i]<<"/";
	}
	cout<<endl;
}
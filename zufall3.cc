#include<iostream>
#include<cmath>
#include<math.h>
#include<fstream>
using namespace std;

double zufall(int a, int c,int m){
  static double Ij=0;
  static double Uj;
  Ij= fmod((Ij*a+c),m);
  Uj=Ij/m;
  return Uj;

}

double piFkt(int K,int a,int c,int m){
  double Z2;
  double Z3;
  int Ni=0;
  int N=0;
  for(int i=0 ; i<K ; ++i){
    Z2 = zufall(a,c,m);
    Z3 = zufall(a,c,m);
    if (sqrt(pow (Z2,2)+ pow(Z3,2))<=1){
      Ni=Ni+1;
    }
    else{
      N=N+1;
    }
  }
  double pi= 4*Ni/K;
  return pi;
}

int main(){
  double pi = piFkt(100,205,29573,139968);
  double p = pi/4;
  double E = p*100;
  double V = p*(1-p)*100;
  double sig = 4*(sqrt(V))/100;
  double pi2 = piFkt(100,5,3,16);
  cout<< pi << " " << p << " " << E << " " << V << " " << sig << endl;
  cout<<piFkt(100,5,3,16)<<endl;

} 
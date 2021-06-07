#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

double zufall(int a,int c, int m){
  static double Ij=0;
  static double Uj=0;
  Ij= fmod((Ij*a+c),m);
  Uj=Ij/m;
  return Uj;
}

int main(){
  int N = 100;
  double Z1;
  double Z2;
  int Ni=0;
  int Na=0;
  for(int i=0;i<=N;++i){
    Z1=zufall(205,29573,139968);
    Z2=zufall(205,29573,139968);
    if (sqrt(pow (Z1,2)+ pow(Z2,2))<=1){
      Ni=Ni+1;
    }
    else{
      Na=Na+1;
    }
  }
  double pi=4*Ni/(double) N;
  cout<<pi<<endl;
  cout<<Ni<<endl;

}

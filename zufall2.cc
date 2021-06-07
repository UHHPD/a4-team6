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

double piFkt(int N,int a,int c,int m){
  double Z1;
  double Z2;
  int Ni=0;
  int Na=0;
  for(int i=0 ; i<N ; ++i){
    Z1 = zufall(a,c,m);
    Z2 = zufall(a,c,m);
    if (sqrt(pow (Z1,2)+ pow(Z2,2))<=1){
      Ni=Ni+1;
    }
    else{
      Na=Na+1;
    }
  }
  double pi= 4.0*Ni/(double) N;
  cout<<pi<<" "<<Ni<<endl;
  return pi;
}


double EW(double pi,int N){
  double EW = N*pi/4.0;
  cout<< EW << endl;
  return EW;
}

double V(double pi,int N){
  double p = pi/4.0;
  double V = p*(1-p)*N;
  cout<< V <<endl;
  return V;
}

double STABW(double pi,int N){
  double p = pi/4.0;
  double V = p*(1-p)*N;
  double STABW=4.0*(sqrt(V))/N;
  cout<< STABW <<endl;
  return STABW;
}



int main(){
  
  double pi1 = piFkt(100,5,3,16);
  double EW1 = EW(pi1,100);
  double V1 = V(pi1,100);
  double STABW1 = STABW(pi1,100);

  double pi2 = piFkt(100,205,29573,139968);
  double EW2 = EW(pi2,100);
  double V2 = V(pi2,100);
  double STABW2 = STABW(pi2,100);
  
  double pi3 = piFkt(10000,5,3,16);
  double EW3 = EW(pi3,10000);
  double V3 = V(pi3,10000);
  double STABW3= STABW(pi3,10000);

  double pi4 = piFkt(10000,205,29573, 139968);
  double EW4 = EW(pi4,10000);
  double V4 = V(pi4,10000);
  double STABW4= STABW(pi4,10000);
  
  double pi5 = piFkt(100000,5,3,16);
  double EW5 = EW(pi4,100000);
  double V5 = V(pi5,100000);
  double STABW5 = STABW(pi5,100000);

  double pi6 = piFkt(100000,205,29573,139968);
  double EW6 = EW(pi6,100000);
  double V6 = V(pi6,100000);
  double STABW6 = STABW(pi6,100000);

  double pi7 = piFkt(1000000,5,3,16);
  double EW7 = EW(pi7,100000000);
  double V7 = V(pi7,1000000);
  double STABW7 = STABW(pi7,1000000);

  double pi8 = piFkt(1000000,205,29573,139968);
  double EW8 = EW(pi8,100000000);
  double V8 = V(pi8,1000000);
  double STABW8 = STABW(pi8,1000000);
} 

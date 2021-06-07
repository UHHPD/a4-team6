#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

double zufall(int a, int c, int m){

  double uj;
  double Ij=0;
  for(int j = 0;j <=m ; ++j){
    Ij = fmod((Ij*a+c),m);
    uj =

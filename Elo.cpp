#include<cmath>
#include "Elo.h"

Elo::Elo(){
    setK(32);
    setRa(1613);
    setRb(1609);
}

Elo::Elo(int a, int b, int c ){
    setK(a);
    setRa(b);
    setRb(c);
}

void Elo::setK(int n){
    K = n;
}

void Elo::setRa(int n){
    Ra = n;
}

void Elo::setRb(int n){
    Rb = n;
}

int Elo::getRa(){
    return Ra;
}

int Elo::getRb(){
    return Rb;
}

void Elo::setRealScore(float n){
    RealScoreA=n;
}
int Elo::calc(){
//                cout << K << "\t"<< Ra<< "\t" << Rb <<endl;
//                cin >> RealScoreA ;
    RealScoreB = 1.0-RealScoreA;
    ExpectedScoreA=1/(1+pow(10,((Rb-Ra)/400.0)));
    ExpectedScoreB=1/(1+pow(10,((Ra-Rb)/400.0)));
    Ra = round (Ra+K*(RealScoreA-ExpectedScoreA));
    Rb = round (Rb+K*(RealScoreB-ExpectedScoreB));
    }


#include <iostream>
using namespace std;
class Elo{
public:
    Elo();
    Elo(int a, int b, int c);
    void setK(int n);
    void setRa(int n);
    void setRb(int n);
    void setRealScore(float n);
    int getRa();
    int getRb();
    int calc();
private:
    int K;
    int Ra;
    int Rb;
    int RoundNumber;
    double ExpectedScoreA, ExpectedScoreB, RealScoreA, RealScoreB;
};

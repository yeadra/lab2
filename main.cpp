#include<iostream>
#include"Elo.h"
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
    int Ra, Rb , K, i;
    float Sa;
	ifstream filein("file.in",ios::in);
	if(!filein){
		cerr<<"Failed opening"<<endl;
	exit(1);
	}
//	cout <<endl;
	filein>> K >> Ra>> Rb;	
	Elo obj(K, Ra, Rb);
	ofstream fileout("file.out",ios::out);
	fileout<<obj.getRa()<<"\t"<<obj.getRb()<<endl;	
//	while (filein!='\0'){
		while(filein >>Sa){		
   			//cin >> Sa;
    		obj.setRealScore(Sa);
    		obj.calc();
    		fileout<<obj.getRa()<<"\t"<<obj.getRb()<<endl;
  			++i;
		}
//	}
    return 0;
}


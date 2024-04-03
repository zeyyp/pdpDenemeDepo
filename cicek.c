#include <stdio.h>
#include <stdlib.h>

typedef enum{false,true} bool;

struct SEKIL{
	double genislik;
	double yukseklik;
	bool renklimi;
	
};

typedef struct SEKIL* Sekil;

Sekil SekilOlustur(double genislik, double yukseklik, bool renklimi){
	
	Sekil this; //int* ptr
	this= (Sekil)mallloc(sizeof(struct SEKIL));
	
	this->genislik=genislik;
	this->yukseklik=yukseklik;
	this->renklimi=renklimi;
	
	return this;
}
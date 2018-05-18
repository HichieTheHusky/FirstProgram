#pragma once
#include <string>
//#include "Detales.h"



struct ApieDetal {

std::string D_ID,
			D_Koment;

	 int D_Kiekis,
		 D_Ilgis,
		 D_Plotis,
		 D_Aukstis,
		 D_Pagam;
};


public class detales
{
public:

	int n;
	ApieDetal FabDetales [500];
	
	
public:
	detales();
	void detales::NaujaDetal(std::string ID_D, std::string Koment_D, int Kiekis_D, int Ilgis_D, int Plotis_D, int Aukstis_D, int Pagam_D );
	void detales::duomenufailas();
	std::string convert(System::String ^ text);
	void detales::is_failo();
	void detales::pasalinti(int k);
};

#pragma once
#include <string>
//#include "Detales.h"



struct ApieOper {

std::string O_ID,
			O_Vard,
			O_Pav,
			O_Data1,
			O_Data2;
};


public class operatoriai
{
public:

	int n;
	ApieOper FabOper [500];
	
	
public:
	operatoriai();
	void operatoriai::NaujasOper(std::string ID_O, std::string Vard_O, std::string Pav_O, std::string Data1_O, std::string Data2_O);
	void operatoriai::duomenufailas();
	std::string convert(System::String ^ text);
	void operatoriai::is_failo();
	void operatoriai::pasalinti(int k);
};

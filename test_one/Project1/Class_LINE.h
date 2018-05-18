#pragma once
#include <string>

struct ApieLinija {
	
	std:: string L_VP,
				 L_detal,
				 L_nr,
				 L_koment;
	int L_kiekis;
};

public class linija
{
public:
	int n;
	ApieLinija FabLin [100];

public:
	linija();
	void linija::NaujasLinij(std::string VP_L, std::string detal_L, int kiekis_L, std::string nr_L, std::string L_koment);
	void linija::duomenufailas();
	std::string convert(System::String ^ text);
	void linija::is_failo();
	void linija::pasalinti(int k);
	void linija::naikinti(int k);
	void linija::ataskaita(std::string kordinate);
	void linija::sudetis(std::string test_detal, int test_kiek);
};
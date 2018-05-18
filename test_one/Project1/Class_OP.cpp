#include "Class_OP.h"

#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>


operatoriai::operatoriai()
{
	std::ifstream fd("OpSar.dat");

	n=0;
	std::string eilute;
	while (!fd.eof())
	{
		getline (fd, FabOper[n].O_ID, '*');
		getline (fd, FabOper[n].O_Vard, '$');
		getline (fd, FabOper[n].O_Pav, '~');
		getline (fd, FabOper[n].O_Data1, '&');
		getline (fd, FabOper[n].O_Data2, '%');

		fd.ignore(80, '\n');
		n++;
	}
	n--;
	fd.close();
}
std::string operatoriai::convert(System::String ^ text)
{
	msclr::interop::marshal_context context;
	std::string standard = context.marshal_as<std::string>(text);
	return standard;
}
void operatoriai::NaujasOper(std::string ID_O, std::string Vard_O, std::string Pav_O, std::string Data1_O, std::string Data2_O)
{
		FabOper[n].O_ID = ID_O;
		FabOper[n].O_Vard = Vard_O;
		FabOper[n].O_Pav = Pav_O ;
		FabOper[n].O_Data1 = Data1_O;
		FabOper[n].O_Data2 = Data2_O;

		n++;
}
void operatoriai::pasalinti(int k)
{
	for (int i = k; i < n - 1; i++)
		FabOper[i] = FabOper[i+1];
	n--;
}
void operatoriai::duomenufailas()
{
	std::ofstream fr("OpSar.dat");
	for (int i = 0; i < n; i++)
		   fr << FabOper[i].O_ID << "*" << FabOper[i].O_Vard << "$" << FabOper[i].O_Pav << "~" << FabOper[i].O_Data1 << "&" << FabOper[i].O_Data2 <<'%' <<'\n';
	fr.close();
}
void operatoriai::is_failo()
{
	std::ifstream fd("OpSar.dat");

	n=0;
	std::string eilute;
	while (!fd.eof())
	{
		getline (fd, FabOper[n].O_ID, '*');
		getline (fd, FabOper[n].O_Vard, '$');
		getline (fd, FabOper[n].O_Pav, '~');
		getline (fd, FabOper[n].O_Data1, '&');
		getline (fd, FabOper[n].O_Data2, '%');

		fd.ignore(80, '\n');
		n++;
	}
	n--;
	fd.close();
}

#include "Class_part.h"

#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>

detales::detales()
{
	std::ifstream fd("DetalSar.dat");

	n=0;
	std::string eilute;
	while (!fd.eof())
	{
		getline (fd, FabDetales[n].D_ID, '*');
		getline (fd, FabDetales[n].D_Koment, '~');
		fd >> FabDetales[n].D_Kiekis;
		fd >> FabDetales[n].D_Ilgis;
		fd >> FabDetales[n].D_Plotis;
		fd >> FabDetales[n].D_Aukstis;
		fd >> FabDetales[n].D_Pagam;
		fd.ignore(80, '\n');
		n++;
	}
	n--;
	fd.close();
}
std::string detales::convert(System::String ^ text)
{
	msclr::interop::marshal_context context;
	std::string standard = context.marshal_as<std::string>(text);
	return standard;
}
void detales::NaujaDetal(std::string ID_D, std::string Koment_D, int Kiekis_D, int Ilgis_D, int Plotis_D, int Aukstis_D, int Pagam_D )
{
		FabDetales[n].D_Koment = Koment_D;
		FabDetales[n].D_ID = ID_D;
		FabDetales[n].D_Kiekis = Kiekis_D ;
		FabDetales[n].D_Ilgis = Ilgis_D;
		FabDetales[n].D_Plotis = Plotis_D;
		FabDetales[n].D_Aukstis = Aukstis_D;
		FabDetales[n].D_Pagam = Pagam_D;
		n++;
}
void detales::pasalinti(int k)
{
	for (int i = k; i < n - 1; i++)
		FabDetales[i] = FabDetales[i+1];
	n--;
}
void detales::duomenufailas()
{
	std::ofstream fr("DetalSar.dat");
	for (int i = 0; i < n; i++)
		   fr << FabDetales[i].D_ID << "*" << FabDetales[i].D_Koment << "~" << FabDetales[i].D_Kiekis << " " << FabDetales[i].D_Ilgis << " " << FabDetales[i].D_Plotis << " " << FabDetales[i].D_Aukstis << " " << FabDetales[i].D_Pagam <<'\n';
	fr.close();
}
void detales::is_failo()
{
	std::ifstream fd("DetalSar.dat");
	n=0;
	std::string eilute;
	while (!fd.eof())
	{
		getline (fd, FabDetales[n].D_ID, '*');
		getline (fd, FabDetales[n].D_Koment, '~');
		fd >> FabDetales[n].D_Kiekis;
		fd >> FabDetales[n].D_Ilgis;
		fd >> FabDetales[n].D_Plotis;
		fd >> FabDetales[n].D_Aukstis;
		fd >> FabDetales[n].D_Pagam;
		fd.ignore(80, '\n');
		n++;
	}
	n--;
	fd.close();
}

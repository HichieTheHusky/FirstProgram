	#include "Class_LINE.h"

	#include <fstream>
	#include <string>
	#include <msclr\marshal_cppstd.h>

	linija::linija()
	{
		std::ifstream fd("LinSar.dat");

		n=0;
		std::string eilute;
		while (!fd.eof())
		{
			getline (fd, FabLin[n].L_VP, '*');
			getline (fd, FabLin[n].L_detal, '$');
			getline (fd, FabLin[n].L_nr, '~');
			getline (fd, FabLin[n].L_koment, '&');
			fd >> FabLin[n].L_kiekis;
			fd.ignore(80, '\n');
			n++;
		}
		n--;
		fd.close();
	}
	
	void linija::NaujasLinij(std::string VP_L, std::string detal_L, int kiekis_L, std::string nr_L, std::string koment_L)
	{
			FabLin[n].L_VP = VP_L;
			FabLin[n].L_detal = detal_L;
			FabLin[n].L_nr = nr_L;
			FabLin[n].L_koment = koment_L;
			FabLin[n].L_kiekis =  kiekis_L;

			n++;
	}
	void linija::duomenufailas()
	{
		std::ofstream fr("LinSar.dat");
		for (int i = 0; i < n; i++)
		fr << FabLin[i].L_VP << "*" << FabLin[i].L_detal << "$" << FabLin[i].L_nr << "~" << FabLin[i].L_koment << "&" << FabLin[i].L_kiekis <<'\n';
		fr.close();
	}
	std::string linija::convert(System::String ^ text)
	{
		msclr::interop::marshal_context context;
		std::string standard = context.marshal_as<std::string>(text);
		return standard;
	}
	void linija::is_failo()
	{

		std::ifstream fd("LinSar.dat");

		n=0;
		std::string eilute;
		while (!fd.eof())
		{
			getline (fd, FabLin[n].L_VP, '*');
			getline (fd, FabLin[n].L_detal, '$');
			getline (fd, FabLin[n].L_nr, '~');
			getline (fd, FabLin[n].L_koment, '&');
			fd >> FabLin[n].L_kiekis;
			fd.ignore(80, '\n');
			n++;
		}
		n--;
		fd.close();
	}
	void linija::pasalinti(int k)	
	{
		for (int i = k; i < n - 1; i++)
		FabLin[i] = FabLin[i+1];
		n--;
	}
	void linija::naikinti(int k)	
	{
		n=k;
	}
	void linija::ataskaita(std::string kordinate)
	{
		kordinate+="\\SMM_Ataskaita.txt";
		std::ofstream fr1(kordinate);
		fr1<<"Ataskaita: "<<'\n';
		fr1<<'\n';

		std:: string S_VP[100],
					 S_nr[100];
			 int S_kiekisV[100];
			 int S_kiekisN[100];
			 int max;

		S_VP[0] = FabLin[0].L_VP;
		S_nr[0] = FabLin[0].L_nr;
		S_kiekisV[0] = FabLin[0].L_kiekis;
		S_kiekisN[0] = FabLin[0].L_kiekis;

		int n1 = 1;
		int n2 = 1;
		for(int i = 1; i < n; i++)
		{
			for (int j = 0; j < n1; j++)
				{
				//fr1 <<"test"<<S_VP[j]<<"   "<<FabLin[i].L_VP<<'\n';
				if(S_VP[j]==FabLin[i].L_VP)
					{
					 S_kiekisV[j] += FabLin[i].L_kiekis;
					break;
					}
				else if(j==(n1-1))
					{
					 S_VP[n1] = FabLin[i].L_VP;
					 S_kiekisV[n1] = FabLin[i].L_kiekis;
					 n1++;
					 break;
					}
				}
		}

		for(int i = 1; i < n; i++)
			{			
				for (int j = 0; j < n2; j++)
					{
					if(S_nr[j]==FabLin[i].L_nr)
						{
							S_kiekisN[j] += FabLin[i].L_kiekis;
							break;
						}
					else if(j==(n2-1))
						{
							S_nr[n2] = FabLin[i].L_nr;
							S_kiekisN[n2] = FabLin[i].L_kiekis;
							n2++;
							break;
						}
					}
			}
	
		max =  S_kiekisV[0];
		for (int i = 1; i < n1; i++) if(max < S_kiekisV[i]) max = S_kiekisV[i];
		
		for (int i=0; i<n1; i++)
		 for (int j=1; j<n1; j++)
		   if (S_kiekisV[j-1]<S_kiekisV[j])
			 {
			   int t=S_kiekisV[j-1];
			   S_kiekisV[j-1]=S_kiekisV[j];
			   S_kiekisV[j]=t;

			   std::string tu =S_VP[j-1];
			   S_VP[j-1]=S_VP[j];
			   S_VP[j]=tu;
     }
		fr1 <<"Darbuotujiu pagamintu detaliu kiekis: "<<'\n';
		fr1 << '\n';
		for (int i = 0; i < n1; i++)
		{
			fr1 <<S_VP[i]<<"   "<<S_kiekisV[i]<<'\n';
		}
		fr1 << '\n';
		fr1 <<" Produktiviausi darbuotojai : " <<'\n';
		for (int i = 0; i <n1; i++) if (S_kiekisV[i] == max) fr1 << S_VP[i]<< '\n';
		fr1 << '\n';

		max =  S_kiekisN[0];
		for (int i = 1; i < n2; i++) if(max < S_kiekisN[i]) max = S_kiekisN[i];

		for (int i=0; i<n2; i++)
		 for (int j=1; j<n2; j++)
		   if (S_kiekisN[j-1]<S_kiekisN[j])
			 {
			   int t=S_kiekisN[j-1];
			   S_kiekisN[j-1]=S_kiekisN[j];
			   S_kiekisN[j]=t;

			   std::string tu =S_nr[j-1];
			   S_nr[j-1]=S_nr[j];
			   S_nr[j]=tu;
			 }
		fr1 << "Masinu naudojimo kiekis: "<<'\n';
		fr1 << '\n';
		for (int i = 0; i < n2; i++)
		{
			fr1 <<S_nr[i]<<"   "<<S_kiekisN[i]<<'\n';
		}
		fr1 << '\n';
		fr1 << "Populiariausios masinos/ Populiariausia masina) : "<<'\n';
		for (int i = 0; i <n2; i++) if (S_kiekisN[i] == max) fr1 << S_nr[i]<< '\n';
		fr1 << '\n';
	}
void linija::sudetis(std::string test_detal, int test_kiek)
{
	
}
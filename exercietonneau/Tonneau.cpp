#include "Tonneau.h"

void Tonneau::remplir()
{
	contenu = contenance;
}

void Tonneau::vider()
{
	contenu = 0;
}

void Tonneau::transferer(Tonneau dest)
{
	contenu - contenance;
}

void Tonneau::affTonneau()
{

}

int Tonneau::getContenu()
{
	return contenu;
}

int Tonneau::getContenant()
{
	return contenance;
}

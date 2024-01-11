#pragma once
class Tonneau
{
private:
	int contenance, contenu;
public:
	void remplir();
	void vider();
	void transferer(Tonneau dest);
	void affTonneau();
	int getContenu();
	int getContenant();
	Tonneau(int capacite);

};


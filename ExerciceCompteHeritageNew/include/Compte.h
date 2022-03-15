#ifndef COMPTE_H
#define COMPTE_H
#include <iostream>
#include <string>
#include "Client.h"
#include "Devise.h"

using namespace std;
class Compte
{
    private:
      const int NumCompte;
      static int Cpt;
      Client* Proprietaire;
      Devise* Solde;
    public:
      Compte();
      Compte(Client* Prop,Devise* Solde);
      virtual bool TransfererArgent(Compte*c, Devise montant);
      virtual void ConsulterSolde() const;
      virtual void DeposerArgent(Devise montant);
	  virtual bool RetirerArgent(Devise montant);
	  Devise CalculInteret(double Taux);
	  bool CheckSolde(Devise dec,Devise Montant)const;
	  bool CheckSolde2(Devise Montant)const;
	  Devise CalculPayant(Devise Montant)const;
	  virtual ~Compte();
};

#endif // COMPTE_H

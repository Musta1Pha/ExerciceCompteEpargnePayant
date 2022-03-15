#ifndef COMPTECOURANT_H
#define COMPTECOURANT_H
#include <iostream>
#include <string>
#include "Compte.h"

class CompteCourant:public Compte
{
    private:
      Devise Decouvert;
    public:
      CompteCourant(Client* Prop,Devise* Solde,Devise Dec);
      void ConsulterSolde()const override;
      bool RetirerArgent(Devise Montant)override;
      virtual ~CompteCourant();


};

#endif // COMPTECOURANT_H

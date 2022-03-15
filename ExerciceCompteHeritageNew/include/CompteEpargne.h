#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include <iostream>
#include <string>
#include "Compte.h"

class CompteEpargne:public virtual Compte
{
    private:
      double TauxInteret;
    public:
      CompteEpargne(Client* Prop,Devise* Solde,double Taux);
      void ConsulterSolde()const override;
      void CalculTauxInteret();
      virtual ~CompteEpargne();

};

#endif // COMPTEEPARGNE_H

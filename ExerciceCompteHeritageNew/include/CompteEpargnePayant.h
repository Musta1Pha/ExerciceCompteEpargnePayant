#ifndef COMPTEEPARGNEPAYANT_H
#define COMPTEEPARGNEPAYANT_H
#include "CompteEpargne.h"
#include "ComptePayant.h"
#include <iostream>
#include <string>

class CompteEpargnePayant:public CompteEpargne,public ComptePayant
{
    private:

    public:
      CompteEpargnePayant(Client* Prop,Devise* Solde,double Taux);
      void ConsulterSolde()const override;
      bool RetirerArgent(Devise Montant)override;
      bool TransfererArgent(Compte* c,Devise Montant)override;
      virtual ~CompteEpargnePayant();


};

#endif // COMPTEEPARGNEPAYANT_H

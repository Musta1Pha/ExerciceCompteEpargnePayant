#ifndef COMPTEPAYANT_H
#define COMPTEPAYANT_H
#include <iostream>
#include <string>
#include "Compte.h"

class ComptePayant:public virtual Compte
{
    private:

    public:
      ComptePayant(Client* Prop,Devise* Solde);
      bool RetirerArgent(Devise Montant);
      virtual ~ComptePayant();

};

#endif // COMPTEPAYANT_H

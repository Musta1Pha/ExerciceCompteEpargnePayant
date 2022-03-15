#include "CompteEpargne.h"
#include <iostream>
#include <string>

CompteEpargne::CompteEpargne(Client* Prop,Devise* Solde,double Taux):Compte(Prop,Solde)
{
    this->TauxInteret = Taux;
}

void CompteEpargne::ConsulterSolde()const
{
    this->Compte::ConsulterSolde();
    std::cout<<"Taux : "<<this->TauxInteret<<std::endl;
}

void CompteEpargne::CalculTauxInteret()
{
   Devise res = this->CalculInteret(this->TauxInteret);
   this->DeposerArgent(res);
}

CompteEpargne::~CompteEpargne()
{
    std::cout<<"Destructeur de la classe CompteEpargne"<<std::endl;
}

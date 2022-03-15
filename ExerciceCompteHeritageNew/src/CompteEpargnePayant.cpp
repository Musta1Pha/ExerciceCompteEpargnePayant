#include "CompteEpargnePayant.h"
#include <iostream>
#include <string>

CompteEpargnePayant::CompteEpargnePayant(Client* Prop,Devise* Solde,double Taux):CompteEpargne(Prop,Solde,Taux),
ComptePayant(Prop,Solde),Compte(Prop,Solde)
{

}

void CompteEpargnePayant::ConsulterSolde()const
{
    this->Compte::ConsulterSolde();
    std::cout<<"TauxInteret :"<<this->TauxInteret<<std::endl;
}

bool CompteEpargnePayant::RetirerArgent(Devise Montant)
{
    this->ComptePayant::RetirerArgent(Montant);
}

CompteEpargnePayant::~CompteEpargnePayant()
{
    std::cout<<"Destructeur de la classe CompteEpargnePayant"<<std::endl;
}

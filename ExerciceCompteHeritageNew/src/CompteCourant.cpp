#include "CompteCourant.h"
#include <iostream>
#include <string>

CompteCourant::CompteCourant(Client* Prop,Devise* Solde,Devise Dec):Compte(Prop,Solde)
{
    this->Decouvert = Dec;
}

void CompteCourant::ConsulterSolde()const
{
    this->Compte::ConsulterSolde();
    this->Decouvert.Afficher();
}

bool CompteCourant::RetirerArgent(Devise Montant)
{
    if(CheckSolde(this->Decouvert,Montant)){
        this->Compte::RetirerArgent(Montant);
        return true;
    }
    else return false;
}

CompteCourant::~CompteCourant()
{
    std::cout<<"Destructeur de la classe CompteCourant"<<std::endl;
}

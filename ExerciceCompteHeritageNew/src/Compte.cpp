#include "Compte.h"
#include <iostream>
#include <string>

int Compte::Cpt=0;

Compte::Compte(Client* Prop,Devise* Solde):NumCompte(++Compte::Cpt)
{
    this->Proprietaire = Prop;
    this->Solde = Solde;
}

void Compte::ConsulterSolde()const
{
    std::cout<<"NumCompte : "<<this->NumCompte<<std::endl;
    std::cout<<"Proprietaire : ";
    this->Proprietaire->Afficher();
    std::cout<<"Solde : ";
    this->Solde->Afficher();
}

bool Compte::RetirerArgent(Devise Montant)
{
     if(*(this->Solde) >= Montant){
        *(this->Solde) -= Montant;
        return true;
     }
     else return false;
}

void Compte::DeposerArgent(Devise Montant)
{
    *(this->Solde) += Montant;
}

bool Compte::TransfererArgent(Compte* c,Devise Montant)
{
    if(RetirerArgent(Montant)){
        c->DeposerArgent(Montant);
        return true;
    }
    else return false;
}

Devise Compte::CalculInteret(double Taux)
{
    Devise t(Taux / 100);
    return (*(this->Solde)*t);
}

bool Compte::CheckSolde(Devise Dec,Devise Montant)const
{
    Devise res(*(this->Solde) - Montant);
    return res >= Dec;
}

Devise Compte::CalculPayant(Devise Montant)
{
    Devise res(*(this->Solde) - Montant*1.05)
}

bool Compte::CheckSolde2(Devise Montant)const
{
    return *(this->Solde)-Montant*1.05 >= *(this->Solde) - *(this->Solde);
}

Compte::~Compte()
{
    std::cout<<"Detstructeur de la classe Compte"<<std::endl;
}

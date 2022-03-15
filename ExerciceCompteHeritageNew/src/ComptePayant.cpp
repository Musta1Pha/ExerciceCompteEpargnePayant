#include "ComptePayant.h"

ComptePayant::ComptePayant(Client* Prop,Devise* Solde):Compte(Prop,Solde)
{

}

bool ComptePayant::RetirerArgent(Devise Montant)
{
    if(this->CheckSolde2(Montant)){
        this->Compte::RetirerArgent(this->Compte::CalculPayant(Montant));
        return true;
    }
    else return false;
}

ComptePayant::~ComptePayant()
{

}

#include "Client.h"
#include <iostream>
#include <string>

int Client::Cpt=0;
Client::Client(string Nom,string Prenom):Matricule(++Client::Cpt)
{
    this->Nom = Nom;
    this->Prenom = Prenom;
}

void Client::Afficher()const
{
    std::cout<<"Matricule : "<<this->Matricule<<std::endl;
    std::cout<<"Nom : "<<this->Nom<<std::endl;
    std::cout<<"Prenom : "<<this->Prenom<<std::endl;
}

Client::~Client()
{
    std::cout<<"Destructeur de la classe Client"<<std::endl;
}

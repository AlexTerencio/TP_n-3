#include <iostream>
#include "Personne.h"

using namespace std;

// Méthodes

void Personne::demenager(string nouvelle_adresse)
{
    m_adresse = nouvelle_adresse;
}

void Personne::anniversaire()
{
    m_age++;
}

void Personne::changer_travail(string nouveau_travail)
{
    m_profession = nouveau_travail;
}

void Personne::marier(string nouveau_nom)
{
    m_nom = nouveau_nom;
}

Personne::Personne() : m_nom("Sans Nom"), m_prenom("Sans Prenom"), m_age(0), m_profession("Sans Profession"), m_adresse("Chez Maman et Papa")
{
}

Personne::Personne(string nom, string prenom, unsigned short age, string profession) : m_nom(nom),m_prenom(prenom),m_age(age), m_profession(profession), m_adresse("PARIS")
{
}
void Personne::afficher() const // On crée une méthode constante pour afficher nos attributs
{
    cout << "Nom : " << m_nom << endl;
    cout << "Prenom : " << m_prenom << endl;
    cout << "Age : " << m_age << endl;
    cout << "Profession : " << m_profession << endl;
    cout << "Adresse : " << m_adresse << endl << endl;
}
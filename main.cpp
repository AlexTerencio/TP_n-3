    #include <iostream>
    #include "Personne.h"

    using namespace std;

    int main()
    {
        // Création des 4 personnages
        Personne sarko("SARKOZY", "Nicolas", 62, "Avocat"); // Création de l'objet sarko
        Personne carlita("BRUNI", "Carla", 50, "Mannequin"); // Création de l'objet carlita
        Personne manu("MACRON", "Emmanuel", 40, "Banquier"); // Création de l'objet manu
        Personne bibi("TROGNEUX", "Brigitte", 64, "Enseignante"); // Création de l'objet bibi
        
        // Affichage des informations des 4 personnages avant l'utilisation des objets
        cout << "On affiche les informations des 4 personnages avant l'utilisation des objets" << endl;
        sarko.afficher();
        carlita.afficher();
        manu.afficher();
        bibi.afficher();

        // Action sur les objets
        carlita.marier("SARKOZY"); // Carla  BRUNI se marie avec nicolas SARKOZY
        bibi.marier("MACRON"); // Brigitte se marie avec Emmanuel MACRON
        manu.demenager("Palais de l'Elysée, 75008 PARIS"); // Emmanuel MACRON déménage à l'Elysée
        bibi.demenager("Palais de l'Elysée, 75008 PARIS"); // Brigitte MACRON déménage à l'Elysée
        sarko.anniversaire(); //nicolas SARKOZY a 1 ans de plus
        sarko.changer_travail("Hommes d'Affaires"); // Nicolas SARKOZY a toujours aimé l'argent !
        carlita.changer_travail("Chanteuse"); // Faut croire que carla BRUNI sait chanter
        manu.changer_travail("Président de la République"); // Emmanuel MACRON devient Président
        bibi.changer_travail("Première Dame"); // Brigitte MACRON devient la premiere Dame

        // Affichage des informatons des 4 perosnnages après l'utilisation des objets
        cout << "On affiche les informations des 4 personnages après l'utilisateur des objets" << endl;
        sarko.afficher();
        carlita.afficher();
        manu.afficher();
        bibi.afficher();
        
        return 0;
    }
# TString
C++ Library to translate the texts
TString 

 

Le but de ce projet vient de la problématique suivante : 
 
En C/C++ on a longtemps utilisé le type ‘‘char *’’ afin d’y stocker les chaînes de caractères mais on a rencontré des soucis de gestion de mémoire et avec le passage sur de l’orienté-objet il fallait bien profiter du plein potentiel du C++. 

On a donc créé la classe std::string qui nous permet une gestion plus efficace des chaînes de caractères en profitant de ce que ce nouveau paradigme a dans le ventre. Mais même ici on rencontre un autre souci... 
Dans le cas où on souhaite faire de l’affichage graphique de textes pour une application en plusieurs langues. 

Dans ce genre de moment-là, on doit trouver sa propre astuce pour gérer ce problème car il n’existe pas de libraires qui te permettent de facilement gérer les différentes langues que l’on souhaite implémenter à notre application. 

C’est pour répondre à cette problématique que je souhaite créer “TString”. Le but sera de pouvoir manier une chaîne de caractère multiple avec en son sein les chaînes de caractères correspondant à chacun des termes dans les langues que l’on souhaite. 

```
TString::defineLanguages(“Francais”, “Anglais”, “Portugais”);

TString exemple = [“Coucou”, “Hello”, “Oi”]; 

TString::setLanguage(“Anglais”); 
cout << exemple << std::endl; // Affiche “Hello” 
TString::setLanguage(“Portugais”); 
cout << exemple << std::endl; // Affiche “Oi” 
```

Il y aurait quelques fonctions statiques pour : 
- Définir les différents langages 
- Récupérer les langues disponibles 
- Choisir la langue à afficher 
- Récupérer la langue choisie 

Et des fonctions membres pour faire ce que les std::string savent faire : 
- Size 
- Substring 
- Resize 
- Etc... 

Des surcharges d’opérateurs pour retourner la string correspondante en fonction de la langue choisie

Version 0.0.1 
Changer la langue depuis un interpréteur de commandes 

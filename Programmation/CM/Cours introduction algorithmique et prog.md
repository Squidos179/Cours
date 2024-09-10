# Cours introduction algorithmique et prog. :



- 15h CM

- 30h TD

- 40h TP

**Algorithme** : séquence d'instructions finie qui permet résoudre un problème indépendamment du code 

- Savoir expliquer son raisonnement, ce que qu'on veut faire sans ambiguïté
- Peut-être de nombreuse formes différentes (dessin, recette, organigramme, etc)

**Il faut** :

- Identifier les données
- Les actions à faire
- Le résultat

**Instructions algorithmique** : 

- Affectation de variable
- Calculs
- Lecture/écriture
- Test
- Itérations

**Pseudo-code** : 

- En français
- Une suite d'instruction séquentielle
- Chaque instruction se termine par un ;
- // = commentaire
- Une liste de mots clés (Qu'on apprendra)

Exemple :

```pseudocode
progamme Premier
	// Commentaire
debut
	//variable
	chaine : nom, prenom;
	//lecture des données
	ecrire("Votre nom : "); //print
	nom := lire();
	ecrire("Votre prénom : ");
	prenom := lire();
	//affichage du résultat
	ecrire("bonjour", prenom, "", nom);
fin
```

Et en C : 

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char nom[50], prenom[50];
    printf("Votre nom : ");
    scanf("%s", nom);
    printf("Votre prénom  : ");
    scanf("%s", prenom);
    printf("Bonjour %s %s", nom, prenom);
    return EXIT_SUCCESS
}
```

> [!IMPORTANT]
>
> Il faut spécifier l'adresse de la variable (&) avec 'scanf' sauf si la variable est une table de caractères

**Les variables** : 

- Stockent des données
- Peuvent changer de valeurs
- Sont de différents types (int, float, char, string etc)
- Est une constante si a toujours la même valeurs
- A une place dans la RAM à une adresse spécifique
- Une fois qu'on arrête d'utiliser la variable, il faut nettoyer la RAM

**Déclarer une variable** : 

- Au début du programme avant les instructions
- Sans majuscule à la première lettre, sans accents, sans espaces

Exemple : 

```c
int maVariable; // <type> <nom>
int maVariableBis := 3;
```

### Partie C :

**Compilation en C** : 

- Compilation des fichiers sources
- Edition des liens (linker)
- Programme exécutable

**Options du compilateur** : 

- -o Permet de nommer le fichier de sortie
- -Wall Active toutes les sécurités

Exemple de fichier source : 

```c
//Inclusion des bibliothèques
#include <libName>

int main() {
    return EXIT_SUCESS; // Equivalant de return 0; en c++
}
```

**Type des variable : **

- Les entiers :

  - short int : entier sur deux octets

  - Unsigned short int : entier positif sur deux octets

  - int : entier sur 32 ou 16  bits

  - Unsigned int : entier positif sur deux 32 ou 16 bits

  - Long int : entier forcément sur 32 bits

  - Unsigned long int : entier positif sur 32 bits

  > [!IMPORTANT]
  >
  > La division de deux entiers est une division entière

- Les réels : 

  - float : Réel sur 4 octets, précision sur 7 chiffres
  - double : Réel sur 8 octets, précision sur 15 chiffres
  - Long double : Réel sur 10 octets, précision sur 17 chiffres

  > [!TIP]
  >
  > Il est possible de convertir en réel en un entier

- Les caractères : 

  - char : un simple caractère, codé sur un octet

  - unsigned char : caractère non signé, codé sur un octet

  - char[] : une table de caractère, qui se termine par l'entier 0

  - Exemple  :

    ```
    char a; 
    char a[50]; //une table de caractère qui peut contenir 49 caractères (0 prend une place à la fin
    ```

**Les booléens** : 

- bool : un booléen, prend la valeur true ou false

  > [!TIP]
  >
  > 1 = true
  >
  > 0 = false

> [!TIP]
>
> On note 'const' avant le type de la variable pour déclarer une constante

**Chaînes de caractères** : 

Il existe une librairie pour gérer les chaînes de caractères, string.h : 

```c
#include <string.h>

int main(){
    
  	int value;
    char prenom[50], message[100];
    
    strcpy(prenom, "Phillipe"); // Copie "Phillipe" dans prénom
    strcpy(message, "Bonjour"); // Copie "Bonjour" dans message
    
    strcat(message, prenom); // Ajoute prenom à message
    
    value = strcmp(prenom, nom); // Comparaison des deux chaînes
    return 0;
}
```

**Formateurs :**

- %d : entier
- %c : caractère
- %f : réel
- %s : string
- %p : adresse mémoire

////////////////////////////////////////////////////////////////////////////////////////
//
// Vous devez indiquer si chacune des propositions est vraie (true) ou fausse (false).
//
// Exemple : Le C++ est le meilleur langage de tous les temps.
#define ANSWER_EX1 true
//                 ^^^^ indiquez votre réponse ici
//
// Exemple : Le Java est le meilleur langage de tous les temps.
#define ANSWER_EX2 false
//                 ^^^^^
//
////////////////////////////////////////////////////////////////////////////////////////

// Pour indiquer qu'une fonction-membre ne modifie pas l'état de l'objet, on écrit const
// devant le type de retour de la fonction.
#define ANSWER_1 false
//après la définition des paramètre

// Le type char* est le mieux adapté pour représenter des chaînes de caractères.
#define ANSWER_2 false
//String

// On ne peut pas définir de fonctions-membres dans une struct.
#define ANSWER_3 true

// Le littéral 0u est de type unsigned int.
#define ANSWER_4 true
//on peut mais on le fait pas car c'est des classes et si on le précise pas il est pas private


// Une variable booléenne se définit avec le type "boolean".
#define ANSWER_5 false
//bool

// Le constructeur d'une classe n'a pas de type de retour.
#define ANSWER_6 true
//même si dans le .cpp on écrit class::class

// Le destructeur d'une classe a pour type de retour "void".
#define ANSWER_7 false
//meme chose que le constructeur et pas de renvoie de void

// On peut utiliser "inline" pour définir des attributs statiques directement dans la classe.
#define ANSWER_8 true

// Si une fonction est définie dans deux fichiers-objets différents, l'erreur se produit lors de la phase de
// build.
#define ANSWER_9 false
//ils compilent mais c'est au moment du link que ça plante dû au fait qu'il y multiple déclarations de la meme fonction

// Le mot-clef "auto" sert à définir des variables sans préciser leur valeur initiale.
#define ANSWER_10 false
//sans préciser leur type 

// Le type "std::vector" sert à créer des tableaux alloués dynamiquement.
#define ANSWER_11 true

// Il faut toujours penser à appeler "delete" sur les pointeurs observants.
#define ANSWER_12 false
//observants c'est pas moi mais ownens c'est à moi de le désallouer

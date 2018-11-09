<NOM>
<Prenom>

Compte Rendu TP IDA
===================

Remarques Générales
-------------------------------------
L'objectif de ce TP est d'identifier des erreurs dans l'élaboration du programme level3 et leurs conséquences.
On considérera dans un premier temps que le programme s'éxécute en local, puis éventuellement qu'il s'exécute sur une machine distante.
Expliquez clairement les failles identifiées: expliquez votre démarche pour les trouver, l'endroit ou elles se trouvent, et leurs conséquences respectives.

Le format est libre, si vous voulez vous pouvez suivre le plan d'action proposé et y ajouter vos commentaires. N'oubliez pas de justifier vos réponses.

1. Executer level3 et identifier les différentes fonctionnalitées.

2. Retrouver les addresses dans le main des différents choix du menu principal, et renommer les fonctions correspondantes.

3. La création de nouveaux comptes ne fonctionne pas. Rechercher le code d'erreur en tant que valeur immédiate avec IDA pour identifier le problème.

4. Modifier votre système pour permettre la création de nouveaux comptes.

5. Créer un nouvel utilisateur et faire une hypothèse sur le format de la base de comptes.

6. Confirmer votre hypothèse avec IDA.

7. Est-ce une façon raisonable de stocker des mots de passe? Si oui, justifiez, si non, décrire la bonne façon.

8. Est-il possible de modifier un fichier arbitraire du système?

9. Il y a un buffer overflow dans la fonctionalité de connection.
  + Faire une hypothèse sur l'information qui peut déborder, vérifier en modifiant un ficher base de comptes.
  + Dessiner la pile au début de la function de connection.
  + identifier la function qui provoque le débordement

10. Exploiter le buffer overflow en modifiant un fichier base de comptes avec un éditeur hexadecimal (par exemple bless) pour exécuter le code suivant:
31c050682f2f7368682f62696e89e389c189c2b00bcd8031c040cd80
Décrire la démarche et expliquer ce que fait ce code.

11. Citer des protections permettant de rendre difficile cette exploitation. Une autre faille (via la création d'un utilisateur particulier) permet d'en contourner certaines.

12. Repenser au format de stockage. Dans l'hypothèse ou le service s'exécute sur un ordinateur distant, vous n'avez pas accès aux fichiers de bases de comptes.
  + Est-il possible d'usurper l'identité d'un autre utilisateur?
  + Est-il possible de rejouer l'attaque par buffer overflow? avec le même code?

13. Avez-vous trouvé d'autres failles ou faiblesses?

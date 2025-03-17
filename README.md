Version alternative de so_long qui gère la transparence (non soumise à évaluation)

# Fichiers gérant la transparence
Créés par Tywael en mars 2025

Ses fonctions font appel à la librairie X11 déjà utilisée par la minilibx, ce qui met cette version de so_long dans une zone grise; c'est pourquoi elle n'a pas été soumise à évaluation. Lorsque j'ai réalisé que je ne la ferai pas évaluer, je me suis permise plus de liberté concernant la norme: **en l'état, le projet ne passe pas la norminette!**

# Quels changements par rapport à la version sans transparence?
1. La transparence permet de superposer des images: il ne faut donc pas oublier de placer un fond d'abord à chaque fois qu'on veut afficher une image avec du transparent par-dessus. Dans ce projet, cela implique de remettre systématiquement du sol, un collectible ramassé ou une sortie (en fonction de la case) avant d'afficher le joueur; ce qui n'était pas nécessaire dans la version sans transparence.
2. Les images de fond utilisent toujours la fonction de base de la mlx pour être affichées; seules les images du joueur utlisent la fonction permettant de gérer la transparence.
3. Les fichiers gérant la transparence ont été ajoutés au Makefile, et les protoypes de leurs fonctions au header.
4. Pour ne pas trop contrarier la norme (bien qu'elle ne soit malgré tout pas respectée), j'ai recréé une structure dans le header pour éviter d'avoir trop de variables à déclarer ou passer en argument; en effet, certaines fonctions permettant de gérer la transparence ont besoin de plus de 5 variables.


# Nom de l'exécutable
NAME = zombie

# Compilateur et options
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Fichiers sources et objets
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRC:.cpp=.o)

# Règle par défaut
all: $(NAME)

# Création de l'exécutable à partir des fichiers objets
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Règle pour compiler les fichiers objets (.o) à partir des fichiers sources (.cpp)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ)

# Nettoyage complet (y compris l'exécutable)
fclean: clean
	rm -f $(NAME)

# Recompilation complète
re: fclean all

.PHONY: all clean fclean re

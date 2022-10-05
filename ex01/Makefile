NAME= phonebook
COMP= c++
FLAGS= -std=c++98 -Wall -Wextra -Werror
SRC= Contact.cpp PhoneBook.cpp main.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
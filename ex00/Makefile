CC 			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

NAME 		= megaphone

MAIN_FILE	= megaphone.cpp

MAIN_OBJ	= $(MAIN_FILE:%.cpp=%.o)

define Compile
	$(CC) $(FLAGS) -c $(1) -o $(2)
endef

define Makebin
	$(CC) $(FLAGS) $(1) -o $(2)
endef

all: $(NAME)

%.o: %.c
	$(call Compile,$<,$@)

$(NAME): $(MAIN_OBJ)
	$(call Makebin,$^,$@)

clean:
	rm -rf $(MAIN_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean
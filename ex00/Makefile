CC 			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

NAME 		= megaphone

MAIN_FILE	= megaphone.cpp

MAIN_OBJ	= $(MAIN_FILE:%.c=%.o)

%.o : %.c
	$(CC) $(FLAGS) -c $(MAIN_FILE)

all: $(NAME)

$(NAME): $(MAIN_OBJ)
	$(CC) $(FLAGS) $(MAIN_OBJ) -o $(NAME)

clean:
	rm -rf $(MAIN_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean
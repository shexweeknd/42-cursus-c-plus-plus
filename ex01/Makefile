CC 			= c++

INCLUDES_DIR	= ./includes/

INCLUDES	= -I $(INCLUDES_DIR)

CLASS_DIR	= ./classes/

FLAGS		= -Wall -Wextra -Werror -std=c++98

NAME 		= phonebook

#FILES
MAIN_FILE	= phonebook.cpp

CLASS_FILES = PhoneBook.class.cpp \
				Contact.class.cpp \

CLASS  		= $(addprefix $(CLASS_DIR), $(CLASS_FILES))

#OBJS
MAIN_OBJ	= $(MAIN_FILE:%.cpp=output/%.o)

CLASS_OBJS 	= $(CLASS:$(CLASS_DIR)%.cpp=output/%.o)

#FUNCTIONS
define Compile
	$(CC) $(FLAGS) $(INCLUDES) -c $(1) -o $(2)
endef

define Makebin
	$(CC) $(FLAGS) $(1) -o $(2)
endef

#RULES
all: $(NAME)

output/%.o: %.cpp | output
	$(call Compile,$<,$@)

output/%.o: $(CLASS_DIR)%.cpp | output
	$(call Compile,$<,$@)

$(NAME): $(MAIN_OBJ) $(CLASS_OBJS)
	$(call Makebin,$^,$@)

clean:
	rm -rf $(MAIN_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean
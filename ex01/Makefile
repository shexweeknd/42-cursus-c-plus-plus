CC 			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

NAME 		= phonebook

INCLUDES_DIR	= ./includes/

INCLUDES	= -I $(INCLUDES_DIR)

CLASS_DIR	= ./classes/

FUNC_DIR	= ./functions/

#FILES
MAIN_FILE	= phonebook.cpp

FUNC_FILES	= bezero.cpp \

FUNC  		= $(addprefix $(FUNC_DIR), $(FUNC_FILES))

CLASS_FILES = PhoneBook.class.cpp \
				Contact.class.cpp \

CLASS  		= $(addprefix $(CLASS_DIR), $(CLASS_FILES))

#OBJS
MAIN_OBJ	= $(MAIN_FILE:%.cpp=output/%.o)

FUNC_OBJS	= $(FUNC:$(FUNC_DIR)%.cpp=output/%.o)

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

output/%.o: $(FUNC_DIR)%.cpp | output
	$(call Compile,$<,$@)

$(NAME): $(MAIN_OBJ) $(CLASS_OBJS) $(FUNC_OBJS)
	$(call Makebin,$^,$@)

clean:
	rm -rf $(MAIN_OBJ) $(CLASS_OBJS) $(FUNC_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean
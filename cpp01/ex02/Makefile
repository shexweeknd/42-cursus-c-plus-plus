NAME = HI_THIS_IS_BRAIN

CC = c++

CFLAGS = -g -Wall -Wextra -Werror -std=c++98

# DIRS
INC_DIR = ./inc/
SRC_DIR = ./src/
OBJ_DIR = ./out/

# FILES
SRC_FILES	= main.cpp \

OBJ_FILES 	= $(SRC_FILES:.cpp=.o)

# PATHS
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))

OBJS = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
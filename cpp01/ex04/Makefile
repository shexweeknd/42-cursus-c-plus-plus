NAME = Sed_is_for_losers

REPLACE_FILES := $(shell ls | grep -E '\.replace$$')

CC = c++

CFLAGS = -g -Wall -Wextra -Werror -std=c++98

# DIRS
INCLUDE_DIR = .

SRCS = main.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(REPLACE_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
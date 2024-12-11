NAME = Harl_2_0

CC = c++

CFLAGS = -g -Wall -Wextra -Werror -std=c++98

# DIRS
INCLUDE_DIR = .

SRCS = main.cpp \
		Harl.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
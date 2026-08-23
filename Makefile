NAME = number_checker
FLAG = -Wall -Werror -Wextra $(sld2-config --cflags --libs)
SRCS = main.c

all: $(NAME)

$(NAME): $(OBJS)
	cc $(FLAG) 
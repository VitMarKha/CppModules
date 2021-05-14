.PHONY: all clean bonus fclean re

NAME = megaphone

SRC = megaphone.cpp

CC = clang++

FLAG = -Wall -Werror -Wextra

OPTIONOBJ = -o

DEL = rm -rf

GREEN ='\033[1;32m'

WHITE ='\033[0;37m'

YELLOW ='\033[1;33m'

CYAN ='\033[1;36m'

MAGENTA ='\033[1;35m'

all: $(NAME)

$(NAME): $(HEADER) $(SRC)
	@$(CC) $(FLAG) $(SRC) $(OPTIONOBJ) $(NAME)
	@echo $(GREEN)"Megaphone is done!"$(WHITE)

%.o: %.c $(HEADER)
	$(CC) $(FLAG) $< $(OPTIONOBJ) $@

clean:
	@$(DEL) $(NAME)
	@echo $(GREEN)"All 'o' files deleted."$(WHITE)

fclean: clean
	@$(DEL) $(NAME)
	@echo $(GREEN)"Everything was cleaned."$(WHITE)

re: fclean all
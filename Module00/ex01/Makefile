.PHONY: all clean bonus fclean re

NAME = phonebook

HEADERS = Contact_class.hpp \
          Phonebook_class.hpp

SRC = main.cpp \
      Contact_class.cpp \
      Phonebook_class.cpp

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

$(NAME): $(HEADERS) $(SRC)
	@$(CC) $(FLAG) $(SRC) $(OPTIONOBJ) $(NAME)
	@echo $(GREEN)"Phonebook is done!"$(WHITE)

%.o: %.c $(HEADERS) $(SRC)
	$(CC) $(FLAG) $< $(OPTIONOBJ) $@

clean:
	@$(DEL) $(NAME)
	@echo $(GREEN)"All deleted."$(WHITE)

fclean: clean
	@$(DEL) $(NAME)
	@echo $(GREEN)"Everything was cleaned."$(WHITE)

re: fclean all

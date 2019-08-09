##
## EPITECH PROJECT, 2019
## makefile asm
## File description:
## asm
##

CC		= ld

NAME		= libasm.so

SRC_DIR		= src/

SRC_FILES 	= 	strlen.asm	\
				memset.asm	\
				memcpy.asm	\
				strcmp.asm	\
				rindex.asm	\
				strchr.asm

SRCS		= $(addprefix $(SRC_DIR), $(SRC_FILES))

OBJ		= $(SRCS:.asm=.o)

ASM		= nasm
ASM_FLAGS	= -f elf64

.SILENT:

%.o: %.asm
		$(ASM) -o $@ $< $(ASM_FLAGS)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -shared -o $(NAME) $(OBJ)
	@echo "Compilation : Done"

clean:
	rm -f $(OBJ)
	@echo "Clean : Done"

fclean:	clean
	rm -f $(NAME)
	@echo "Fclean : Done"

re:	fclean all
	@echo "Re : Done"

.PHONY:	all clean fclean re

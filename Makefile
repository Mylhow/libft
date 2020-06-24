.PHONY: all clean fclean re

# Name of file
NAME		=	libft.a

# Name directory
PATH_INC	=	includes
PATH_SRC	=	srcs
PATH_OBJ	=	objs
PATH_LOG	=	logs

# List of sources
SRCS_CTYPE	=	$(addprefix $(PATH_SRC)/ctype/, ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isspace.c ft_isupper.c ft_isxdigit.c ft_tolower.c ft_toupper.c)
SRCS_GNL	=	$(addprefix $(PATH_SRC)/gnl/, get_next_line.c get_next_line_utils.c)
SRCS_LIST	=	$(addprefix $(PATH_SRC)/list/, ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c)
SRCS_MEM	=	$(addprefix $(PATH_SRC)/mem/, ft_calloc.c ft_wrmalloc.c)
SRCS_PUT	=	$(addprefix $(PATH_SRC)/put/, ft_putchar.c)
SRCS_NUMBER	=	$(addprefix $(PATH_SRC)/number/, ft_atoi.c ft_digit.c ft_itoa.c)
SRCS_STRING	=	$(addprefix $(PATH_SRC)/string/, ft_bzero.c ft_chartostr.c ft_memchr.c ft_memcpy.c \
					ft_memset.c ft_strcat.c ft_strcmp.c ft_strichr.c ft_strlen.c ft_substr.c ft_charstr.c \
					ft_memccpy.c ft_memcmp.c ft_memrchr.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c \
					ft_strncmp.c ft_strlcpy.c)
SRCS		=	$(SRCS_CTYPE) $(SRCS_GNL) $(SRCS_LIST) $(SRCS_MEM) $(SRCS_PUT) $(SRCS_NUMBER) $(SRCS_STRING)
OBJS		=	$(addprefix $(PATH_OBJ)/, $(notdir $(SRCS:.c=.o)))
INCS		=	$(wildcard $(PATH_INC)/*.h)
LOG			=	$(addprefix $(PATH_LOG)/, $(patsubst %.a.log,%.log,$(NAME).log))

# Commands of compilation
COMP		=	clang
COMP_FLAG	=	-Wall -Werror -Wextra
COMP_ADD	=	-I$(PATH_INC)

# Others Command
RM			=	/bin/rm

# Color Code and template code
_YELLOW		=	\e[38;5;184m
_GREEN		=	\e[38;5;46m
_RESET		=	\e[0m
_INFO		=	[$(_YELLOW)INFO$(_RESET)]
_SUCCESS	=	[$(_GREEN)SUCCESS$(_RESET)]

# Functions
all:	init $(NAME)
	@ echo "$(_SUCCESS) Compilation done in $$(($$(date +%S)-$$(cat  logs/time.log)))s"
	@ $(RM) -rf $(PATH_LOG)/time.log

init:
	@ date +%S > $(addprefix $(PATH_LOG)/, time.log)
	@ $(shell mkdir -p $(PATH_OBJ) $(PATH_LOG))

$(NAME): $(OBJS) $(INCS)
	@ (set -x; ar rcs $(NAME) $(OBJS)) >> $(LOG) 2>&1

$(PATH_OBJ)/%.o : $(PATH_SRC)/*/%.c $(INCS)
	@ (set -x; $(COMP) $(COMP_FLAG) $(COMP_ADD) -c $< -o $@) >> $(LOG) 2>&1
	@ echo "$(_INFO) Compilation of $*"

clean:
	@ $(RM) -rf $(PATH_OBJ)
	@ echo "$(_INFO) Deleted files and directory"

fclean: clean
	@ $(RM) -rf $(NAME)
	@ $(RM) -rf $(PATH_LOG)
re: fclean all

run: $(NAME)
	@ (set -x; $(COMP) $(COMP_FLAG) $(COMP_ADD) main.c -L. -lft) >> $(LOG) 2>&1
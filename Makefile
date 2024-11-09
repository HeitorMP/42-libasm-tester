
CC              = cc
CFLAGS          = #-Wall -Werror -Wextra -I. Disable due gcc / clang warnings

# Path to libasm.a
PATH_TO_LIBASM_A  = ../libasm.a

# NAMES and DIRS
NAME            = libasm-tester
OBJSDIR         = objs

# Source and object files
TESTERSRC       = tester.c \
				  ft_strlen_tests.c \
				  ft_strcpy_tests.c \
				  ft_strcmp_tests.c \
				  ft_strdup_tests.c \
				  ft_write_tests.c \
				  ft_read_tests.c \
				  ft_atoi_base_tests.c \

TEST_OBJ        = $(TESTERSRC:%.c=$(OBJSDIR)/%.o)

# Rules
all: $(NAME)
	make -C ../

$(OBJSDIR)/%.o: %.c | $(OBJSDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(TEST_OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(TEST_OBJ) $(PATH_TO_LIBASM_A)

$(OBJSDIR):
	mkdir -p $(OBJSDIR)

test: $(NAME)

clean:
	rm -rf $(OBJSDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

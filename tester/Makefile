
CC              = clang
# CFLAGS          = -fsanitize=address # -Wall -Werror -Wextra -I.

# Path to libasm.a
PATH_TO_LIBASM_A  = ../libasm.a

# NAMES and DIRS
NAME            = libasm-tester
OBJSDIR         = objs

# Source and object files
TESTERSRC       = tester.c \
				  ft_list_utils.c \
				  ft_strlen_tests.c \
				  ft_strcpy_tests.c \
				  ft_strcmp_tests.c \
				  ft_strdup_tests.c \
				  ft_write_tests.c \
				  ft_read_tests.c \
				  ft_atoi_base_tests.c \
				  ft_list_size_tests.c \
				  ft_list_push_front_tests.c \
				  ft_list_sort_tests.c \
				  ft_list_remove_if_tests.c \

TEST_OBJ        = $(TESTERSRC:%.c=$(OBJSDIR)/%.o)

# Rules
all: $(NAME)
	make re -C ../

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

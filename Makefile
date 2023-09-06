# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 00:22:15 by lray              #+#    #+#              #
#    Updated: 2023/09/06 02:43:31 by lray             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a

SRCS 		:= \
	src/ft_strlen.c

OBJS		:= $(patsubst src/%.c, obj/%.o, $(SRCS))

TEST_SRCS	:= $(patsubst src/%.c, test/test_%.c, $(SRCS))
TEST_OBJS	:= $(patsubst src/%.c, obj/test_%.o, $(SRCS))
TEST_NAME	:= $(patsubst src/%.c, test_%, $(SRCS))

CC 			:= gcc
CFLAGS		:= -Wall -Wextra -Werror
CPPFLAGS	:= -I./include

AR			:= ar
ARFLAGS		:= -r -c -s

RM			:= rm -f
MAKEFLAGS   += --no-print-directory

obj/%.o: src/%.c
	mkdir -p obj
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
	$(info CREATED $@)

obj/test_%.o: test/test_%.c
	mkdir -p obj
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
	$(info CREATED $@)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(info CREATED $(NAME))

all: $(NAME)


test: $(TEST_OBJS) $(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(TEST_OBJS) $(OBJS) -o $(TEST_NAME)
	$(info CREATED $(TEST_NAME))

clean:
	$(RM) $(OBJS)
	$(info DELETED objects files)

clean_test:
	$(RM) $(TEST_OBJS)
	$(info DELETED object test files)

fclean: clean clean_test
	$(RM) $(NAME)
	$(info DELETED $(NAME))
	$(RM) $(TEST_NAME)
	$(info DELETED $(TEST_NAME))
	rm -rf obj/

re:
	$(MAKE) fclean
	$(MAKE) all

info-%:
	$(MAKE) --dry-run --always-make $* | grep -v "info"

.PHONY : clean clean_test fclean re info-
.SILENT :

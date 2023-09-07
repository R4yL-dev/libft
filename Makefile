# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 00:22:15 by lray              #+#    #+#              #
#    Updated: 2023/09/07 12:26:59 by lray             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= bin/libft.a

CC 			:= gcc
CFLAGS		:= -Wall -Wextra -Werror -I./include -g
TESTFLAGS	:= -fsanitize=address

AR			:= ar
ARFLAGS		:= -r -c -s

SRCDIR 		:= src
OBJDIR		:= obj
BINDIR		:= bin
TESTDIR		:= test

SRCS		:= $(wildcard $(SRCDIR)/*.c)
OBJS		:= $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRCS))
TEST_SRCS	:= $(wildcard $(TESTDIR)/*.c)
TEST_OBJS	:= $(patsubst $(TESTDIR)/%.c,$(OBJDIR)/%.o,$(TEST_SRCS))
TEST_BINS	:= $(patsubst $(TESTDIR)/%.c,$(BINDIR)/%,$(TEST_SRCS))

RM			:= rm -f
MAKEFLAGS   += --no-print-directory

all: init $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(info CREATED $(NAME))

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(info CREATED $@)

test: init $(BINDIR)/tests
	$(info CREATED test)

$(BINDIR)/tests: $(TEST_OBJS) $(OBJS)
	$(CC) $(CFLAGS) $(TESTFLAGS) $(TEST_OBJS) $(OBJS) -o $@
	$(info CREATED $@)

$(OBJDIR)/%.o: $(TESTDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

init:
	mkdir -p $(OBJDIR) $(BINDIR)

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
	$(info DELETED /bin/tests)

re:
	$(MAKE) fclean
	$(MAKE) all

info-%:
	$(MAKE) --dry-run --always-make $* | grep -v "info"

.PHONY : clean clean_test fclean re info-
.SILENT :

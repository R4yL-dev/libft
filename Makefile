# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 00:22:15 by lray              #+#    #+#              #
#    Updated: 2023/09/06 01:09:48 by lray             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a

SRCS 		:= \
	ft_strlen.c


OBJS		:= $(SRCS:.c=.o)

TEST_SRCS	:= $(patsubst %.c, test/test_%.c, $(SRCS))
TEST_OBJS	:= $(patsubst %.c, test/test_%.o, $(SRCS))

CC 			:= gcc
CFLAGS		:= -Wall -Wextra -Werror
CPPFLAGS	:= -I./

AR			:= ar
ARFLAGS		:= -r -c -s

RM			:= rm -f
MAKEFLAGS   += --no-print-directory

.c.o:
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o ${<:.c=.o}
	$(info CREATED $@)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(info CREATED $(NAME))

all: $(NAME)

test: $(TEST_OBJS) $(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(TEST_OBJS) $(OBJS) -o test

clean:
	$(RM) $(OBJS)
	$(info DELETED objects files)

clean_test:
	$(RM) $(TEST_OBJS) test
	$(info DELETED test files)

fclean: clean clean_test
	$(RM) $(NAME)
	$(info DELETED $(NAME))

re:
	$(MAKE) fclean
	$(MAKE) all

info-%:
	$(MAKE) --dry-run --always-make $* | grep -v "info"

.PHONY : clean clean_test fclean re info-
.SILENT :

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 15:53:46 by fclivaz           #+#    #+#              #
#    Updated: 2024/04/13 20:27:53 by fclivaz          ###   LAUSANNE.ch        #
#                                                                              #
# **************************************************************************** #

export MAKEFLAGS += --silent

SRCS	= ${SUBDIR}/main.cpp\
		  ${SUBDIR}/ClapTrap.cpp

SUBDIR	= srcs

OBJ		= $(SRCS:${SUBDIR}/%.cpp=${OBJDIR}/%.o)

OBJDIR	= objs

SRCTREE	= $(shell find srcs -type d)

OBJTREE	= $(SRCTREE:srcs%=${OBJDIR}%)

CFLAGS	= -Wall -Werror -Wextra -O2 -std=c++98

LFLAGS = -I${INCL}

CC	= c++

NAME	= claptrap

INCL	= incl

DEPS	=	${INCL}/ClassClapTrap.hpp\
			${SRCS}

CRED = \033[1;31m
CGRN = \033[1;32m
CYEL = \033[1;33m
RSET = \033[0m

all:	${NAME}

${NAME}:	${DEPS}
		@if [[ $(if $(filter r,${MAKECMDGOALS}),1,0) == "1" ]]; then \
			printf "├──────────\n"; \
		else \
			printf "┌──────────\n"; \
		fi
		@${MAKE} ${OBJ}
		@printf "│\tSources for ${CGRN}${NAME}${RSET} done.\n"
		@${CC} ${OBJ} -o ${NAME} ${LFLAGS}
		@printf "├──────────\n├─>>> ${CGRN}${NAME}${RSET} compiled!\n└──────────\n"

${OBJDIR}/%.o:	${SUBDIR}/%.cpp | ${OBJDIR}
				@printf "│\t > Compiling ${CYEL}$<${RSET} for ${CGRN}${NAME}${RSET}...\r"
				@${CC} ${CFLAGS} -c $< -o $@ ${LFLAGS}
				@printf "\33[2K"

${OBJDIR}:
		@printf "│ Compiling ${CGRN}${NAME}${RSET}...\n"
		@printf "│\tCreating ${CYEL}${OBJTREE}${RSET} for ${CGRN}${NAME}${RSET}\n"
		@mkdir -p ${OBJTREE}

clean:
		@if [[ $(if $(filter r,${MAKECMDGOALS}),1,0) == "1" ]]; then \
			printf "├──────────\n"; \
		else \
			printf "┌──────────\n"; \
		fi
		@if [ -d "./${OBJDIR}" ]; then \
			printf "│\tRemoving ${CRED}${OBJDIR}${RSET} for ${CYEL}${NAME}${RSET}\n"; \
			rm -rf ${OBJDIR}; \
		else \
			if [[ $(if $(filter fclean,${MAKECMDGOALS}),1,0) == "1" ]]; then \
				printf "│\t${CYEL}${OBJDIR}${RSET} already removed!\n├──────────\n"; \
			else \
				printf "│\t${CYEL}${OBJDIR}${RSET} already removed!\n└──────────\n"; \
			fi; \
		fi
		@if [ -d "./${NAME}.dSYM" ]; then \
			printf "│\tRemoving ${CYEL}${NAME}.dSYM${RSET}\n"; \
			rm -rf ${NAME}.dSYM; \
		fi

fclean: clean
		@if [ -e "./${NAME}" ]; then \
			if [[ $(if $(filter r,${MAKECMDGOALS}),1,0) == "1" ]]; then \
				printf "│\tRemoving ${CYEL}${NAME}${RSET}\n"; \
			else \
				printf "│\tRemoving ${CYEL}${NAME}${RSET}\n└──────────\n"; \
			fi; \
			rm -f ${NAME}; \
		else \
			if [[ $(if $(filter r,${MAKECMDGOALS}),1,0) == "1" ]]; then \
				printf "│\t${CYEL}${NAME}${RSET} already removed!\n├──────────\n"; \
			else \
				printf "│\t${CYEL}${NAME}${RSET} already removed!\n└──────────\n"; \
			fi; \
		fi

re:
		@printf "\n┌──────────\n│ Cleaning and ${CGRN}recompiling${RSET}...\n"
		@${MAKE} fclean r
		@${MAKE} all r

.PHONY: all fclean clean re

$(eval r:;@:)

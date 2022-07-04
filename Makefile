# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 20:18:27 by thpham-v          #+#    #+#              #
#    Updated: 2022/06/27 20:36:48 by thpham-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	convert
SRCS			=	main.cpp		\
					what_type.cpp	\
					Convert.cpp
CC				=	@clang++
FLAGS			=	-Wall -Wextra -Werror -std=c++98
OBJDIR			=	objs
OBJS			=	$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

all				:	$(NAME)

$(NAME)			:	$(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $(NAME)
				@echo "\033[1;30m[$(NAME)] \033[1;32mcreated !\033[0m"

${OBJDIR}/%.o	:	%.cpp
				@mkdir -p $(OBJDIR)
				$(CC) $(FLAGS) -c $< -o $@

clean			:
				@rm -rf $(OBJDIR)
				@echo "\033[1;30m[$(OBJDIR)] : \033[1;31mdeleted !\033[0m"

fclean			:	clean
				@rm -f $(NAME)
				@echo "\033[1;30m[$(NAME)] \033[1;31mdeleted !\033[0m"

re				:	fclean all

.PHONY			: 	clean fclean all re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 16:36:01 by omoreno-          #+#    #+#              #
#    Updated: 2023/01/26 12:11:54 by omoreno-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := philo
NAMEB := ${addsuffix _bonus, $(NAME)}

all : $(NAME)
bonus : $(NAMEB)

$(NAME) :
	make -C philo

$(NAMEB):
	make -C philo_bonus

clean :
	make -C philo clean

fclean : clean
	make -C philo fclean

re: fclean all

.PHONY : $(NAME) $(NAMEB) clean fclean re all bonus
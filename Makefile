# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/02 09:35:37 by jgasparo          #+#    #+#              #
#    Updated: 2024/12/09 12:21:26 by jgasparo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# **************************************************************************** #
# 							Name of the executable							   #
# **************************************************************************** #

NAME			= libft.a

# **************************************************************************** #
# 								  File paths								   #
# **************************************************************************** #

INCLUDES_DIR	= includes
SOURCES_DIR		= sources
BUILD_DIR		= .build

# **************************************************************************** #
# 							  	Source files								   #
# **************************************************************************** #

IS_SRC  := ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint
LST_SRC := ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone ft_lstiter \
           ft_lstlast ft_lstmap ft_lstnew ft_lstsize
MEM_SRC := ft_bzero ft_calloc ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset
PUT_SRC := ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd
STR_SRC := ft_atoi ft_itoa ft_split ft_strchr ft_strdup ft_striteri ft_strjoin ft_strlcat \
           ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr ft_strrchr ft_strtrim ft_substr \
           ft_tolower ft_toupper

SRC 		:= $(addprefix $(SOURCES_DIR)/is/, $(addsuffix .c, $(IS_SRC)))
SRC 		+= $(addprefix $(SOURCES_DIR)/lst/, $(addsuffix .c, $(LST_SRC)))
SRC 		+= $(addprefix $(SOURCES_DIR)/mem/, $(addsuffix .c, $(MEM_SRC)))
SRC 		+= $(addprefix $(SOURCES_DIR)/put/, $(addsuffix .c, $(PUT_SRC)))
SRC 		+= $(addprefix $(SOURCES_DIR)/str/, $(addsuffix .c, $(STR_SRC)))

# **************************************************************************** #
# 							  	Object files								   #
# **************************************************************************** #

OBJS 		= $(SRC:$(SOURCES_DIR)/%.c=$(BUILD_DIR)/%.o)

# **************************************************************************** #
# 							  Compilation flags								   #
# **************************************************************************** #


CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror -I$(INCLUDES_DIR)
DEPFLAGS 	= -MMD -MP -MF $(BUILD_DIR)/$*.d
LIB			= ar rcs

# **************************************************************************** #
# 							  	   Rules	    							   #
# **************************************************************************** #

# Règles
all: $(NAME)

$(BUILD_DIR)/%.o: $(SOURCES_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(DEPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "\033[1;33mLIBFT Compilation in progress...\033[0m"
	@$(LIB) $@ $^
	@echo "\033[1;32mLIBFT Compilation done !\033[0m"

-include $(OBJS:.o=.d)

clean:
	@rm -rf $(BUILD_DIR)
	@echo "\033[1;32mLIBFT Object Files cleaned !\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[1;32mLIBFT Library cleaned !\033[0m"

re: fclean all

.PHONY: all clean fclean re

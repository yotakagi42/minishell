# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yotakagi <yotakagi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 16:02:27 by yotakagi          #+#    #+#              #
#    Updated: 2025/06/27 02:39:33 by yotakagi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_strcmp.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

bonus_files = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

# 通常部分のオブジェクトファイル
OBJS = $(SRCS:.c=.o)
# ボーナス部分のオブジェクトファイル
BONUS_OBJS = $(bonus_files:.c=.o)

# コンパイル設定
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
NAME = libft.a

# ルール定義
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# ボーナスターゲット
ifeq ($(MAKECMDGOALS), bonus)
	OBJS += $(BONUS_OBJS)
endif

bonus: $(NAME)

# クリーン
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# .cファイルを.oファイルに変換するルール
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re bonus

NAME = libftprintf.a  
SRCS = ft_printf.c ft_print_char.c ft_print_string.c ft_print_number.c ft_print_hex.c ft_print_pointer.c ft_print_unsigned.c
OBJS = $(SRCS:.c=.o)  

all: $(NAME)  

$(NAME): $(OBJS)  
	    ar rc $(NAME) $(OBJS)  

clean:  
	    rm -f $(OBJS)  

fclean: clean  
	    rm -f $(NAME)  

re: fclean all  

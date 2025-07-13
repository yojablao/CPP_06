name  = test

src = main.cpp  Serializer.cpp 
head = Serializer.hpp Data.hpp
obj = $(src:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
.o :$(head) .cpp 
	$(CC) $< -c -o $@

all:$(name)

$(name) : $(obj)
	$(CC) $(obj) -o $(name)

clean :
	rm -rf $(obj)
fclean : clean
	rm -rf $(name)
re : fclean all
name  = day

src = main.cpp   Base.cpp A.cpp B.cpp C.cpp
head = Base.hpp  A.hpp  B.hpp  C.hpp
obj = $(src:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98 
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
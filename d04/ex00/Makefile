SRCS		=	main.cpp 								\
				srcs/Animal.cpp 						\
				srcs/Cat.cpp 							\
				srcs/Dog.cpp 							\
				srcs/WrongAnimal.cpp 					\
				srcs/WrongCat.cpp						\


OBJS		=	$(addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o})
OBJS_DIR	=	objects
MKDIR		=	mkdir -p

INCLUDES	=	includes/Animal.hpp 					\
				includes/Cat.hpp 						\
				includes/Dog.hpp 						\
				includes/WrongAnimal.hpp 				\
				includes/WrongCat.hpp					\

CPP			= 	c++ -std=c++98

CPPFLAGS	= 	-Wall -Wextra -Werror

NAME		=	main

EXEC		= 	exec

RM			=	rm -rf	

all:	 	${EXEC}

${OBJS_DIR}/%.o: 	%.cpp $(OBJDIRS) ${INCLUDES} Makefile
			${MKDIR} $(@D) $(DMPDIR)$(@D)
			${CPP} ${CPPFLAGS} -I includes -c $< -o $@

${EXEC}:	${NAME}.cpp ${OBJS}
			$(CPP) ${CPPFLAGS} ${OBJS} -I includes -o ${EXEC}
			
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${EXEC} objects

re:			fclean all

.PHONY: 	all clean fclean re
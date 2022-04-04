SRCS		=	main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJS		=	$(addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o})
OBJS_DIR	=	objects
MKDIR		=	mkdir -p

INCLUDES	=	Fixed.hpp Point.hpp main.hpp

CPP			= 	c++ -std=c++98

CPPFLAGS	= 	-Wall -Wextra -Werror

NAME		=	main

EXEC		= 	bsp

RM			=	rm -rf	

all:	 	${EXEC}

${OBJS_DIR}/%.o: 	%.cpp $(OBJDIRS) ${INCLUDES} Makefile
			${MKDIR} $(@D) $(DMPDIR)$(@D)
			${CPP} ${CPPFLAGS} ${LIBINCLUDES} -c $< -o $@

${EXEC}:	${NAME}.cpp ${OBJS}
			$(CPP) ${CPPFLAGS} ${OBJS} -o ${EXEC}
			
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${EXEC} objects outfile

re:			fclean all

.PHONY: 	all clean fclean re
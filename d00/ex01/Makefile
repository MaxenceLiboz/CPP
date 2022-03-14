SRCS		=	Contact.class.cpp main.cpp PhoneBook.class.cpp

OBJS		=	$(addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o})
OBJS_DIR	=	objects
MKDIR		=	mkdir -p

INCLUDES	= main.hpp Contact.class.hpp PhoneBook.class.hpp

CPP			= 	c++

CPPFLAGS	= 	-Wall -Wextra -Werror

NAME		=	main

RM			=	rm -rf	

all:		${OBJS} ${NAME}

${OBJS_DIR}/%.o: 	%.cpp $(OBJDIRS) ${INCLUDES} Makefile
			${MKDIR} $(@D) $(DMPDIR)$(@D)
			${CPP} ${CPPFLAGS} ${LIBINCLUDES} -c $< -o $@

${NAME}:	${NAME}.cpp ${OBJS}
			$(CPP) ${CPPFLAGS} ${OBJS} -o ${NAME}
			
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME} objects

re:			fclean all

.PHONY: 	all clean fclean re
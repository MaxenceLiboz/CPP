SRCS		=	Contact.class.cpp main.cpp PhoneBook.class.cpp

OBJS		=	$(addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o})
OBJS_DIR	=	objects
MKDIR		=	mkdir -p

INCLUDES	= main.hpp Contact.class.hpp PhoneBook.class.hpp

CPP			= 	c++

CPPFLAGS	= 	-Wall -Wextra -Werror

NAME		=	main

EXEC		= 	iphone

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
			${RM} ${EXEC} objects

re:			fclean all

.PHONY: 	all clean fclean re
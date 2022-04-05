SRCS		=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS		=	$(addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o})
OBJS_DIR	=	objects
MKDIR		=	mkdir -p

INCLUDES	= 	Weapon.hpp HumanA.hpp HumanB.hpp

CPP			= 	c++

CPPFLAGS	= 	-Wall -Wextra -Werror

NAME		=	main

EXEC		= 	human

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
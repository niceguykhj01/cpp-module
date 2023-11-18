NAME = ex00

CC = clang++
CFLAGS = -std=c++03 -Wall -Wextra -Werror

ifeq ($(DEBUG),true)
	CFLAGS += -g
endif

RM = rm
RMFLAGS = -rf

SRC_DIR = ./
OBJ_DIR = ./

SRCS = $(wildcard $(SRC_DIR)/*.cpp)

vpath %.cpp $(SRC_DIR)

OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.cpp=.o)))

all : $(NAME)

clean :
	$(RM) $(RMFLAGS) $(OBJS)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)
	
re : fclean all

$(OBJ_DIR) :
	mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o : %.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

.PHONY: all clean fclean re bonus
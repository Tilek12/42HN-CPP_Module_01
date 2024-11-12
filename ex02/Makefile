# Color codes
GREEN	= \033[0;32m
VIOLET	= \033[0;35m
RESET	= \033[0m

# Variables
NAME = brain
SRC = main.cpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

# Compile the executable
all: $(NAME)

$(NAME): $(SRC)
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME) > /dev/null 2>&1
	@echo "$(GREEN)$(NAME) created. $(RESET)"

# Clean up the executable
clean:
	@rm -f $(NAME) > /dev/null 2>&1
	@echo "$(VIOLET)$(NAME) deleted.$(RESET)"

# Clean up the executable
fclean: clean

# Recompile the project
re: fclean all

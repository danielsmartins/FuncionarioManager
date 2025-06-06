# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Arquivos fonte e objeto
SRC_DIR = src
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:.cpp=.o)

# Nome do executável
TARGET = programa

# Regra principal
all: $(TARGET)

# Compilar o executável
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regra para compilar os .o
$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	rm -f $(SRC_DIR)/*.o $(TARGET)


run: all
	./$(TARGET)
CXX = g++
CXXFLAGS = -g -Wall -pthread -I. -Werror -Wpedantic
# -pthread flag for multithreading (pc resources are used more efficiently)
# -wall flag for compiler warnings;
# -g flag for different errors and debugging info
# -I flag for search header.h files in directory "." means, current dir
GTEST_LIBS = -lgtest -lpthread
# -lgtest for link my prog and google-test libr
# -lpthread link with thread libr
# -l for link

# project files
# -c (compile original file in obj file)
# -o (indicate the name of output file -o a create file with name "a" (for run ./a)
PROJ_FILES = $(wildcard *.cpp)
# wildcard for transfer all .cpp files in curr dir with spaces (" ")
OBJ_FILES = $(PROJ_FILES:.cpp=.o)
# :.cpp = .0 this is replacement pattern
# specifies, which obj files should be created (just name, not files)

# google tests files
TEST_DIR = gtests
TEST_FILES = $(wildcard $(TEST_DIR)/*.cpp)
# $(TEST_DIR) indicate dir, where i have test files
TEST_OBJ_FILES = $(TEST_FILES:.cpp=.o)

all: assignment3 tests 
# default target (what start (./assignment3))

$(OBJ_FILES): %.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
# obj files assembly (compile, not create)
# "%" means, that each original file compiles in the ojbect file (*.cpp --> *.o)
# -c compile orig file in obj without linking 
# linking - association all files in one executable file with all libraries and header.h files
# $< automatic variables, which give 1-st *.cpp file from dependency list (f.e. transformer.cpp)
# $@ auto var, which is current target name (from OBJ_FILES) 
# ($@ will be replaced by name, which is name of current target file)
# ":" - determine dependence (if .cpp changed --> .o changing; also with OBJ_FILES and .o)

assignment3: $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o assignment3 $(OBJ_FILES)
# i can assemble a file g++ -o main main.cpp and g++ -o main main.o
# but with main.o, if there were no changes, 
# .o file mustn't compile and .cpp must compile again anyway

$(TEST_OBJ_FILES): $(TEST_DIR)/%.o : $(TEST_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

tests: $(TEST_OBJ_FILES) $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o tests $(TEST_OBJ_FILES) $(OBJ_FILES) $(GTEST_LIBS)

clean:
	rm -f $(TEST_DIR)/*.o *.o
# clean only obj files

cleanall:
	rm -f $(TEST_DIR)/*.o *.o assignment3 tests
# remove all (all is *) .o files in general and TEST dirs, remove target (output) files


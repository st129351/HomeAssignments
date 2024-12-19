CXX = g++
CXXFLAGS = -g -Wall -pthread -I. -Werror -Wpedantic
GTEST_LIBS = -lgtest -lpthread


PROJ_FILES = $(wildcard *.cpp)
OBJ_FILES = $(PROJ_FILES:.cpp=.o)
TEST_DIR = gtests
TEST_FILES = $(wildcard $(TEST_DIR)/*.cpp)
TEST_OBJ_FILES = $(TEST_FILES:.cpp=.o)

all: assignment6 tests

$(OBJ_FILES): %.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

assignment6: $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o assignment6 $(OBJ_FILES) $(GTEST_LIBS)

$(TEST_OBJ_FILES): $(TEST_DIR)/%.o : $(TEST_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

tests: $(TEST_OBJ_FILES) $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o tests $(TEST_OBJ_FILES) $(OBJ_FILES) $(GTEST_LIBS)


clean:
	rm -f $(TEST_DIR)/*.o *.o
# clean only obj files

cleanall:
	rm -f $(TEST_DIR)/*.o *.o assignment6 tests
# remove all (all is *) .o files in general and TEST dirs, remove target (output) files

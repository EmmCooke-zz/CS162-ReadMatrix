CXX = g++
CXXFLAGS =  -std=c++0x
CXXFLAGS +=   -Wall
CXXFLAGS +=   -pedantic-errors
CXXFLAGS +=   -g
#CXXFLAGS +=   -O3
LDFLAGS =  -lboost_date_time
OBJS =  main.o determinant.o readMatrix.o validateInput.o
SRCS =  main.cpp determinant.cpp readMatrix.cpp validateInput.cpp
HEADERS = determinant.hpp readMatrix.hpp validateInput.hpp

#target: dependencies
#rule to build
#

readMatrix: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o Lab1

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c   $(@:.o=.cpp)

.PHONY: clean
clean:
	rm ${OBJS} Lab1

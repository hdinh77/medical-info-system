# Makefile

CXX=g++

CXXFLAGS= -std=c++11 -Wall -Wno-deprecated -Wextra -Wno-unused-parameter -Wno-unused-private-field

BINARIES= main testPatient testDoctor

all: ${BINARIES}

main: main.o
	${CXX} $^ $@

testPatient: testPatient.o tddFuncs.o Patient.o
	${CXX} ${CXXFLAGS} $^ -o $@

testDoctor: testDoctor.o tddFuncs.o Doctor.o
	${CXX} ${CXXFLAGS} $^ -o $@

clean:
	rm -f ${BINARIES} *.o
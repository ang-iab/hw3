CXX := g++
CXXFLAGS := -g -Wall --std=c++11
VALGRIND := valgrind --tool=memcheck --leak-check=yes

all: llrec-test

#-----------------------------------------------------
# ADD target(s) to build your llrec-test executable
#-----------------------------------------------------

llrec-test: llrec-test.o llrec.o
	$(CXX) $(CXXFLAGS) -o $@ $^

llrec-test.o: llrec-test.cpp llrec.h
	$(CXX) $(CXXFLAGS) -o $@ -c $<

llrec.o: llrec.cpp llrec.h
	$(CXX) $(CXXFLAGS) -o $@ -c $<

stack-test: stack-test.o stack.o
	$(CXX) $(CXXFLAGS) -o $@ -c $^

stack-test.o: stack-test.cpp stack.h
	$(CXX) $(CXXFLAGS) -o $@ -c $<
	
stack.o: stack.cpp stack.h
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -f *.o rh llrec-test *~

.PHONY: clean 
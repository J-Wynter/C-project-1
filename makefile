CXX = g++
CXXFLAGS = -g -Wall -Wextra

.PHONY: all
all: library

library: library.o Book.o Member.o Librarian.o Person.o
	$(CXX) $(CXXFLAGS) -o $@ $^

library.o: library.cpp Book.h Member.h Librarian.h Person.h
	$(CXX) $(CXXFLAGS) -c $<

Book.o: Book.cpp Book.h
	$(CXX) $(CXXFLAGS) -c $<

Member.o: Member.cpp Member.h
	$(CXX) $(CXXFLAGS) -c $<

Date.o: Date.cpp Date.h
	$(CXX) $(CXXFLAGS) -c $<

Librarian.o: Librarian.cpp Librarian.h Person.h
	$(CXX) $(CXXFLAGS) -c $<

Person.o: Person.cpp Person.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm -f *~ *.o library

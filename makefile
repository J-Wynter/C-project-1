CXX = g++
CXXFLAGS = -g -Wall -Wextra

.PHONY: all
all: library

library: library.o Book.o Members.o Librarian.o Person.o
	$(CXX) $(CXXFLAGS) -o $@ $^

library.o: library.cpp Book.h Members.h Librarian.h Person.h
	$(CXX) $(CXXFLAGS) -c $<

Book.o: Book.cpp Book.h Members.h
	$(CXX) $(CXXFLAGS) -c $<

Members.o: Members.cpp Members.h Librarian.h
	$(CXX) $(CXXFLAGS) -c $<

Librarian.o: Librarian.h Person.h Book.h
	$(CXX) $(CXXFLAGS) -c $<

Person.o: Person.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm -f *~ *.o library

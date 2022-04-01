
all: out lib.so

out: mainQ1.cpp stockData.cpp mainQ3.cpp
	g++ mainQ1.cpp stockData.cpp -o Q1.o
	g++ mainQ3.cpp stockData.cpp -o Q3.o
	g++ mainQ2.cpp stockData.cpp -o Q2.o
lib.so: stockData.cpp
	

.PHONY: clean 
clean:
	rm -f *.o 
	rm -f *.csv
	rm -f *.stock
	rm -f *.esp
	
	
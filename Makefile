
all: out lib.so

out: mainQ1.cpp stockData.cpp mainQ3.cpp
	g++ mainQ1.cpp stockData.cpp -o Q1.out
	g++ mainQ3.cpp stockData.cpp -o Q3.out
	g++ mainQ2.cpp stockData.cpp -o Q2.out
lib.so: stockData.cpp
	

.PHONY: clean 
clean:
	rm -f *.out
	
	
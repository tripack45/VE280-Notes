all:
	pdflatex -output-directory=build -shell-escape -- main.tex

clean:
	rm -rf ./build/*



all: templates

templates: templates.cpp
	g++ -std=gnu++14 -o templates templates.cpp

clean:
	rm templates

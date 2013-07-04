EXAMPLES=$(wildcard tests/*)
MODE = debug
PLATFORM = arduino
PLUGINS = 
SCONS = `which scons`
SCONS += mode=$(MODE) platform=$(PLATFORM) PLUGINS=$(PLUGINS)

.PHONY: all clean install $(EXAMPLES)

default: all

all:
	@echo "== Building Qualia in mode $(MODE) =="
	$(SCONS)
	
clean:
	@echo "== Cleaning Qualia mode $(MODE) =="
	$(SCONS) --clean

install:
	@echo "== Installing Qualia in mode $(MODE) =="
	$(SCONS) install

examples: $(EXAMPLES)

$(EXAMPLES): all
	@echo "== Building example $@ in mode $(MODE) =="
	@cd $@ && $(SCONS)
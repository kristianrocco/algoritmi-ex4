# Variabili
CC = gcc                     # Compilatore C
CFLAGS = -Wall -Wextra -g    # Opzioni di compilazione
LDFLAGS =                    # Eventuali flag per il linker
INCLUDES = -I./src -I./lib   # Percorsi per header
LIBS =                       # Eventuali librerie esterne

# Directory
SRC_DIR = ./src
BIN_DIR = ./bin

# File sorgenti
MAIN_SRC = $(SRC_DIR)/main.c $(SRC_DIR)/graph.c
TEST_SRC = $(SRC_DIR)/test.c $(SRC_DIR)/graph.c

# File oggetto
MAIN_OBJ = $(MAIN_SRC:.c=.o)
TEST_OBJ = $(TEST_SRC:.c=.o)

# Eseguibili
MAIN_EXE = $(BIN_DIR)/main_ex3-4
TEST_EXE = $(BIN_DIR)/test_ex3-4

# Target di default
all: $(MAIN_EXE) $(TEST_EXE)

# Regola per creare main_ex3-4
$(MAIN_EXE): $(MAIN_OBJ)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(LIBS)

# Regola per creare test_ex3-4
$(TEST_EXE): $(TEST_OBJ)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(LIBS)

# Regola per compilare file .c in .o
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

# Pulizia
clean:
	rm -rf $(BIN_DIR) *.o $(SRC_DIR)/*.o

# Esegui i test
test: $(TEST_EXE)
	./$(TEST_EXE)

# Documentazione
help:
	@echo "Comandi disponibili:"
	@echo "  make all      - Compila i file eseguibili main_ex3-4 e test_ex3-4"
	@echo "  make test     - Esegue i test automatizzati"
	@echo "  make clean    - Rimuove i file temporanei e gli eseguibili"
	@echo "  make help     - Mostra questo messaggio di aiuto"

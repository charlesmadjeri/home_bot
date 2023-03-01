##
## EPITECH PROJECT, 2022
## Epitech
## File description:
## Makefile
##

########################
### OPTIONS          ###
########################

TARGET_NAME	=	home_bot
SOURCE_DIR	=	program
OBJECT_DIR	=	ressources
LIBRARY_DIR	=	lib
HEADER_DIR	=	program

vpath %.c $(SOURCE_DIR)

########################
### COMPILER OPTIONS ###
########################

CC	=	gcc
CFLAGS	=	-W -Wall -Wextra \
		-I$(HEADER_DIR) \
		-Wno-unused-variable \
		-Wno-unused-parameter \
		-Wno-unused-but-set-variable \
		-Wno-unused-but-set-parameter \
		-g3 \
		$(C_FLAGS_INPUT)
LFLAGS	=	-lwiringPi \
		$(L_FLAGS_INPUT)

########################
### SOURCES FILES    ###
########################

SOURCES_FILES	=	program/main.c \
					program/bubble.c \
					program/led.c \
					program/gpio.c \
					program/keyscan.c \
					program/motor.c \
					program/capacitive_sensor.c \

LIBRARY		=	lib/my_getnbr.c \
				lib/my_putchar.c \
				lib/my_putstr.c \
				lib/my_strlen.c \
				lib/my_putnbr.c \
				lib/my_swap.c \
				lib/my_str_to_word_array.c \
				lib/my_strcpy.c \
				lib/my_strcmp.c \

########################
### OBJECT FILES     ###
########################

OBJECTS	=	$(SOURCES_FILES:.c=.o) $(LIBRARY:.c=.o)

########################
### RECIPES          ###
########################

.PHONY: all directories re clean fclean

all: directories $(TARGET_NAME)

directories: $(SOURCE_DIR) $(LIBRARY_DIR)

re:	clean all

clean:
	rm -f $(SOURCE_DIR)/*.o

fclean:	clean
	rm -f $(LIBRARY_DIR)/*.o
	rm -f $(TARGET_NAME)

########################
### FILE GENERATORS  ###
########################

$(TARGET_NAME): $(OBJECTS)
	@$(CC) -o $(TARGET_NAME) $^ $(LFLAGS)
	@echo -e "-- BUILD SUCCESSFUL --"

$(LIBRARY):
	$(LIBRARY:.c=.o) --no-print-directory

$(OBJECT_DIR):
	@mkdir -p $@

$(SOURCE_DIR):
	@echo "-- Error: source folder not found ! --"

########################
### IMPLICITS REDEFS ###
########################

$(OBJECT_DIR)/%.o : %.c
	@$(CC) -c -o $@ $< $(CFLAGS)
	@echo -e "-- $@ successfully compiled --"

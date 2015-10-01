CC=gcc
TARGET=ichaival.c
FLAGS=-std=c99 -g -o ichaival -Wall

ichaival: ichaival.c Makefile
	$(CC) $(TARGET) $(FLAGS) -lncursesw

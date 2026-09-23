#pragma once
#include <string>
#include <limits>

int getIntFromConsole(const std::string& message);
double getDoubleFromConsole(const std::string& message);

char getCharFromConsole(const std::string& message);
//char getTheArithmeticOperator();

bool isPrime(int value);
void displayASCIIValueWithExplicitConversion(char symbol);
void displayASCIIValueWithImplicitConversion(char symbol);
void displayResultForArithmetic(double first, double second, char op);

void simulateTheFall(double height); 

void calculateBallHeight(double height, double gravity, int seconds);

void clearInputBuffer();

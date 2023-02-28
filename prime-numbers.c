#include <stdbool.h>
#include <stdio.h>
#define FIRST_POSITION_AFTER_FIVE  3
#define LAST_VALUE_OF_PREALLOCATED_ARRAY  5
#define ARRAY_SIZE 1000
#define MAX_PRIME_NUMBERS 1000
#define FIRSTS_OF_PRIME_NUMBERS 2,3,5

int allPrimeNumbers[ARRAY_SIZE] = {FIRSTS_OF_PRIME_NUMBERS};
int nextValue = LAST_VALUE_OF_PREALLOCATED_ARRAY;
int position = FIRST_POSITION_AFTER_FIVE;

bool isPrime(int value, int position) {
  
  while (position >= 0) {
    if (value % allPrimeNumbers[position] == 0) {
      return false;
    } 
    position--;
  }
  return true;
}

bool  NextNumber() {
  
  
  if (isPrime(nextValue, position-1)) {
    allPrimeNumbers[position] = nextValue;
    printf("%d\n",allPrimeNumbers[position]);
  }
  
  position++;
}

void main() {
  

  for (nextValue; nextValue < MAX_PRIME_NUMBERS; nextValue++) {
    NextNumber();
  }
  
  

  return;
};

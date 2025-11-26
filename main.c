#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// macros
#define BUFFER_SIZE 1024

// functions declaration
void print_menu(void);
int read_option(void);
bool is_valid_option(int option);

// types
struct Student
{
  char name[BUFFER_SIZE];
  int age;
};

int main(void)
{
  // create a hard coded student array
  struct Student students[2] = {
      {.name = "Avior Kahalani", .age = 27},
      {.name = "Avigail Gilad", .age = 27},
  };

  print_menu();
  int option = read_option();
}

void print_menu(void)
{
  printf(
      "Choose an option (1 - 7):\n"
      "\t1. Add student\n"
      "\t2. List students\n"
      "\t3. Search students\n"
      "\t4. Update student\n"
      "\t5. Remove student\n"
      "\t6. Save data to file\n"
      "\t7. Load data from file\n"
      "Your input: ");
}

int read_option(void)
{
  char option_input[BUFFER_SIZE];
  while (true)
  {
    if (!fgets(option_input, BUFFER_SIZE, stdin))
    {
      printf("Input error. Please try again: ");
      continue;
    }

    int option = strtol(option_input, NULL, 10);

    if (!is_valid_option(option))
    {
      printf("Invalid option. Please try again: ");
      continue;
    }

    return option;
  }
}

bool is_valid_option(int option)
{
  return option >= 1 && option <= 7;
}

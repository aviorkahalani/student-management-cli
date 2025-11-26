#include <stdio.h>

// functions declaration
void print_menu(void);

int main(void)
{
  print_menu();
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

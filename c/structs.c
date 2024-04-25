#include <stdio.h>
#include <string.h>

struct Student {
  int age;
  char room;
  char name[40];
};

// declare function definition
void printStudent(struct Student s);
void changeStudentName(struct Student *s, char newName[20]);

int main(){
  struct Student jimmy = {10,'a', "Jimmy"};
  struct Student angela = {11,'a', "Angela"};

  // can we put the structs in an array? yup
  struct Student students[2] = {jimmy, angela};
  for (int i =0; i<2; i++){
    printStudent(students[i]);
  }

  // structs can be modified through dot notation
  students[1].room = 'b';
  printStudent(students[1]);

  // can strings be changed through dot notation?
  // no. the line below will not work
  //  students[1].name = "Angela 2";
  // structs.c:28:20: error: array type 'char [40]' is not assignable
  // to do this we have to use strcpy
  changeStudentName(&students[1], "Angela 2");
  printStudent(students[1]);
}

void printStudent(struct Student s) {
      printf("%s is %d years old and is in class %c\n", s.name, s.age, s.room);
}

void changeStudentName(struct Student *s, char newName[20]) {
  strcpy(s->name, newName);
}

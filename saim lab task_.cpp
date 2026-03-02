
#include <string>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student;
    student.firstName = "John";
    student.lastName = "Doe";
    student.rollNumber = 123;
    student.marks = 85.5;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a student
struct Student {
    char *fullName;
    float *marks;
};

// Function to display student information
void displayStudentInfo(struct Student *s) {
    printf("Student Name: %s\n", s->fullName);
    printf("Marks: %.2f\n\n", *(s->marks));
}

int main() {
    // Pointer to a structure
    struct Student *student = (struct Student *)malloc(sizeof(struct Student));

    // Dynamically allocate memory for structure members
    student->fullName = (char *)malloc(100 * sizeof(char));
    student->marks = (float *)malloc(sizeof(float));

    // Dynamically assign values to the structure members using the pointer
    printf("Enter student full name: ");
    fgets(student->fullName, 100, stdin);
    student->fullName[strcspn(student->fullName, "\n")] = 0; // Remove newline

    printf("Enter student marks: ");
    scanf("%f", student->marks);

    // Use the pointer to call the display function
    displayStudentInfo(student);

    // Free allocated memory
    free(student->fullName);
    free(student->marks);
    free(student);

    return 0;
}
    student.displayStudentInfo();
    return 0;
}
 #include <stdio.h>
#include <string.h>

// Define the structure for a student
struct Student {
    char fullName[100];
    float marks;
};

// Function to display student information
void displayStudentInfo(struct Student s) {
    printf("Student Name: %s\n", s.fullName);
    printf("Marks: %.2f\n\n", s.marks);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a student
struct Student {
    char *fullName;
    float *marks;
};

// Function to display student information
void displayStudentInfo(struct Student *s) {
    printf("Student Name: %s\n", s->fullName);
    printf("Marks: %.2f\n\n", *(s->marks));
}

int main() {
    // Pointer to a structure
    struct Student *student = (struct Student *)malloc(sizeof(struct Student));

    // Dynamically allocate memory for structure members
    student->fullName = (char *)malloc(100 * sizeof(char));
    student->marks = (float *)malloc(sizeof(float));

    // Dynamically assign values to the structure members using the pointer
    printf("Enter student full name: ");
    fgets(student->fullName, 100, stdin);
    student->fullName[strcspn(student->fullName, "\n")] = 0; // Remove newline

    printf("Enter student marks: ");
    scanf("%f", student->marks);

    // Use the pointer to call the display function
    displayStudentInfo(student);

    // Free allocated memory
    free(student->fullName);
    free(student->marks);
    free(student);

    return 0;
}
int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); // To consume the newline character

    // Array of structures to store multiple students
    struct Student students[numStudents];

    // Input details for multiple students
    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Full Name: ");
        fgets(students[i].fullName, sizeof(students[i].fullName), stdin);
        students[i].fullName[strcspn(students[i].fullName, "\n")] = 0; // Remove newline
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar(); // Consume newline
    }

    // Display information for each student
    for (int i = 0; i < numStudents; i++) {
        displayStudentInfo(students[i]);
    }

    return 0;
}
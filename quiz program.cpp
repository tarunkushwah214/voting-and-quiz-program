#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char answer1;
    char answer2;
    char answer3;
    char answer4;
    int score = 0;

    jump1:
    printf("Choose the correct option\n");
    printf("What does the 'printf' function do in C?\n");
    printf("a) Read input from the user\nb) Print output to the console\nc) Perform mathematical calculations\nd) None of the above\n");

    time_t start_time = time(NULL);
    int elapsed_time = 0;

    scanf(" %c", &answer1);

    elapsed_time = time(NULL) - start_time;

    if (elapsed_time > 60) {
        printf("Time's up! You took more than 60 seconds. Moving to the next question.\n");
        goto jump2;
    }

    if (answer1 == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong answer. The correct option is b) Print output to the console.\n");
    }

    char choice;
    printf("Please enter 1 for the next question or any other value to submit: ");
    scanf(" %c", &choice);

    if (choice == '1') {
        printf("Next question\n");
        goto jump2;
    } else {
        printf("Submitting quiz\n");
        goto end;
    }

    jump2:
    printf("What is the correct way to declare an integer variable in C?\n");
    printf("a) int x = 5;\nb) integer x = 5;\nc) x = 5;\nd) var x = 5;\n");

    start_time = time(NULL);
    elapsed_time = 0;

    scanf(" %c", &answer2);

    elapsed_time = time(NULL) - start_time;

    if (elapsed_time > 60) {
        printf("Time's up! You took more than 60 seconds. Moving to the next question.\n");
        goto jump3;
    }

    if (answer2 == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong answer. The correct option is a) int x = 5;\n");
    }

    printf("Please enter 1 for the next question or any other value to submit: ");
    scanf(" %c", &choice);

    if (choice == '1') {
        printf("Next question\n");
        goto jump3;
    } else {
        printf("Submitting quiz\n");
        goto end;
    }

    jump3:
    printf("What is the purpose of the 'return 0;' statement in the main function of a C program?\n");
    printf("a) Terminate the program\nb) Indicate an error\nc) Return a value to the operating system\nd) Skip the main function\n");

    start_time = time(NULL);
    elapsed_time = 0;

    scanf(" %c", &answer3);

    elapsed_time = time(NULL) - start_time;

    if (elapsed_time > 60) {
        printf("Time's up! You took more than 60 seconds. Moving to the next question.\n");
        goto jump4;
    }

    if (answer3 == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong answer. The correct option is a) Terminate the program.\n");
    }

    printf("Please enter 1 for the next question or any other value to submit: ");
    scanf(" %c", &choice);

    if (choice == '1') {
        printf("Next question\n");
        goto jump4;
    } else {
        printf("Submitting quiz\n");
        goto end;
    }

    jump4:
    printf("Which of the following is not a valid C data type?\n");
    printf("a) int\nb) float\nc) string\nd) char\n");

    start_time = time(NULL);
    elapsed_time = 0;

    scanf(" %c", &answer4);

    elapsed_time = time(NULL) - start_time;

    if (elapsed_time > 60) {
        printf("Time's up! You took more than 60 seconds.\n");
        goto end;
    }

    if (answer4 == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong answer. The correct option is c) string.\n");
    }

    printf("\nCorrect options:\n");
    printf("Q1: b\tQ2: a\tQ3: a\tQ4: c\n");
    printf("Your answers:\n");
    printf("Q1: %c\tQ2: %c\tQ3: %c\tQ4: %c\n", answer1, answer2, answer3, answer4);
    printf("Your score is: %d out of 4\n", score);

    end:
    return 0;
}

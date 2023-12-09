#include <stdio.h>
#include <string.h>

int main() {
    char gender[10];
    char name[50]; 
    int age;
    int bjpVotes = 0, congressVotes = 0, other1Votes = 0, other2Votes = 0;
    int continueVoting = 1; 

    while (continueVoting) {
        printf("Enter your gender (Male/Female/Other): ");
        scanf("%s", gender);

        if (strcmp(gender, "Male") == 0 || strcmp(gender, "Female") == 0 || strcmp(gender, "Other") == 0) {
            printf("Enter your name: ");
            scanf("%s", name);

            printf("Enter your age: ");
            scanf("%d", &age);

            if (age >= 18) {
                printf("You are eligible to vote, ");

                if (strcmp(gender, "Male") == 0) {
                    printf("Mr. %s", name);
                } else if (strcmp(gender, "Female") == 0) {
                    printf("Miss %s", name);
                } else {
                    printf("Dear %s", name);
                }

                printf(", you can vote for one of the following parties:\n");
                printf("1. BJP\n2. Congress\n3. Other Party 1\n4. Other Party 2\n");

                int vote;
                printf("Enter your vote (1 for BJP, 2 for Congress, 3 for Other Party 1, 4 for Other Party 2): ");
                scanf("%d", &vote);

                switch (vote) {
                    case 1:
                        bjpVotes++;
                        break;
                    case 2:
                        congressVotes++;
                        break;
                    case 3:
                        other1Votes++;
                        break;
                    case 4:
                        other2Votes++;
                        break;
                    default:
                        printf("Invalid vote! Please vote again.\n");
                        break;
                }

                printf("\nVoting Results:\n");
                printf("BJP: %d votes\n", bjpVotes);
                printf("Congress: %d votes\n", congressVotes);
                printf("Other Party 1: %d votes\n", other1Votes);
                printf("Other Party 2: %d votes\n", other2Votes);

                printf("Enter 1 to continue voting, 0 to end: ");
                scanf("%d", &continueVoting);
            } else {
                printf("You are not eligible to vote as you are under 18.\n");
            }
        } else {
            printf("Invalid gender input.\n");
        }
    }
    printf("\nFinal Voting Results:\n");
    printf("BJP: %d votes\n", bjpVotes);
    printf("Congress: %d votes\n", congressVotes);
    printf("Other Party 1: %d votes\n", other1Votes);
    printf("Other Party 2: %d votes\n", other2Votes);

    if (bjpVotes > congressVotes && bjpVotes > other1Votes && bjpVotes > other2Votes) {
        printf("BJP is the winner!\n");
    } else if (congressVotes > bjpVotes && congressVotes > other1Votes && congressVotes > other2Votes) {
        printf("Congress is the winner!\n");
    } else if (other1Votes > bjpVotes && other1Votes > congressVotes && other1Votes > other2Votes) {
        printf("Other Party 1 is the winner!\n");
    } else if (other2Votes > bjpVotes && other2Votes > congressVotes && other2Votes > other1Votes) {
        printf("Other Party 2 is the winner!\n");
    } else {
        printf("It's a tie!\n");
    }

    printf("Voting process ended. Thank you!\n");

    return 0;
}





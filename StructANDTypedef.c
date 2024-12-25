#include <stdio.h>
#include <string.h>

typedef char nn[25];

struct Subdivision
{
    int room;
    int bathroom;
    int floor;
    double cost;
    nn paint;
};

typedef struct
{
    nn user;
    int id;
    int level;
} user;

struct student
{

    char students[20];
    float GPA;

};

int main(){

    struct Subdivision House1;

    House1.room = 4;
    House1.bathroom = 3;
    House1.floor = 2;
    House1.cost = 100000;
    strcpy(House1.paint, "White");

    printf("Rooms: %d\n", House1.room);
    printf("Bathroom: %d\n", House1.bathroom);
    printf("Stories: %d\n", House1.floor);
    printf("Paint: %s\n", House1.paint);
    printf("Cost: $%.2lf\n", House1.cost);

    user user1 = {"VanWhat", 123456789, 51};
    user user2 = {"MashupChilly", 987654321, 24};

    printf("\n\nUser: %s\nID: %d\nLevel: %d\n", user1.user, user1.id, user1.level);
    printf("\nUser: %s\nID: %d\nLevel: %d\n\n\n", user2.user, user2.id, user2.level);

    struct student student1 = {"VanWhat", 4.0};
    struct student student2 = {"MashupChilly", 3.5};
    struct student student3 = {"Yamasheet", 3.8};
    struct student student4 = {"Bandan303", 3.3};

    struct student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        printf("Name: %-20sGPA: %.2f\n", students[i].students, students[i].GPA);
    }

}
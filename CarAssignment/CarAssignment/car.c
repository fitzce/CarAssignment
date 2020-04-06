#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 5


struct car
{
	char carReg;
	char makeModel;
	char colour;
	int noOwners;
    int num1;//get rid of this
	bool reserved = true;//get rid of = true;

};

struct LinearNode {
    struct car *element; 
    struct LinearNode *next;
};

struct LinearNode *front = NULL; // the front of the list//change front to list
struct LinearNode *last = NULL; // the end of the list 

//Function prototypes, every method you create must be declared up here 
void addCars();
void allCars();

/*
int getCarSize();
void inputCar(int, struct car*);
void displayCars(int, struct car*);
*///get rid of this

 
int main(void)
{
    struct car[SIZE];//get rid of this
    int numCars;
//add all methods here
    addCars();
    allCars();

    numCars = getCarSize();

    int input();//dont know what this is
    {
        int in;
        scanf("%d", &in);
        return (in);
    }

    int input();//get rid
    int num;//get rid
//Make this its own method called menu() take it out of main()
    printf("1: Add New Car");
    printf("2: Sell a Car");
    printf("3: Reserve/ Unreserve a Car");
    printf("4: View all Cars");
    printf("5: View Specific Car");
    printf("6: Return a Car");
    printf("7: Exit");
    printf("Pick a Number");

    num = input();
//Change this to an if statement
    switch (num)
    {

    case 1:
    {
        printf("ADD NEW CAR");

        void addCars(); {
            int i;
            int aNumber;//get rid
            struct LinearNode* aNode;
            struct car* anElement;

            // add SIZE nodes to the list
            for (i = 0; i < SIZE; i++) {//take out for loop
                printf("Enter a number for node %d: ", i + 1);
                scanf("%d", &aNumber);//This is were youll add rest of car details

                anElement = (struct car*)malloc(sizeof(struct car));

                aNode = (struct LinearNode*)malloc(sizeof(struct LinearNode));

                anElement->num1 = aNumber;//change these to reg, model, make etc

                if (aNode == NULL)
                    printf("Error - no space for the new node\n");
                else { 
                    aNode->next = NULL;
                    aNode->element = anElement;

                    if (isEmpty())//declare method
                    {
                        front = aNode;
                        last = aNode;
                    }
                    else {
                        last->next = aNode;
                        last = aNode;
                    } //end else
                }//end else
            }//end for
        } //end addNodes


        break;
    }
    case 2:
    {
        printf("SELL A CAR");
        break;
    }
    case 3:
    {//do sell car first
        char yesNO;

        printf("RESERVE/UNRESERVE A CAR");
//Reason why this isnt working is because in c strings are arrays,
//best of using characters eg. would you like to reserve get the user to type in Y or N, not the full word

        printf("Would you like to reserve a car? YES/NO");
        scanf("%s", yesNO);
//BRACES
        if (yesNO = YES)
            printf("You have reserved a car")
            reserved = true;

        else if(yesNO = NO)
            printf("You DIDNT reserve a car")

        else
            printf("ERROR");


        break;
    }
    case 4:
    {
        printf("VIEW ALL CARS");

        void allCars();  {
            struct LinearNode* current;

            if (isEmpty())
                printf("Error - there are no cars in the list\n"); 
            else {
                current = front;
                while (current != NULL) {
			//put the rest of car details colour, make etc
                    printf("All Cars %d\n", current->element->num1);
                    current = current->next;
                } //end while
            }//end else
        } //end allCars

        break;
    }
    case 5:
    { 
        /*
        printf("VIEW A SPECIFIC CAR");

        int SearchCars();
        {
            LinearNode node;
            int element1;

            printf("\nDisplay Car List: \n\n");
            while (node != NULL)
            {
                if (node->iData == element1)
                {
                    return True;
                }
                else
                {
                    node = node->nextNode;
                }

            }
            return FALSE;

        }

        */

        break;
    }
    case 6:
    {//do everything else first leave till last
        printf("RETURN A CAR");
        struct node* temp;
        while (*front != NULL)
        {
            temp = *front;
            *front = (*front)->next;
            mallloc(temp);
        }

        break;
    }
    case 7:
    {
	//Need to alloborate(Cant spell ahaha)
        printf("EXIT");
        break;
    }
    default:
    {
        printf("Invalid, Please Try Again\n");
    }

    }
//Put these at the end of main()
    getchar();
    getchar();
//Get rid
    return 0;
}



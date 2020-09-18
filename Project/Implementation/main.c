#include <advanced_calculator.h>
#include <math.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
float calculator_operand1 = 0;
float calculator_operand2 = 0;
int calculator_operand3 = 0;
int calculator_operand4 = 0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, MODULO, FACTORIAL, POWER, ANTILOG, COMMONLOG, NATURALLOG, MODULUS, INVERSE, ROOT, SQUARE, CUBE, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n4. DIVIDE\n5. MODULO\n6. FACTORIAL\n7. POWER\n8. ANTILOG\n9. COMMONLOG\n10. NATURALLOG\n11. MODULUS\n12. INVERSE\n13. ROOT\n14. SQUARE\n15. CUBE\n16. Exit");
    printf("\n\tEnter your choice\n");
   
     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%f %f", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%f + %f = %f\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%f - %f = %f\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%f * %f = %f\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%f / %f = %f\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
		case MODULO:
            printf("\n\t%d %% %d = %d\nEnter to continue", 
            calculator_operand3, 
            calculator_operand4,
            modulo(calculator_operand3, calculator_operand4));
            
            __fpurge(stdin);
            getchar();
            break;
		case FACTORIAL:
            printf("\n\t%d! = %d\nEnter to continue", 
            calculator_operand3,
            factorial(calculator_operand3));
            
            __fpurge(stdin);
            getchar();
            break;
		case POWER:
            printf("\n\t%f ^ %f = %f\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            power(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
		case ANTILOG:
            printf("\n\tantilog(%f) = %f\nEnter to continue", 
            calculator_operand1,
            antilog(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
		case COMMONLOG:
            printf("\n\tlog(%f) = %f\nEnter to continue", 
            calculator_operand1, 
            base10log(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
		case NATURALLOG:
            printf("\n\tln(%f) = %f\nEnter to continue", 
            calculator_operand1,
            naturallog(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
		case MODULUS:
            printf("\n\t|%f| = %f\nEnter to continue", 
            calculator_operand1,
            modulus(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
		case INVERSE:
            printf("\n\t%f ^ -1 = %f\nEnter to continue", 
            calculator_operand1,
            inverse(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
		case ROOT:
            printf("\n\tSquare Root of %f = %f\nEnter to continue", 
            calculator_operand1,
            root(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
		case SQUARE:
            printf("\n\t%f ^ 2 = %f\nEnter to continue", 
            calculator_operand1,
            square(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
		case CUBE:
            printf("\n\t%f ^ 3 = %f\nEnter to continue", 
            calculator_operand1, 
            cube(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
        case 16:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}

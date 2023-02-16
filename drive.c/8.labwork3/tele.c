#include <stdio.h>

void main()
{

    int telecom,prof,rech;

    printf("Enter value...\n (1) profile info. \n (2) go to recharge plan. \n (3) go to main menu.\n");
    scanf("%d", &telecom);

    switch (telecom)
    {
    case 1:
        printf("profile info.\n");


        printf("Enter value...\n (1) Check username. \n (2) Check Phone Number. \n (3) go to main menu.\n");
        scanf("%d", &prof);

        switch (prof)
        {
        case 1:
            printf("Username :- Ankit Kamani");
            break;

        case 2:
            printf("Phone number :- 9913130481");
            break;
        
        case 3:
            printf("Go to Main Menu");
            break;
        default:
            printf("Not valid...");
            break;
        }

        break;

    case 2:
        printf("go to recharge plan.");

        printf("Enter value...\n (1) Check New Plans. \n (2) Check special Plans. \n (3) go to main menu.\n");
        scanf("%d", &rech);

        switch (rech)
        {
        case 1:
            printf("Rs.249\n 2 GB/day data + Unlimited calls + 100 SMS/day\n\n");
            printf("Rs.119\n1.5 GB/day data + Unlimited calls + 300 SMS\n");
            break;

        case 2:
            printf("Rs.419\n3 GB/day data + Unlimited calls + 100 SMS/day + JioTV, JioCinema, JioSecurity, JioCloud apps subscriptions \n\n");
            printf("Rs.1559\n24 GB data + Unlimited calls + 3600 + JioTV, JioCinema, JioSecurity, JioCloud apps subscriptions\n\n");
            break;

        case 3:
            printf("Go to Main Menu");
            break;
        
        default:
            printf("Not valid...");
            break;
        }

        break;

    case 3:
        printf("go to main menu.");
        break;


    default:
        printf("Not Valid...");
        break;
    }
}
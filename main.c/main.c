
// Admin Authentication Function

int adminLogin()
{
    char username[30];
    char password[30];

    int attempts = 3;

    printf("\n====================================\n");
    printf("       ADMIN AUTHENTICATION\n");
    printf("====================================\n");

    while (attempts > 0)
    {
        printf("\nEnter User ID: ");
        scanf("%29s", username);

        printf("Enter Password: ");
        scanf("%29s", password);

        if (strcmp(username, "admin") == 0 &&
            strcmp(password, "admin123") == 0)
        {
            printf("\nLogin Successful!\n");
            printf("Welcome Administrator.\n");

            return 1;
        }
        else
        {
            attempts--;

            printf("\nInvalid User ID or Password!\n");
            printf("Remaining Attempts: %d\n", attempts);
        }
    }

    printf("\nMaximum login attempts reached!\n");

    return 0;
}

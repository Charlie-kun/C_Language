//Linked List my Part

    printf("Input four things (1/4): ");
    char fword[50];
    scanf("%s", fword);
    Node * newNode = allocNode(fword);
    add(newNode);
    
    printf("Input four things (2/4): ");
    scanf("%s", fword);
    newNode = allocNode(fword);
    add(newNode);
    
    printf("Input four things (3/4): ");
    scanf("%s", fword);
    newNode = allocNode(fword);
    add(newNode);
    
    printf("Input four things (4/4): ");
    scanf("%s", fword);
    newNode = allocNode(fword);
    add(newNode);
    
    printAll();
    Node * current = gHead;
    while(gHead->next != NULL)
    {
     printf("\n(Q) What's your worst things number? : ");
    int select=0;
    scanf("%d", &select);
    
    int id = select;

    removeNode(id);
    printAll();

    }

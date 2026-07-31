int calPoints(char** operations, int operationsSize) {
    int stack[1000], top = -1, sum = 0;

    for (int i = 0; i < operationsSize; i++) {
        if (strcmp(operations[i], "+") == 0)
            stack[++top] = stack[top] + stack[top - 1];
        else if (strcmp(operations[i], "D") == 0)
            stack[++top] = 2 * stack[top];
        else if (strcmp(operations[i], "C") == 0)
            top--;
        else
            stack[++top] = atoi(operations[i]);
    }

    for (int i = 0; i <= top; i++)
        sum += stack[i];

    return sum;
}
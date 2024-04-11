int solution(const char* my_string) {
    int row = strlen(my_string);
    char** answer = malloc(sizeof(char*) * row);

    printf("%s\n", my_string);
    printf("%s\n", my_string[2]);
    printf("%c %c\n", *my_string, *my_string + 1);

    for (int i = 0; i < row; i++) {
        answer[i] = malloc(sizeof(char) * (row - i ));
        memset(answer[i], 0, sizeof(char) * (row - i ));


        strncpy(answer[i], my_string + i, row - i);
        printf("%s\n", answer[i]);
    }

    return answer;
}


int main() {
    char* str = "banana";
    solution(str);

    return 0;
}
*/
/*int d[1000];

void compear(void const* a, void const* b) {

    return *(int*)a - *(int*)b;
}



int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &d[i]);
    }
    qsort(d, n, sizeof(int), compear);
    for (int i = 0; i < n; i++) {
        printf("%d\n", d[i]);
    }

    

}*/
/*int main() {
    char ss[] = { "i love you" };

    char* ptr = strtok(ss, " ");

    while (ptr != NULL) {
        printf("%s\n", ptr);
        printf("잘라내기 후 %s\n", ss);

        ptr = strtok(NULL, " ");
    }
}*/ 
/*
void compear(void const* a, void const* b) {

    return strcmp(a,b);
}

int main() {
    
    for (int i = 0; i < 3; i++) {
        scanf("%s", d[i]);
    }
    qsort(d, 3, sizeof(d[0]), compear);
    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%s\n", d[i]);
    }

    

}*/

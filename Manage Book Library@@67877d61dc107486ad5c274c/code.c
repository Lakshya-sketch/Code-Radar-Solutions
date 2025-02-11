#include <stdio.h>

struct Book {
    char title[50], author[50];
    float price;
};

void Books(struct Book books[], int n, float cost) {
    printf("Books above price %.2f:\n", cost);
    for (int i = 0; i < n; i++) {
        if (books[i].price > cost) {
            printf("Title: %s, Author: %s, Price: %.2f\n", books[i].title, books[i].author, books[i].price);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    struct Book books[n];
    float cost;
    for (int i = 0; i < n; i++) {
        scanf("%49s %49s %f", books[i].title, books[i].author, &books[i].price);
    }
    scanf("%f", &cost);
    Books(books, n, cost);

    return 0;
}

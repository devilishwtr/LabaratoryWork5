// Варинат работы - 19
#include <stdio.h>
#include <string.h>

struct Books {
    char name[20];
    char publisher[20];
    double price;
    int number;
};

void getBooks( struct Books *books) {
    char setName[20];
    char setPublisher[20];
    double setPrice;
    int setNumber;
    for (int i = 0; i < 4; i++) {
        printf("Enter book's name:");
        scanf("%s", &setName);
        books[i].name[20] = (char) strcpy(books[i].name, setName);
        printf("Enter publisher's name:");
        scanf("%s", &setPublisher);
        books[i].publisher[20] = (char) strcpy(books[i].publisher, setPublisher);
        printf("Enter book's price:");
        scanf("%lf", &setPrice);
        books[i].price = setPrice;
        printf("Enter number of books:");
        scanf("%d", &setNumber);
        books[i].number = setNumber;
    }
}

void displayBooks(const struct Books *books) {
    printf("Struct Books: \n\n");
    for (int i = 0; i < 4; i++) {
        printf("Book :%d\n",i+1);
        printf("Book's name: %s\n", books[i].name);
        printf("Publisher: %s\n", books[i].publisher);
        printf("Book's price: %.2f\n", books[i].price);
        printf("Number of books: %d\n___________________\n", books[i].number);
    }
}

int main() {
    struct Books books[4];
    getBooks(books);
    displayBooks(books);
    return 0;
}


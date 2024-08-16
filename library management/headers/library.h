int add_book();

struct book {
    char title[50];
    char author[50];
    int access_no;
    float price;
    bool issued;
};

struct book b[100] = {
    "Harry potter",
    "JK Rowling",
    13423,
    231.2,
    true
};
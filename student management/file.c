#include<stdio.h>

struct cric_record {
    char name[20];
    int age;
    int test_match;
    float avg_runs;
};

struct cric_record records[5] = {
    "Sunil Gavaskar", 32, 200, 200,
    "Sachin Tendulkar", 33, 300, 132.2,
    "Saurav Ganguly", 21, 200, 153.2,
    "Don Bradman", 43, 400, 211.2,
    "Brian Lara", 44, 420, 235.5 
};

void main(){
    struct cric_record *p;
    p = records;

    for(int i = 0; i<=4; i++){
        printf("%s %d %d %.1f\n", p->name, p->age, p->test_match, p->avg_runs);
        p += 1;
    }
}
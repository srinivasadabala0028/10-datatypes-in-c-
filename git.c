// find the size of the data types
#include<stdio.h>
int main() {
    short int a;
    unsigned short int b;
    unsigned int c;
    int d;
    long int e;
    unsigned long int f; 
    long long int g;
    unsigned long long int h; 
    float i;
    double  j;
    
    printf("size of short int is %hd bytes\n",sizeof(a));
     printf("size of unsigned short int  is %hu bytes\n",sizeof(b));
      printf("size of unsigned int  is %u bytes\n",sizeof(c));
       printf("size of  int is %d bytes\n",sizeof(d));
        printf("size of long int is %ld bytes\n",sizeof(e));
         printf("size of unsigned long int is %lu bytes\n",sizeof(f));
          printf("size of long long int is %lld bytes\n",sizeof(g));
           printf("size of unsigned long long int is %llu bytes\n",sizeof(h));
            printf("size of float  is %zu bytes\n",sizeof(i));
             printf("size of double is %zu bytes\n",sizeof(j));

    
    return 0;
}
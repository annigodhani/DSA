// #include<stdio.h>
// #include<stdlib.h>
// #define n 5
// int a[n];
// int r=-1,f=-1,i;
// int Display()
// {
//     for(i=f;i<=r;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     printf("\n");
// }

// int Insert(int val)
// {
//     if(r >= n-1)
//     {
//         printf("Queue is full:");
//     }
//     else
//     {
//         if(f > 0)
//         {
//             f = 0;
//         }
//         a[r] = val;
//         r++;
//     }
// }

// int Delete()

// {
//     if(f<0)
//     {
//         printf("\n Queue is Empty:");
//     }
//     else
//     {
//         f++;
//         if(f > r)
//         {
//             f == r  -1;
//         }
//     }
// }

// int main()
// {
//     Insert(100);
//     Insert(200);
//     Insert(300);
//     Insert(400);
//     Insert(500);
//     Display();

//     Delete();
//     Display();
// }


#include <stdio.h>
#include <stdlib.h>
#define n 5
int a[n];
int r = -1, f = -1, i;

void Display() {
    for (i = f; i <= r; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void Insert(int val) {
    if (r >= n - 1) {
        printf("Queue is full\n");
    } else {
        r++;
        a[r] = val;
        if (f == -1) {
            f = 0;
        }
    }
}

void Delete() {
    if (f < 0) {
        printf("Queue is Empty\n");
    } else {
        f++;
        if (f > r) {
            f = -1;
            r = -1;
        }
    }
}

int main() {
    Insert(100);
    Insert(200);
    Insert(300);
    Insert(400);
    Insert(500);
    Display();

    Delete();
    Display();
    
    return 0;
}

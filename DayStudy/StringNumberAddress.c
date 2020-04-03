//string number address


#include<stdio.h>

int main(void)
{
    printf("start address value at apple saved : %p\n", "apple");
    printf("second alphabets stirng address : %p\n", "apple"+1);
    printf("first alphabet : %c\n", *"apple");
    printf("2nd alphabet : %c\n", *("apple"+1));
    printf("expression array 3rd alphabet : %c\n", "apple"[2]);

    return 0;
}

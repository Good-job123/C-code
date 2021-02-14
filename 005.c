// #include<stdio.h>

// int main()
// {
//     // char str[50];
//     int letter,number,blank,others;
//     letter=0,number=0,blank=0,others=0;
//     // gets(str);
//     char c;
//     while((c=getchar())!='\n'){
//         getchar();
//         if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
//             letter++;
//         }
//          else if(c>='0'&&c<='9'){
//              number++;
//         }
//         else if(c==' '){
//             blank++;
//         }

//         else{
//             others++;//别是表达式，orthers++不行
//         }

//     }
//     printf(" letter: %d\n number: %d\n blank: %d\n others: %d",letter,number,blank,others);

//     return 0;
// }

#include <stdio.h>

int main()
{
    // char str[100];
    char c;
    // gets(str);
    int words = 0, blank = 0, figure = 0, others = 0;
    while ((c = getchar()) != '\n')
    {

        if (c == ' ')
            blank++;

        else if (c <= '9' && c >= '0')
        {
            figure++;
        }
        else if ((c <= 'z' && c > 'a') || (c <= 'Z' && c >= 'A'))
        {
            words++;
        }
        else
        {
            others++;
        }
    }
    printf("字母有:%d 空格有:%d 数字有:%d 其他字符有:%d ", words, blank, figure, others);
    return 0;
}

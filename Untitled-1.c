#include<stdio.h>
// int fibonacci(int n){
//     if(n==1)return 0;
//     else if(n==2) return 1;
//     else return fibonacci(n-1)+fibonacci(n-2);
// }

// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         printf("%d,",fibonacci(i+1));
//     }
// }


int vowel(char str[]){
    int count=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        {
            count++;
        }
    }
    return count;
}
int main(){
    // char str[100];

    // scanf("%s",str);
    // printf("%d",vowel(str));
    int x=1;
    switch(x){
        default:
        printf("2");
        break;
        case 1:
        printf("1");
        break;
    }


}

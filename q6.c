// Write a C program that takes a sentence as input and splits it into individual words 
//using space as a delimiter. Print each word on a separate line. 
#include<stdio.h>
#include<string.h>


int main(){
    char str[100];
    // char word[100][100];
    int space[100];
    int count=0;
    scanf("%[^\n]",str);
    int len =strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]==' '){
            space[count]=i;
            count++;
        }
    }
    int start=0;
    int end=0;
    // int
    for(int i=0;i<=count;i++){
        // if(i==count){
        //     for(int j=;j<=len;j++){
        //     printf("%c",str[j]);
           

        //  }
        //  break;
        // }
        if(i==count)end=len;
        else
        end=space[i];
        // if(i==strlen(space)){
        //     for(int j=start;j<strlen(space);j++){
        //     printf("%c",str[j]);
        //     start=end+1;
        // }}else
        // {
        // for(int j=start;j<end;j++){
        //     printf("%c",str[j]);
        
        //     start=end+1;

        // }
        // printf("\n");
        // }
        for(int j=start;j<end;j++){
            printf("%c",str[j]);
           

         }
         start=end+1;
         printf("\n");
         
    }
    // printf("%s",str);
    // for(int i=0;i<100;i++){
    //     if(str[i]==' '){ptr[count]=i-1;count++;}
    // }
    // for(int i=0;i<100;i++){
    //     for(int j=0;j<count;j++){
    //         if(j%2==1)printf("%c\n",str[ptr[j]]);
    //         else printf("%c",str[ptr[j]]);
            
    //     }
    // }
   /* for(int i=0;i<100;i++){
        if(str[i]==' ') *(str+i)='\n';//change ' ' to '\n' 

    }*/
    
    // for(int i=0;i<100;i++){
    //     if(str[i]!='\0') printf("%c",str[i]);

    // } change ' ' to '\n' 

}
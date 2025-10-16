#include<stdio.h>

void FindCommonElements(int n1,int n2,int str1[],int str2[],int CommonElements[],int *count){
    *count=0;
    // int CommonElements[100]={0};
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            // if(str1[i]==str2[j]){
            //     for(int k=0;k<n1;k++){
            //         if(CommonElements[k]==str1[i])CommonElements[i]=1;
                    
            //     }
            //     if(CommonElements[i]!=1){
            //         CommonElements[*count]=str1[i];
            //         *count++;
            //     }
            // }
         int found=0;
         if(str1[i]==str2[j]){
            found=1;
         }
         if(found){
            int already_in=0;
            for(int k=0;k<*count;k++){
                if(CommonElements[k]==str1[i]) {already_in=1;break;}

            }
            if(!already_in){CommonElements[*count]=str1[i];(*count)++;}

         }
        }

    }

}

int main(){
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    int str1[n1];
    int str2[n2];
    for(int i=0;i<n1;i++){
        scanf("%d",&str1[i]);
            
        
    }
    for(int i=0;i<n2;i++){
        scanf("%d",&str2[i]);
            
        
    }
    int CommonElements[100];
    int count=0;
    FindCommonElements(n1,n2,str1,str2,CommonElements,&count);
    for(int i=0;i<count;i++){
        printf("%d,",count);
        printf("%d,",CommonElements[i]);
    }

}
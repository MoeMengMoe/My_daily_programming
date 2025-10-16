#include<stdio.h>
typedef struct{
    int flight_num;
    int DAC;//together with AC
    int AAC;
    long long departure_time;
    long long arrival_time;

}reservation_struct;
int main(){
    reservation_struct f[6];
    f[0].flight_num=3269;
    f[0].DAC=1;
    f[0].AAC=2;
    f[0].departure_time=20110120090436;
    f[0].arrival_time=20110120095536;
    //reservation_struct f2;
    f[1].flight_num=4189;
    f[1].DAC=2;
    f[1].AAC=3;
    f[1].departure_time=20110120100436;
    f[1].arrival_time=20110120105536;
   // reservation_struct f3;
    f[2].flight_num=603 ;
    f[2].DAC=3;
    f[2].AAC=4;
    f[2].departure_time=20110120090436;
    f[2].arrival_time=20110120095536;
    // reservation_struct f4;
    f[3].flight_num=900 ;
    f[3].DAC=2;
    f[3].AAC=1;
    f[3].departure_time=20110120105536;
    f[3].arrival_time=20110120115536;
    // reservation_struct f5;
    f[4].flight_num=1337;
    f[4].DAC=4;
    f[4].AAC=2;
    f[4].departure_time=20110120090436;
    f[4].arrival_time=20110120095536;
    // reservation_struct f6;
    f[5].flight_num=9027;
    f[5].DAC=3;
    f[5].AAC=1;
    f[5].departure_time=20110120100436;
    f[5].arrival_time=20110120110436;
    int dac,aac;
    // int array[][2]={{0,0},{1,2},{2,3},{3,4},{2,1},{4,2},{3,1}};
    printf("input DAC:");
    scanf("AC%d",&dac);
    printf("input AAC:");
    scanf("AC%d",&aac);
    // for(int i=1;i<=6;i++){
    //     for(int j=1;j<=6;j++){
    //         if(aac==array[j][0]){
    //             if(dac==array[j][1])
    //         }
    //     }
    // }
    for(int j=0;j<6;j++){
             if(dac==f[j].DAC){
                 if(aac==f[j].AAC){printf("%d\n",f[j].flight_num);}
             else continue;
             }
            
}

}
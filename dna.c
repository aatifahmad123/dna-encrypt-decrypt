#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    printf("Enter your name : ");
    char str[100];
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        str[i]=toupper(str[i]);
    }
    printf("Your name is : ");
    printf("%s",str);
    printf("The binary code for your name is : ");
    int a1[8],a2[8],a3[8],a4[8],a5[8],a6[8],a7[8],a8[8],a9[8],a10[8],a11[8],a12[8],a13[8],a14[8],a15[8],a16[8],a17[8],a18[8],a19[8],a20[8],a21[8],a22[8],a23[8],a24[8],a25[8],a26[8],a27[8];
    a1[0]=0;
    a1[1]=1;
    a1[2]=0;
    a1[3]=0;
    a1[4]=0;
    a1[5]=0;
    a1[6]=0;
    a1[7]=1;
    
    a2[0]=0;
    a2[1]=1;
    a2[2]=0;
    a2[3]=0;
    a2[4]=0;
    a2[5]=0;
    a2[6]=1;
    a2[7]=0;
    
    a3[0]=0;
    a3[1]=1;
    a3[2]=0;
    a3[3]=0;
    a3[4]=0;
    a3[5]=0;
    a3[6]=1;
    a3[7]=1;
    
    a4[0]=0;
    a4[1]=1;
    a4[2]=0;
    a4[3]=0;
    a4[4]=0;
    a4[5]=1;
    a4[6]=0;
    a4[7]=0;
    
    a5[0]=0;
    a5[1]=1;
    a5[2]=0;
    a5[3]=0;
    a5[4]=0;
    a5[5]=1;
    a5[6]=0;
    a5[7]=1;
    
    a6[0]=0;
    a6[1]=1;
    a6[2]=0;
    a6[3]=0;
    a6[4]=0;
    a6[5]=1;
    a6[6]=1;
    a6[7]=0;
    
    a7[0]=0;
    a7[1]=1;
    a7[2]=0;
    a7[3]=0;
    a7[4]=0;
    a7[5]=1;
    a7[6]=1;
    a7[7]=1;
    
    a8[0]=0;
    a8[1]=1;
    a8[2]=0;
    a8[3]=0;
    a8[4]=1;
    a8[5]=0;
    a8[6]=0;
    a8[7]=0;
    
    a9[0]=0;
    a9[1]=1;
    a9[2]=0;
    a9[3]=0;
    a9[4]=1;
    a9[5]=0;
    a9[6]=0;
    a9[7]=1;
    
    a10[0]=0;
    a10[1]=1;
    a10[2]=0;
    a10[3]=0;
    a10[4]=1;
    a10[5]=0;
    a10[6]=1;
    a10[7]=0;
    
    a11[0]=0;
    a11[1]=1;
    a11[2]=0;
    a11[3]=0;
    a11[4]=1;
    a11[5]=0;
    a11[6]=1;
    a11[7]=1;
    
    a12[0]=0;
    a12[1]=1;
    a12[2]=0;
    a12[3]=0;
    a12[4]=1;
    a12[5]=1;
    a12[6]=0;
    a12[7]=0;
    
    a13[0]=0;
    a13[1]=1;
    a13[2]=0;
    a13[3]=0;
    a13[4]=1;
    a13[5]=1;
    a13[6]=0;
    a13[7]=1;
    
    a14[0]=0;
    a14[1]=1;
    a14[2]=0;
    a14[3]=0;
    a14[4]=1;
    a14[5]=1;
    a14[6]=1;
    a14[7]=0;
    
    a15[0]=0;
    a15[1]=1;
    a15[2]=0;
    a15[3]=0;
    a15[4]=1;
    a15[5]=1;
    a15[6]=1;
    a15[7]=1;
    
    a16[0]=0;
    a16[1]=1;
    a16[2]=0;
    a16[3]=1;
    a16[4]=0;
    a16[5]=0;
    a16[6]=0;
    a16[7]=0;
    
    a17[0]=0;
    a17[1]=1;
    a17[2]=0;
    a17[3]=1;
    a17[4]=0;
    a17[5]=0;
    a17[6]=0;
    a17[7]=1;
    
    a18[0]=0;
    a18[1]=1;
    a18[2]=0;
    a18[3]=1;
    a18[4]=0;
    a18[5]=0;
    a18[6]=1;
    a18[7]=0;
    
    a19[0]=0;
    a19[1]=1;
    a19[2]=0;
    a19[3]=1;
    a19[4]=0;
    a19[5]=0;
    a19[6]=1;
    a19[7]=1;
    
    a20[0]=0;
    a20[1]=1;
    a20[2]=0;
    a20[3]=1;
    a20[4]=0;
    a20[5]=1;
    a20[6]=0;
    a20[7]=0;
    
    a21[0]=0;
    a21[1]=1;
    a21[2]=0;
    a21[3]=1;
    a21[4]=0;
    a21[5]=1;
    a21[6]=0;
    a21[7]=1;
    
    a22[0]=0;
    a22[1]=1;
    a22[2]=0;
    a22[3]=1;
    a22[4]=0;
    a22[5]=1;
    a22[6]=1;
    a22[7]=0;
    
    a23[0]=0;
    a23[1]=1;
    a23[2]=0;
    a23[3]=1;
    a23[4]=0;
    a23[5]=1;
    a23[6]=1;
    a23[7]=1;
    
    a24[0]=0;
    a24[1]=1;
    a24[2]=0;
    a24[3]=1;
    a24[4]=1;
    a24[5]=0;
    a24[6]=0;
    a24[7]=0;
    
    a25[0]=0;
    a25[1]=1;
    a25[2]=0;
    a25[3]=1;
    a25[4]=1;
    a25[5]=0;
    a25[6]=0;
    a25[7]=1;
    
    a26[0]=0;
    a26[1]=1;
    a26[2]=0;
    a26[3]=1;
    a26[4]=1;
    a26[5]=0;
    a26[6]=1;
    a26[7]=0;
    
    a27[0]=0;
    a27[1]=0;
    a27[2]=1;
    a27[3]=0;
    a27[4]=0;
    a27[5]=0;
    a27[6]=0;
    a27[7]=0;
    
    for(int i=0;i<l;i++){
    if(str[i]=='A')
    for(int j=0;j<8;j++){
        printf("%d",a1[j]);
    }
    if(str[i]=='B')
    for(int j=0;j<8;j++){
        printf("%d",a2[j]);
    }
    if(str[i]=='C')
    for(int j=0;j<8;j++){
        printf("%d",a3[j]);
    }
    if(str[i]=='D')
    for(int j=0;j<8;j++){
        printf("%d",a4[j]);
    }
    if(str[i]=='E')
    for(int j=0;j<8;j++){
        printf("%d",a5[j]);
    }
    if(str[i]=='F')
    for(int j=0;j<8;j++){
        printf("%d",a6[j]);
    }
    if(str[i]=='G')
    for(int j=0;j<8;j++){
        printf("%d",a7[j]);
    }
    if(str[i]=='H')
    for(int j=0;j<8;j++){
        printf("%d",a8[j]);
    }
    if(str[i]=='I')
    for(int j=0;j<8;j++){
        printf("%d",a9[j]);
    }
    if(str[i]=='J')
    for(int j=0;j<8;j++){
        printf("%d",a10[j]);
    }
    if(str[i]=='K')
    for(int j=0;j<8;j++){
        printf("%d",a11[j]);
    }
    if(str[i]=='L')
    for(int j=0;j<8;j++){
        printf("%d",a12[j]);
    }
    if(str[i]=='M')
    for(int j=0;j<8;j++){
        printf("%d",a13[j]);
    }
    if(str[i]=='N')
    for(int j=0;j<8;j++){
        printf("%d",a14[j]);
    }
    if(str[i]=='O')
    for(int j=0;j<8;j++){
        printf("%d",a15[j]);
    }
    if(str[i]=='P')
    for(int j=0;j<8;j++){
        printf("%d",a16[j]);
    }
    if(str[i]=='Q')
    for(int j=0;j<8;j++){
        printf("%d",a17[j]);
    }
    if(str[i]=='R')
    for(int j=0;j<8;j++){
        printf("%d",a18[j]);
    }
    if(str[i]=='S')
    for(int j=0;j<8;j++){
        printf("%d",a19[j]);
    }
    if(str[i]=='T')
    for(int j=0;j<8;j++){
        printf("%d",a20[j]);
    }
    if(str[i]=='U')
     for(int j=0;j<8;j++){
        printf("%d",a21[j]);
    }
    if(str[i]=='V')
     for(int j=0;j<8;j++){
        printf("%d",a22[j]);
    }
    if(str[i]=='W')
     for(int j=0;j<8;j++){
        printf("%d",a23[j]);
    }
    if(str[i]=='X')
     for(int j=0;j<8;j++){
        printf("%d",a24[j]);
    }
    if(str[i]=='Y')
     for(int j=0;j<8;j++){
        printf("%d",a25[j]);
    }
    if(str[i]=='Z')
     for(int j=0;j<8;j++){
        printf("%d",a26[j]);
    }
    if(str[i]==' ')
     for(int j=0;j<8;j++){
        printf("%d",a27[j]);
    }
    }
    printf("\n");
    printf("The DNA sequence for your name will be : ");
    
    for(int k=0;k<7;k=k+2){
        if((a1[k]==0)&&(a1[k+1]==0)){
            printf("T");
        }
        if((a1[k]==1)&&(a1[k+1]==1)){
            printf("A");
        }
        if((a1[k]==0)&&(a1[k+1]==1)){
            printf("C");
        }
        if((a1[k]==1)&&(a1[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a2[k]==0)&&(a2[k+1]==0)){
            printf("T");
        }
        if((a2[k]==1)&&(a2[k+1]==1)){
            printf("A");
        }
        if((a2[k]==0)&&(a2[k+1]==1)){
            printf("C");
        }
        if((a2[k]==1)&&(a2[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a3[k]==0)&&(a3[k+1]==0)){
            printf("T");
        }
        if((a3[k]==1)&&(a3[k+1]==1)){
            printf("A");
        }
        if((a3[k]==0)&&(a3[k+1]==1)){
            printf("C");
        }
        if((a3[k]==1)&&(a3[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a4[k]==0)&&(a4[k+1]==0)){
            printf("T");
        }
        if((a4[k]==1)&&(a4[k+1]==1)){
            printf("A");
        }
        if((a4[k]==0)&&(a4[k+1]==1)){
            printf("C");
        }
        if((a4[k]==1)&&(a4[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a5[k]==0)&&(a5[k+1]==0)){
            printf("T");
        }
        if((a5[k]==1)&&(a5[k+1]==1)){
            printf("A");
        }
        if((a5[k]==0)&&(a5[k+1]==1)){
            printf("C");
        }
        if((a5[k]==1)&&(a5[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a6[k]==0)&&(a6[k+1]==0)){
            printf("T");
        }
        if((a6[k]==1)&&(a6[k+1]==1)){
            printf("A");
        }
        if((a6[k]==0)&&(a6[k+1]==1)){
            printf("C");
        }
        if((a6[k]==1)&&(a6[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a7[k]==0)&&(a7[k+1]==0)){
            printf("T");
        }
        if((a7[k]==1)&&(a7[k+1]==1)){
            printf("A");
        }
        if((a7[k]==0)&&(a7[k+1]==1)){
            printf("C");
        }
        if((a7[k]==1)&&(a7[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a8[k]==0)&&(a8[k+1]==0)){
            printf("T");
        }
        if((a8[k]==1)&&(a8[k+1]==1)){
            printf("A");
        }
        if((a8[k]==0)&&(a8[k+1]==1)){
            printf("C");
        }
        if((a8[k]==1)&&(a8[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a9[k]==0)&&(a9[k+1]==0)){
            printf("T");
        }
        if((a9[k]==1)&&(a9[k+1]==1)){
            printf("A");
        }
        if((a9[k]==0)&&(a9[k+1]==1)){
            printf("C");
        }
        if((a9[k]==1)&&(a9[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a10[k]==0)&&(a10[k+1]==0)){
            printf("T");
        }
        if((a10[k]==1)&&(a10[k+1]==1)){
            printf("A");
        }
        if((a10[k]==0)&&(a10[k+1]==1)){
            printf("C");
        }
        if((a10[k]==1)&&(a10[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a11[k]==0)&&(a11[k+1]==0)){
            printf("T");
        }
        if((a11[k]==1)&&(a11[k+1]==1)){
            printf("A");
        }
        if((a11[k]==0)&&(a11[k+1]==1)){
            printf("C");
        }
        if((a11[k]==1)&&(a11[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a12[k]==0)&&(a12[k+1]==0)){
            printf("T");
        }
        if((a12[k]==1)&&(a12[k+1]==1)){
            printf("A");
        }
        if((a12[k]==0)&&(a12[k+1]==1)){
            printf("C");
        }
        if((a12[k]==1)&&(a12[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a13[k]==0)&&(a13[k+1]==0)){
            printf("T");
        }
        if((a13[k]==1)&&(a13[k+1]==1)){
            printf("A");
        }
        if((a13[k]==0)&&(a13[k+1]==1)){
            printf("C");
        }
        if((a13[k]==1)&&(a13[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a14[k]==0)&&(a14[k+1]==0)){
            printf("T");
        }
        if((a14[k]==1)&&(a14[k+1]==1)){
            printf("A");
        }
        if((a14[k]==0)&&(a14[k+1]==1)){
            printf("C");
        }
        if((a14[k]==1)&&(a14[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a15[k]==0)&&(a15[k+1]==0)){
            printf("T");
        }
        if((a15[k]==1)&&(a15[k+1]==1)){
            printf("A");
        }
        if((a15[k]==0)&&(a15[k+1]==1)){
            printf("C");
        }
        if((a15[k]==1)&&(a15[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a16[k]==0)&&(a16[k+1]==0)){
            printf("T");
        }
        if((a16[k]==1)&&(a16[k+1]==1)){
            printf("A");
        }
        if((a16[k]==0)&&(a16[k+1]==1)){
            printf("C");
        }
        if((a16[k]==1)&&(a16[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a17[k]==0)&&(a17[k+1]==0)){
            printf("T");
        }
        if((a17[k]==1)&&(a17[k+1]==1)){
            printf("A");
        }
        if((a17[k]==0)&&(a17[k+1]==1)){
            printf("C");
        }
        if((a17[k]==1)&&(a17[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a18[k]==0)&&(a18[k+1]==0)){
            printf("T");
        }
        if((a18[k]==1)&&(a18[k+1]==1)){
            printf("A");
        }
        if((a18[k]==0)&&(a18[k+1]==1)){
            printf("C");
        }
        if((a18[k]==1)&&(a18[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a19[k]==0)&&(a19[k+1]==0)){
            printf("T");
        }
        if((a19[k]==1)&&(a19[k+1]==1)){
            printf("A");
        }
        if((a19[k]==0)&&(a19[k+1]==1)){
            printf("C");
        }
        if((a19[k]==1)&&(a19[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a20[k]==0)&&(a20[k+1]==0)){
            printf("T");
        }
        if((a20[k]==1)&&(a20[k+1]==1)){
            printf("A");
        }
        if((a20[k]==0)&&(a20[k+1]==1)){
            printf("C");
        }
        if((a20[k]==1)&&(a20[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a21[k]==0)&&(a21[k+1]==0)){
            printf("T");
        }
        if((a21[k]==1)&&(a21[k+1]==1)){
            printf("A");
        }
        if((a21[k]==0)&&(a21[k+1]==1)){
            printf("C");
        }
        if((a21[k]==1)&&(a21[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a22[k]==0)&&(a22[k+1]==0)){
            printf("T");
        }
        if((a22[k]==1)&&(a22[k+1]==1)){
            printf("A");
        }
        if((a22[k]==0)&&(a22[k+1]==1)){
            printf("C");
        }
        if((a22[k]==1)&&(a22[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a23[k]==0)&&(a23[k+1]==0)){
            printf("T");
        }
        if((a23[k]==1)&&(a23[k+1]==1)){
            printf("A");
        }
        if((a23[k]==0)&&(a23[k+1]==1)){
            printf("C");
        }
        if((a23[k]==1)&&(a23[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a24[k]==0)&&(a24[k+1]==0)){
            printf("T");
        }
        if((a24[k]==1)&&(a24[k+1]==1)){
            printf("A");
        }
        if((a24[k]==0)&&(a24[k+1]==1)){
            printf("C");
        }
        if((a24[k]==1)&&(a24[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a25[k]==0)&&(a25[k+1]==0)){
            printf("T");
        }
        if((a25[k]==1)&&(a25[k+1]==1)){
            printf("A");
        }
        if((a25[k]==0)&&(a25[k+1]==1)){
            printf("C");
        }
        if((a25[k]==1)&&(a25[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a26[k]==0)&&(a26[k+1]==0)){
            printf("T");
        }
        if((a26[k]==1)&&(a26[k+1]==1)){
            printf("A");
        }
        if((a26[k]==0)&&(a26[k+1]==1)){
            printf("C");
        }
        if((a26[k]==1)&&(a26[k+1]==0)){
            printf("G");
        }
    }
     for(int k=0;k<7;k=k+2){
        if((a27[k]==0)&&(a27[k+1]==0)){
            printf("T");
        }
        if((a27[k]==1)&&(a27[k+1]==1)){
            printf("A");
        }
        if((a27[k]==0)&&(a27[k+1]==1)){
            printf("C");
        }
        if((a27[k]==1)&&(a27[k+1]==0)){
            printf("G");
        }
    }
    return 0;
}
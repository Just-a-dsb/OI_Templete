#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    FILE *fin, *fout;  // 定义文件指针
    fin = fopen("data.in", "r");
    fout = fopen("data.out", "w");
    /*
        使用 fscanf() 与 fprintf() 进行输入输出
        fscanf(fin,"%d",&a);
        fprintf(fout,"%d",a);
    */
    fclose(fin);
    fclose(fout);
    return 0;
}
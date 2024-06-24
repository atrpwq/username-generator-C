#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int userget(){
	srand(time(NULL));
	char arr1[10][9] = {"Lost","Weird","Fat","Kid","Blue","Hurt","Dumb","Stupid","Cooler","Ultimate"};
	char arr2[10][9] = {"Human","Ape","Cub","Paint","Bars","Scar","Crud","Barbarian","Camel","Nomad"};
	int rannum = rand()%9999;int arr=rand()%9;
	printf("%s%s%d\n",arr1[arr],arr2[arr],rannum);
}
void main(){
	userget();
}


















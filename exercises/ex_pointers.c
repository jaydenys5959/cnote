// 포인터 연습문제

/*
1. 포인터를 사용하여 주어진 문자열을 거꾸로 출력하는 함수를 작성하시오.
테스트 케이스: hello7
 Pointer : Print a string in reverse order :                                                                  
------------------------------------------------                                                              
 Input a string : hello7                                                                              
 Reverse of the string is : 7olleh

2. 포인터를 사용하여 배열의 모든 원소를 합하여 반환하는 함수를 작성하시오.
테스트 케이스:
입력 원소의 개수 (max 10) : 5
입력 원소들 :
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6
Expected Output :

 The sum of array is : 20

3. 포인터를 이용하여 주어진 문자열의 길이를 반환하는 함수를 작성하시오.
테스트 케이스: hello7
The length of the given string hello7:
10    

4. 위 함수를 호출하는 main함수를 작성하시오.
*/

#include <stdio.h>
void reverseString(){
   char str1[50];
   char revstr[50];
   char *stptr = str1;
   char *rvptr = revstr;
   int i=-1;
 	printf("\n\n Print a string in reverse order :\n"); 
	printf("------------------------------------------------\n");	
   printf(" Input a string : ");
   scanf("%s",str1);
   while(*stptr)
   {
   printf("log: %p", *stptr); //logging
   stptr++;
   i++;
   }
   while(i>=0)
   {
   stptr--;
   *rvptr = *stptr;
   rvptr++;
   --i;
   }
   *rvptr='\0';
   printf(" Reverse of the string is : %s\n\n",revstr);

}
void sumArr(){
     int arr1[10];
   int i,n, sum = 0;
   int *pt;
   
 	printf("\n\n Pointer : Sum of all elements in an array :\n"); 
	printf("------------------------------------------------\n"); 
	
   printf(" Input the number of elements to store in the array (max 10) : ");
   scanf("%d",&n);
   
   printf(" Input %d number of elements in the array : \n",n);
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : ",i+1);
	  scanf("%d",&arr1[i]);
	  } 	

   pt = arr1; // pt store the base address of array arr1
 
   for (i = 0; i < n; i++) {
      sum = sum + *pt;
      pt++;
   }
 
   printf(" The sum of array is : %d\n\n", sum);
}

 


 
int main()
{
   reverseString();
   sumArr();
   
    return 0;
}
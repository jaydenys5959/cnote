#include <stdio.h>

#define MAX_VIDEO 100
#define MAX_CHAR 100

struct VideoInfo{
    char title;
    int qty;
}

int main() {
    printf("Hello world");

    struct VideoInfo videoList[MAX_VIDEO] ={};
    int videoCount = 5;

    // title, qty 입력받고 변수에 저장.
    struct VideoInfo v; // 위의 값으로 구입한 비디오 생성
    v.title = ""; //assign title variable
    v.qty = 2; // assign qty variable   
    
    // 구입 기능
    add_item(/* videoList pointer*/ v, videoCount); 
    
    return 0;
}

void add_item(struct VideoInfo *p, struct VideoInfo newVideo, int * videoCount)
{
   if ( *videoCount < MAX_VIDEO )
   {
      p[*videoCount] = newVideo; //비디오 개수가 새로운 아이템의 인덱스가 됨.
      *videoCount += 1; //비디오 개수 업데이트
   }
}
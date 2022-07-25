#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 문자열 내에 존재하는 문자의 시작과 끝을 나타낼 수 있는 구조체
typedef struct _str {
	int startIdx;
	int endIdx;
}strIdx;

void reverseWord(char str[], int start, int end) {
	int i,num;
	char temp;
	num = (end - start + 1) / 2;
	for (i = 0; i < num; i++) {
		temp = str[end - i];
		str[end - i] = str[start + i];
		str[start + i] = temp;
	}
}

int main(void) {
	int i, strNum = 0, wordFlag = 0, tagFlag = 0,len;
	char * input;
	strIdx  * strArr;
	input = (char*)malloc(sizeof(char) * 100001);
	strArr = (strIdx*)malloc(sizeof(strIdx) * 100000);
	gets(input);
	len = strlen(input);
	for (i = 0; i < len; i++) {
		if (tagFlag == 0) {
			if (wordFlag) {
				if (input[i] == '<') {
					wordFlag = 0;
					tagFlag = 1;
					strArr[strNum].endIdx = i - 1;
					strNum++;
				}
				else if (input[i] == ' ') {
					wordFlag = 0;
					strArr[strNum].endIdx = i - 1;
					strNum++;
				}
				else if (i == len - 1) {
					wordFlag = 0;
					strArr[strNum].endIdx = i;
					strNum++;
				}
			}
			else {
				if (input[i] == '<')
					tagFlag = 1;
				else {
					wordFlag = 1;
					strArr[strNum].startIdx = i;
				}
			}
		}
		else {
			if (input[i] == '>') 
				tagFlag = 0;
		}
	}
	for (i = 0; i < strNum; i++) {
		reverseWord(input, strArr[i].startIdx, strArr[i].endIdx);
	}
	printf("%s", input);
	free(input);
	free(strArr);
	return 0;
}
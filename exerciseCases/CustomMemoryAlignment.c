#define _CRT_SECURE_NO_WARNINGS 1

#include "Cases_functions.h"

#pragma pack(2)
struct s1
{
	char c1;
	int i;
	char c2;
};
#pragma pack()

#pragma pack(4)
struct s2
{
	char c1;
	int i;
	char c2;
};
#pragma pack()

struct s3
{
	char c;
	int i;
	char c2;
};

#pragma pack(16)
struct s4
{
	char c;
	int i;
	char c2;
};
#pragma pack()

void CustomMemoryAlignment()
{
	printf("pragma pack(2), Size of memory in bytes: %d, offset of the second member: %d\n", sizeof(struct s1), offsetof(struct s1, i));
	printf("pragma pack(4), Size of memory in bytes: %d, offset of the second member: %d\n", sizeof(struct s2), offsetof(struct s2, i));
	printf("pragma pack(8), Size of memory in bytes: %d, offset of the second member: %d\n", sizeof(struct s3), offsetof(struct s3, i));
	printf("pragma pack(16), Size of memory in bytes: %d, offset of the second memebr: %d\n", sizeof(struct s4), offsetof(struct s4, i));
}
#include <string.h>
#include <stdio.h>

int main() {
	printf("Test STRLEN :\n");
	printf("Strlen of \"ISSOU\" is %d (expected 5)\n", strlen("ISSOU"));
	printf("\n");

	printf("Test STRCHR :\n");
	printf("Strchr of \"Issou la chancla\" for 'u' is : %s (expected \"u la chancla\"\n", strchr("Issou la chancla", 'u'));
	printf("\n");

	printf("Test MEMSET :\n");
	char str[17] = "Issou la chancla";
	char c = 'p';
	size_t nb = 3;
	printf("Memset of \"Issou la chancla\" with 'p' and 3 is : %s (expected \"pppou la chancla\")\n", memset(str, c, nb));
	printf("\n");

	printf("TEST MEMCPY :\n");
	char risitas[8] = "risitas";
	printf("Memcpy of \"Issou la chancla\" with \"risitas\" and 3 is : %s (expected \"risou la chancla\"\n", memcpy(str, risitas, nb));
	printf("\n");

	printf("TEST STRCMP :\n");
	printf("Strcmp of \"Oui\" and \"Ouioui\" is : %d (expected -1)\n", strcmp("Oui", "Ouioui"));
	printf("Strcmp of \"Ouioui\" and \"Ouioui\" is : %d (expected -0)\n", strcmp("Ouioui", "Ouioui"));
	printf("Strcmp of \"Oui\" and \"Ouioui\" is : %d (expected 1)\n", strcmp("Ouioui", "Oui"));
	printf("\n");
	// char *str = "testchan,cla";
	// char ch = ',';

	// char *a = "azerzartff";
	// char b = 'a';

	// char *c = "assouss";
	// char *d = "assous";

	// char *ret;
	// int stock;
	// char *stack;

	// char mem[50] = "issou la chancla";
	// char oui = 'p';
	// int seven = 7;

	// const char src[50] = "test";
	// char dest[50];

	// char haystack[20] = "TutorialsPoint";
	// char needle[10] = "to";
	// char *rets;

	// rets = strstr("TutorialsPoint", "issou");

	// printf("\n");

	// printf("Test strstr :\n");
	// printf("The substring is: %s\n", rets);
	
	// printf("\n");

	// printf("Test Strcpy :\n");
	// strcpy(dest,"Heloooo!!");
	// printf("Before memcpy dest = %s\n", dest);
	// printf("Test memcpy :\n");
	// memcpy(dest, src, strlen(src)+1);
	// printf("After memcpy dest = %s\n", dest);

	// printf("\n");

	// const char test2[50] = "tas";
	// char dests[50] = "Heloooo!!";

	// printf("Test memcpy 2 :\n");
	// printf("Before memcpy dest2 = %s\n", dests);
	// memcpy(dests, test2, 3);
	// printf("After memcpy dest2 = %s (expected |tasoooo!!|)\n", dests);

	// printf("\n");

	// printf("Test 2 strcpy\n");
	// strcpy(mem,"This is string.h library function");
	// puts(mem);
	// printf(" (expected |This is string.h library function|)\n");
	// printf("\n");

	// printf("test Memset :\n");
	// memset(mem,oui, 6);
	// puts(mem);
	// printf("expected |ppppppla chancla|\n");

	// printf("\n");

	// printf("test rindex\n");
	// stack = rindex(a, b);
	// printf("string : %s\n", a);
	// printf ("result rindex : %c - %s (expected |artff|)\n", b, stack);

	// printf("\n");

	// printf("test strcmp\n");
	// stock = strcmp("assou", "asauu");
	// printf("result strcmp is : %i (expected 1)\n", stock);
	// printf("result strcmp is : %d (expected -1)\n", strcmp("oui", "ouioui"));
	// printf("result strcmp is : %d (expected 0)\n", strcmp("oui", "oui"));
	// printf("result strcmp is : %d (expected 1)\n", strcmp("ouiouioui", "ouioui"));

	// printf("\n");

	// char *op = "chanclissou";
	// char *po = "chs";

	// printf("strncmp\n");
	// printf("result strncmp is : %i\n", strncmp(op, po, 3));

	// printf("\n");

	// char *ap = "ISSOU";
	// char *pa = "issou";

	// printf("strcasecmp\n");
	// printf("result strcasecmp is : %i\n", strcasecmp("ISSOU{", "iou}"));

	// printf("test strchr\n");
	// ret = strchr(str, ch);
	// printf("string base |%s|\n", str);
	// printf("string after |%c| is - |%s| (expected |,cla|)\n", ch, ret);

	// printf("\n");

	// printf("test strlen\n");
	// printf("return value of strlen is : %d (expected 23)\n", strlen("mregoeagotraajgpijajvre"));

	// printf("\n");

	// int len;
	// const char str1[] = "ABCDEF4960910";
	// const char str2[] = "F93D";

	// len = strcspn(str1, str2);

	// printf("test strcspn\n");
	// printf("First matched for strcspn character is at %d\n", len);

	// printf("\n");

	// const char *str3 = "abcde2fghi3jk4l";
	// const char *str4 = "34";
	// char *resulta;

	// printf("strpbrk\n");
	// resulta = strpbrk("abcde2fghi3jk4l", "34Efe");
	// if(resulta) {
	// 	printf("First matching character: %c\n", *resulta);
	// } else {
	// 	printf("Character not found");
	// }
}
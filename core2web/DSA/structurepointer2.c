#include<stdio.h>
#include<string.h>
	struct cricplayer{

		int jerseyno;
		char pName[20];
		float sal;

	}obj={18,"Virat",5.3};


	void main(){
		struct cricplayer obj2;
		obj2.jerseyno=45;
		strcpy (obj2.pName,"Rohit");
		obj2.sal=5.0;

		printf("%d\n",obj.jerseyno);
		printf("pName=%s\n",obj.pName);
		printf("sal=%f\n",obj->sal);

		printf("%d\n",obj2->jerseyno);
		printf("pName=%s\n",obj2.pName);
		printf("sal=%f\n",obj2.sal);

	}
	

#include<stdio.h>
	
	struct movie{
		char movie[20];
		int count;
		float rating;
	}obj1={"thumbbad",200,9.22};
		
	void main(){

		typedef struct movie mv;
		mv obj2={"Kanataara",10,9.5};

		struct movie *ptr1=&obj1;
		mv *ptr2=&obj2;

		//Access

		printf("%s\n",(*ptr1).movie);
		printf("%d\n",(*ptr1).count);
		printf("%f\n",(*ptr1).rating);

		printf("%s\n",ptr2->movie);
		printf("%d\n",ptr2->count);
		printf("%f\n",ptr2->rating);

	}



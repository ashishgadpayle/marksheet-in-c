#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input();
int calculations();
void show();
void m3();
void edc();
void emi();
void oopds();
void nas();
void result();
void remark();
int m,m1,n,n1,o,o1,p,p1,q1,q2,r,total,per,t1,t2,t3,t4,t5;
char b[20],ch[20],a[50],e[8],d[30],grade,res[5],rem[16],q,x,y,u,v;
char s[] = "pass";
char s1[] = "fail";
char s3[] = "Congratulations";
char s4[] = "     ";

int main(){
	input();
	calculations();
	m3();
	edc();
	emi();
	oopds();
	nas();
	result();
	remark();
	show();
	return 0;
	
}
void input(){
	printf("Enter your name : ");
	gets(ch);
	printf("Enter place : ");
	gets(b);
	printf("Enter clg name : ");
	gets(a);
	printf("Enter DATE (dd/mm/yyyy) : ");
	gets(d);
	printf("Enter Medium : ");
	gets(e);
	printf("Enter ROLL NO : ");
	scanf("%d",&r);
	ayu:
		printf("\nEnter APPLIED MATHEMATICS III ");
	    scanf("%d",&m);
	    if(m>=80){
		        printf("\nplz enter less than 80 ");
	            goto ayu;
		}
		ayus:
		printf("\nEnter APPLIED MATHEMATICS III Internals ");
	    scanf("%d",&m1);
	    if(m1>=20){
		        printf("\nplz enter less than 20 ");
	            goto ayus;
		}
	ayu1:
		printf("\nEnter Electronic Devices & Circuits ");
	    scanf("%d",&n);
	    if(n>=80){
		        printf("\nplz enter less than 80 ");
	            goto ayu1;
		}
		ayus1:
		printf("\nEnter Electronic Devices & Circuits (prac) ");
	    scanf("%d",&n1);
	    if(n1>=20){
		        printf("\nplz enter less than 20 ");
	            goto ayus1;
		}
	ayu2:
		printf("\nEnter Electronic Measurement Instrumentation ");
	    scanf("%d",&o);
	    if(o>=80){
		        printf("\nplz enter less than 80 ");
	            goto ayu2;
		}
	    ayus2:
		printf("\nEnter Electronic Measurement Instrumentation(prac) ");
	    scanf("%d",&o1);
	    if(o1>=20){
		        printf("\nplz enter less than 20 ");
	            goto ayus2;
		}
	ayu3:
		printf("\nEnter OOPS & Data Structure ");
	    scanf("%d",&p);
	    if(p>=80){
		        printf("\nplz enter less than 80 ");
	            goto ayu3;
		}
		ayus3:
		printf("\nEnter OOPS & Data Structure Practical ");
	    scanf("%d",&p1);
	    if(p1>=20){
		        printf("\nplz enter less than 20 ");
	            goto ayus3;
		}
	ayu4:
		printf("\nNetwork Analysis & Synthesis ");
	    scanf("%d",&q1);
	    if(q1>=80){
		        printf("\nplz enter less than 80 ");
	            goto ayu4;
		}
		ayus4:
		printf("\nNetwork Analysis & Synthesis ");
	    scanf("%d",&q2);
	    if(q2>=20){
		        printf("\nplz enter less than 20 ");
	            goto ayus4;
		}
}
void show(){
	int i=0,i1=0,j=0,j1=0,k=0,k1=0,l=0,l1=0;
	while(i1<113){
		printf("*");
		i1++;}
    printf("\n|");
	printf("\n| \t\t\t THIRD SEMESTER OF BACHELOR OF ENGINEERING  ,  WINTER 2019 ");
	printf("\n|\n");
	while(i<113){
		printf("-");
		i++;
	}
	printf("\n| NAME : %s \t \t",ch);
	printf("\n| DATE : %s  \t\t\t\t\t\t  PLACE : %s",d,b);
	printf("\n| CLG NAME : %s \t \t ",a);
	printf("\n| MEDIUM : %s \t \t \t \t \t\t  ROLL NO. : %d \n",e,r);
	while(j<113){
		printf("-");
		j++;
	}
	printf("\n|\t SUBJECTS     \t\t\t\t| marks\t\t| practical\t|\tTotal \t| Obtained\t|\n");
	while(k<113){
		printf("-");
		k++;
	}
	printf("\n| APPLIED MATHEMATICS III      \t\t\t| %d\t\t| %d\t\t|\t100 \t|\t%d %c\t|",m,m1,m+m1,q);
	printf("\n| Electronic Devices & Circuits\t\t\t| %d\t\t| --\t\t|\t80 \t|\t%d %c\t|",n,n,x);
	printf("\n| Electronic Devices & Circuits(prac)\t\t| --\t\t| %d\t\t|\t20 \t|\t%d \t|",n1,n1);
	printf("\n| Electronic Measurement Instrumentation \t| %d\t\t| --\t\t|\t80 \t|\t%d %c\t|",o,o,y);
	printf("\n| Electronic Measurement Instrumentation(prac)  | --\t\t| %d\t\t|\t20 \t|\t%d %c\t|",o1,o1);
	printf("\n| OOPS & Data Structure\t\t\t\t| %d\t\t| --\t\t|\t80 \t|\t%d %c\t|",p,p,u);
	printf("\n| OOPS & Data Structure (prac)\t\t\t| -- \t\t| %d\t\t|\t20 \t|\t%d \t|",p1,p1);
	printf("\n| Network Analysis & Synthesis \t\t\t| %d\t\t| %d\t\t|\t100 \t|\t%d %c\t|\n",q1,q2,q1+q2,v);
	while(l<113){
		printf("-");
		l++;
		}
	printf("\n|\tTotal marks obt\t\t| \t Out of Marks\t |     PERCENTAGE\t|  \t Result    |    GRADE   |\n");
	while(l1<113){
		printf("-");
		l1++;
		}
	printf("\n|\t\t%d\t\t|\t    500 \t|\t    %d  \t|   \t %s      |\t   %c    |\n",total,per,res,grade);
	while(k1<113){
		printf("*");
		k1++;}
	printf("\n|");
	printf("\n|\t\t\t\t%s  You are %sed !",rem,res);
	printf("\n| \n");
	while(j1<113){
		printf("*");
		j1++;}
	printf("\n\n\n");
	printf("\n\t\t\t\t\t\tMADE BY AYUSH :) \n");
	//printf("\n\n\n");
		/*while(z<113){
		printf("*");
		z++;}*/
}
int calculations(){
	
	char res[5];
	t1=m+m1;
	t2=n+n1;
	t3=o+o1;
	t4=p+p1;
	t5=q1+q2;
	total = t1+t2+t3+t4+t5;
	per = total/5;
	
	
	if(per>= 90)
	      grade = 'A';
    else if(per>= 80)
          grade = 'B';
    else if(per>= 70)
          grade = 'C';
	else if(per>= 60)
          grade = 'D';
	else if(per>= 40)
          grade = 'E';
	else 
          grade = 'F';
}
void m3(){
	if(t1<40){
		q ='#';

	}
	else
	    q = ' ';
	
}
void edc(){
	if(t2<40){
		x ='#';
		
	}
	else
	    x = ' ';
	fflush(stdin);
}
void emi(){
	if(t3<40){
		y ='#';
		fflush(stdin);
	}
	else
	    y = ' ';
	fflush(stdin);
}
void oopds(){
	if(t4<40){
		u ='#';
		fflush(stdin);
	}
	else
	    u = ' ';
	fflush(stdin);
}
void nas(){
	if(t5<40){
		v ='#';
		fflush(stdin);
	}
	else
	    v = ' ';
	fflush(stdin);
}
void result(){
	if(per>40){
		strcpy(res,s);
	}
	else
	    strcpy(res,s1);
}
void remark(){
	if(per>40){
		strcpy(rem,s3);
	}
	else
	    strcpy(rem,s4);
}

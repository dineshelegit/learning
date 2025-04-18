#include<stdio.h>
void global();
void typedef_fun();
struct glb
{
	int x,y;
	char *z;
};
struct 
{
	int ee;
	float gg;
}t,u;

int main()
{
	global();
	
	struct local
	{
		int di;
		float fi;
	}g,f;
	
	g.di=30;
	f.di=40;
	g.fi=0.4;
	printf("local %d %d %.2f\n",g.di,f.di,g.fi);
	
	typedef_fun();
	
}

void global()
{
	struct glb a,b;
	a.x=10;
	a.y=20;
	b.x=30;
	b.z="Dinesh";
	printf("global %d %d %d %s\n",a.x,a.y,b.x,b.z); 
	
	t.ee=100;
	u.gg=30;
	printf("no name %d %f \n",t.ee,u.gg); 
	
}

void typedef_fun()
{

	struct classes
	{
		int o,p;
		char *s;
	};
	typedef struct 
	{
		int tt;
		float yy;
	}classdata;
	struct classes l,r;
	l.o=10;
	l.p=20;
	r.o=30;
	l.s="Dinesh";
	printf("normal %d %d %d %s\n",l.o,l.p,r.o,l.s); 
	
	classdata e,g;
	e.tt=100;
	g.yy=30;
	printf("typedef %d %f \n",e.tt,g.yy); 
}

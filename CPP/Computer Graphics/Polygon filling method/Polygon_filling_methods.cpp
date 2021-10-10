/*
Author : shinchancode
Topic: Polygon filling methods
*/

/*Problem Statement :
Implement the following polygon filling methods : 
i) Flood fill / Seed fill 
ii) Boundary fill ; using
mouse click, keyboard interface and menu driven programming */

#include<gl/glut.h>
#include<iostream>
#include<math.h>

using namespace std;
void myInit(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(1.0);
	glLineWidth(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,500,0,500);
}
void display(void)
{
}
struct COLOR
{
	float r;
	float b;
	float g;
};
class polygon_fill
{
	int compare_color(COLOR a,COLOR b)
	{
		if(a.r==b.r&&a.b==b.b&&a.g==b.g)
			return 1;
		else
			return 0;
	}
	void draw(int x,int y,COLOR c)
	{
		glColor3f(c.r,c.b,c.g);
		glBegin(GL_POINTS);
			glVertex2f(x,y);
		glEnd();
		glFlush();
	}

	COLOR getpixelcolor(int x,int y)
	{
		COLOR c;
		glReadPixels(x,y,1,1,GL_RGB,GL_FLOAT,&c);
		return c;
	}

	public:
	void bound_fill(int x,int y,COLOR fill,COLOR border_col)
	{
		COLOR color;
		color=getpixelcolor(x,y);
		if(compare_color(color,border_col)==0&&compare_color(color,fill)==0)
		{
			draw(x,y,fill);
			bound_fill(x+1,y,fill,border_col);
			bound_fill(x,y+1,fill,border_col);
			bound_fill(x-1,y,fill,border_col);
			bound_fill(x,y-1,fill,border_col);
			bound_fill(x-1,y-1,fill,border_col);
			bound_fill(x-1,y+1,fill,border_col);
			bound_fill(x+1,y-1,fill,border_col);
			bound_fill(x+1,y+1,fill,border_col);
		}
	}

	void flood_fill(int x,int y,COLOR fill,COLOR bg_color)
	{
		COLOR color;
		color=getpixelcolor(x,y);
		if(compare_color(color,bg_color)==1)
		{
			draw(x,y,fill);
			flood_fill(x+1,y,fill,bg_color);
			flood_fill(x,y+1,fill,bg_color);
			flood_fill(x-1,y,fill,bg_color);
			flood_fill(x,y-1,fill,bg_color);
		}
	}
};
int xc,yc,i=0;
int xarr[100];
int yarr[100];
void menu(int value)
{
	polygon_fill p;
	COLOR fill,bcol,back_col,c;
	fill.r=0.0;
	fill.b=0.0;
	fill.g=1.0;
	bcol.r=1.0;
	bcol.b=0.0;
	bcol.g=0.0;
	back_col.r=0.0;
	back_col.b=0.0;
	back_col.g=0.0;
	switch(value)
	{
		case 1:
			p.flood_fill(xc,500-yc,fill,back_col);
			cout<<"COMPLETED FLOOD FILL"<<"\n";
			break;
		case 2:
			p.bound_fill(xc,500-yc,fill,bcol);
			cout<<"COMPLETED BOUNDARY FILL"<<"\n";
			break;
		case 3:
			glClear(GL_COLOR_BUFFER_BIT);
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_POINTS);
				glVertex2i(0,0);
			glEnd();
			glFlush();
			i=0;
			cout<<"SCREEN CLEARED"<<"\n";
			break;
	}

}

void keyboard(unsigned char key,int x,int y)
{
	if(key==27)
		exit(0);

	else
		cout<<"you pressed "<<"\n";
}

void mouse(int button,int state,int x,int y)
{
	if(state==GLUT_DOWN)
	{
		if(button==GLUT_LEFT_BUTTON)
		{
			xarr[i]=x;
			yarr[i]=y;
			i++;
			if(i>1)
			{
				glColor3f(1.0,0.0,0.0);
				glBegin(GL_LINE_STRIP);
					glVertex2i(xarr[i-2],500-yarr[i-2]);
					glVertex2i(xarr[i-1],500-yarr[i-1]);
				glEnd();
				glFlush();
			}
		}
		if(button==GLUT_RIGHT_BUTTON)
		{
			xc=x;
			yc=y;
		}
	}
	return;
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(200,100);
	glutCreateWindow("POLYGON FILL");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keyboard);
	glutCreateMenu(menu);
	glutAddMenuEntry("FLOOD FILL",1);
	glutAddMenuEntry("BOUNDARY FILL",2);
	glutAddMenuEntry("CLEAR SCREEN",3);
	glutAttachMenu(GLUT_MIDDLE_BUTTON);

	cout<<"PLEASE FOLLOW THESE STEPS:"<<endl;
	cout<<"1. MAKE PLOYGON by USING LEFT CLICK"<<endl;
	cout<<"2. SELECT SEED PIXEL BY RIGHT CLICK"<<endl;
	cout<<"FOR MENU, use the middle button of the mouse"<<endl;

	myInit();
	glutMainLoop();
	return  0;
}

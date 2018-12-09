#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
void North(int i,int j)
{
 setcolor(CYAN);
circle(270,i,16);
setfillstyle(SOLID_FILL,j);
pieslice(270,i,0,360,15);
setcolor(j);
line(270,i,285,i);
}
void West(int i,int j)
{
setcolor(CYAN);
circle(i,190,16);
setfillstyle(SOLID_FILL,j);
pieslice(i,190,0,360,15);
setcolor(j);
line(i,190,i+15,190);

}
void East(int i,int j)
{
 setcolor(CYAN);
circle(370,i,16);
setfillstyle(SOLID_FILL,j) ;
pieslice(370,i,0,360,15);
setcolor(j);
line(370,i,385,i);

}
void South(int i,int j)
{
//j for color
// i for position
 setcolor(CYAN);
circle(i,290,16);
setfillstyle(SOLID_FILL,j)  ;
pieslice(i,290,0,360,15);
setcolor(j);
line(i,290,i+15,290);

}
void traffic()
{
//whole UI
settextstyle(3,0,1);

outtextxy(360,5,"Press any key to change timings");
line(0,220,300,220);
line(0,260,300,260);
line(300,0,300,220);
line(340,0,340,220);
line(300,260,300,480);
line(340,260,340,480);
line(340,220,640,220);
line(340,260,640,260);
setcolor(CYAN);
rectangle(250,80,290,210);
rectangle(170,80,240,120);
North(100,2);
North(140,0);
North(180,0);
setcolor(CYAN);
rectangle(350,170,480,210);
rectangle(440,90,480,160);
West(450,0);
West(410,0);
West(370,4);
setcolor(CYAN);
rectangle(350,270,390,400);
rectangle(400,360,480,400);
East(290,4);
East(330,0);
East(370,0);
setcolor(CYAN);
rectangle(170,270,290,310);
rectangle(170,320,210,390);
South(190,0);
South(230,0);
South(270,4);
setcolor(MAGENTA);
circle(320,240,15);
setlinestyle(3,WHITE,1);
setcolor(WHITE);
line(0,240,290,240);
line(350,240,640,240);
line(320,0,320,210);
line(320,270,320,480);

}
int main()
{
int gd=DETECT,gm;
char str[100];
int r1=30,r2=30,r3=30,r4=30,g1=10,g2=10,g3=10,g4=10;
initgraph(&gd,&gm,"C://Turboc3//BGI");
traffic();
setlinestyle(0,CYAN,1);
setcolor(CYAN);
int i,n=10,w=10,e=20,s=30;
//infinite loop
for(i=1;i<=i;n--,w--,e--,s--)
{
setcolor(CYAN);
settextstyle(1,0,2);
	sprintf(str,"%d",n);
  outtextxy(200,90,str);
	sprintf(str,"%d",s);
  outtextxy(180,335,str);
	sprintf(str,"%d",e);
  outtextxy(430,370,str);
	sprintf(str,"%d",w);
outtextxy(450,120,str);
  delay(1000);
  setcolor(BLACK);
  sprintf(str,"%d",n);
  outtextxy(200,90,str);
	sprintf(str,"%d",s);
  outtextxy(180,335,str);
	sprintf(str,"%d",e);
  outtextxy(430,370,str);
	sprintf(str,"%d",w);
  outtextxy(450,120,str);
  if(n==5&&w!=5)
  {
  South(230,14);
  North(140,14);
  }
  if(w==5&&e!=5)
  {
  North(140,14);
  West(410,14);
  }
  if(e==5&&s!=5)
  {
  West(410,14);
  East(330,14);
  }
  if(s==5&&n!=5)
  {
  South(230,14);
  East(330,14);
  }
  if(n<=0&&w<=0)
  {
    n=r1;
    w=g2;
  South(230,0);
  North(180,4);
     North(100,0);
     North(140,0);
     West(410,0);
     West(450,2);
     West(370,0);
  }
  if(w<=0&&e<=0)
  {
  w=r4;
  North(140,0);
  e=g3;
      West(450,0);
   West(370,4);
   West(410,0);
	East(330,0);
   East(290,0);
   East(370,2);
  }
  if(e<=0&&s<=0)
  { e=r4;
  s=g4;
  East(370,0);
  East(290,4);
  East(330,0);
  South(230,0);
  South(270,0);
  South(190,2);
  West(410,0);
  }
  if(s<=0&&n<=0)
  {
   n=g1;
   s=r4;
   South(190,0);
   South(270,4);
   South(230,0);
   North(180,0);
   North(100,2);
   North(140,0);
   East(330,0);
  }
  if(kbhit())
  {
	if(getch()==27)
	{
	cleardevice();
	closegraph();
	exit(0);
	}
	else
	{
	cleardevice();
	closegraph();
	while(1)
	{
	 cout<<"enter red and green for first traffic signal";
	 cin>>r1>>g1;
	 cout<<"enter red and green for second traffic signal";
	 cin>>r2>>g2;
	 cout<<"enter red and green for second traffic signal";
	 cin>>r3>>g3;
	 cout<<"enter red and green for second traffic signal";
	 cin>>r4>>g4;
	 //condition for checking the traffic lights
	 if((r1+g1==r2)&&(r2+g2==r3)&&(r3+g3==r4))
	 {
	 n=g1;
	 w=r2-r1;
	 e=r3-r1;
	 s=r4-r1;
	 clrscr();
	 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
		traffic();
		break;
	 }
	 else
		 cleardevice();
	 setcolor(CYAN);
	}//while end loop
	}//else close
	}//kbhit() close
}
return 0;
}
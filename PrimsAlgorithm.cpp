//Prims Algorithm
#define max 5
#define infinity 5000
#include<conio.h>
#include<stdio.h>
typedef struct
{
int from,to,distance;
}Edge;
int vertices[max];
int distances[max][max],qCount,treeCount,vCount;
Edge Edges[max*max];
int inTree(Edge Edges[max*max],int value);
void writeEdges(Edge Edges[max*max],int l);
void writeMatrix(int distances[max][max]);
void readMatrix(int distances[max][max]);
void prims();
void main()
{
int i;
clrscr();
treeCount=0;
readMatrix(distances);
writeMatrix(distances);
prims();
writeEdges(Edges,treeCount);
getch();
}
void prims()
{
int i,j,currentvertex,distance,mindistance,vertextoadd,vertexfrom;
vCount=1;
vertices[0]=0;
while(vCount<max)
{
mindistance=infinity;
vertextoadd=-1;
for(i=0;i<=vCount-1;i++)
{
currentvertex=vertices[i];
for(j=0;j<=max-1;j++)
{
if(inTree(Edges,j))
continue;
distance=distances[currentvertex][j];
if(distance==0)
continue;
if(distance>=infinity)
continue;
if(distance<mindistance)
{
vertexfrom=currentvertex;
mindistance=distance;
vertextoadd=j;
}
}
}
if(mindistance>=infinity)
{
printf("Cannot complete the tree");
return;
}
vertices[vCount]=vertextoadd;
Edges[treeCount].from=vertexfrom;
Edges[treeCount].to=vertextoadd;
Edges[treeCount].distance=mindistance;
treeCount+=1;
vCount+=1;
}
}
int inTree(Edge Edges[max*max],int value)
{
int i;
for(i=0;i<=treeCount-1;i++)
{
if(Edges[i].from==value)
return(1);
if(Edges[i].to==value)
return(1);
}
return(0);
}
void writeEdges(Edge Edges[max*max],intl)
{
int row;
printf("\n\nPrinting Edges");
for(row=0;row<=l-1;row++)
printf("\n%c to %c distance = %d",`A` + Edges[row].from,`A` + Edges[row].to,Edges[row].distance);
}
void writeMatrix(int distances[max][max])
{
int row,col;
printf("\n\nDistance matrix =\n");
for(row=0;row<=max-1;row++)
{
for(col=0;col<=max-1;col++)
printf("%6d",distances[row][col]);
printf("\n");
}
}
void readMatrix(int distances[max][max])
{
int row,col;
for(row=0;row<=max-1;row++)
{
for(col=0;col<=max-1;col++)
{
if(row==col)
{
distances[row][col]=0;
continue;
}
if(col>row)
{
printf("Enter negative number for infinity,Distance from %c to %c = ",`A` + row,`A` + col);
scanf("%d",&distances[row][col]);
if(distances[row][col]<0)
distances[row][col]=infinity;
}
else
{
distances[row][col]=distances[col][row];
}
}
}
}
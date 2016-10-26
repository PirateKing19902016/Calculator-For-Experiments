# include<fstream.h>

# define con 30
void main()
{
int i;
float a[con];
fstream f,f1;
f.open("a.txt",ios::in);
f1.open("e.txt",ios::out);

for (i = 0; i< con; i++)
{
	f>>a[i];

}


for (i = 0; i< con; i++)
{

	f1<<(a[i]*200*9.81)<<"\n";

}     

}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector < vector<float> > grid (4,vector<float>(4));

//grid[1].push_back(10.5);
//Input section

cout<<"\nPlease enter all the elements in the 2d vecotr : \n";
for(int row=0;row<grid.size();++row)
{
	for(int col=0;col<grid[row].size();++col)
	{

		cin>>grid[row][col];
	}

}


//OutPut Section]


cout<<"Output of the matrix is  : \n";
for(int row=0;row<grid.size();++row)
{

	for(int col=0;col<grid[row].size();++col)
	{

cout<<grid[row][col]<<" "<<flush;

	}

	cout<<endl;
}





return 0;
}
#include<iostream>
#include<vector>

using namespace std;

int main()
{
  int row;
  int col;
  int star = '*';
  cout << "Enter rows and columns of stars: " << endl;
  cin >> row;
  cin >> col;
 
  if( row <= 0 || col <= 0)
  {
    return 0;
  }
  //creates the matrix;
  
  vector < vector <char> > matrix;
  matrix.resize(row);

  for(int i=0; i < row ; i++)
  {
    for(int j=0 ; j < col ; j++)
    {
      matrix[i].push_back(star);
    }
  }

  //cout the matrix
  for(int i=0; i < row ; i++)
  {
    for(int j=0; j < col ; j++)
    {
      cout << matrix[i][j];
    }
    cout << endl;
  }
}

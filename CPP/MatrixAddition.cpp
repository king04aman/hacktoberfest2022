#include <iostream>
using namespace std;
class Matrix
{
private:
    int a1[10][10], a2[10][10], r, c;

public:
    // constructor
    Matrix(int r, int c)
    {
        this->r = r;
        this->c = c;
    }
    void getMatrix(int n)
    {

        if (n == 1)
        {
            for (int i = 0; i < r; i++)
            {

                for (int j = 0; j < c; j++)
                {
                    cout << "1ND->ENTER ELEMENT AT"
                         << "[" << i << "]"
                         << "[" << j << "]" << endl;
                    cin >> a1[i][j];
                }
            }
        }
        else
        {
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    cout << "2ND->ENTER ELEMENT AT"
                         << "[" << i << "]"
                         << "[" << j << "]" << endl;
                    cin >> a2[i][j];
                }
            }
        }
    }
    // addition method
    void MatrixAddition()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                a1[i][j] += a2[i][j];
            }
        }
    }
    void DisplayMatrix()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << a1[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int rows, columns;
    cout << "Enter numbers of rows and columns" << endl;
    cin >> rows >> columns;
    Matrix m(rows, columns);
    int n = 1;
    m.getMatrix(n);
    n++;
    m.getMatrix(n);
    m.DisplayMatrix();
    m.MatrixAddition();
    m.DisplayMatrix();
    return 0;
}
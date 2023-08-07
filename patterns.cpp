#include <bits/stdc++.h>
using namespace std;

void printSquare(int n)
{
    cout << "Square Pattern" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void printRightTriangle(int n)
{
    cout << "Right Traingle" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void printRightTriangleOfNums(int n)
{
    cout << "Right Triangle of Numbers" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void printTriangleofSimilarNums(int n)
{
    cout << "Right Triangle of Same Numbers" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void invertedRightTriangle(int n)
{
    cout << "Inverted Right Triangle" << endl;
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void invertedRightNumberedTriangle(int n)
{
    cout << "Inverted Right Triangle of Numbers" << endl;
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void starTriangle(int n)
{
    cout << "Triangle of Stars" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= ((2 * i) - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void invertedStaTriangle(int n)
{
    cout << "Inverted Triangle of Stars" << endl;
    for (int i = n; i >= 1; i--)
    {
        for (int k = 0; k < n - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= ((i * 2) - 1); j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    cout << endl;
}

void printDiamond(int n)
{
    cout << "Diamond Shape" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int k = 0; k < n - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    cout << endl;
}

void starArrow(int n)
{
    cout << "Star Arrow" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void binaryNumberTriangle(int n)
{
    cout << "Binary Number Triangle" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    cout << endl;
}

void numberCrown(int n)
{
    cout << "Number Crown" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int k = 1; k <= ((n * 4) - 4 * i); k++)
        {
            cout << " ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void increasingNumberTriangle(int n)
{
    cout << "Increasing Number Triangle" << endl;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    cout << endl;
}

void increasingLetterTriangle(int n)
{
    cout << "Increasing Letter Triangle" << endl;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    cout << endl;
}

void reverseLetterTriangle(int n)
{
    cout << "Reverse Letter Triangle" << endl;
    for (int i = n; i >= 1; i--)
    {
        char ch = 'A';

        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    cout << endl;
}

void alphaRampPattern(int n)
{
    cout << "Alpha Ramp Pattern" << endl;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch++;
    }
    cout << endl;
}

void alphaHillPattern(int n)
{
    cout << "Alpha Hill Pattern" << endl;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';

        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << ch;
            ch++;
        }

        ch = ch - 2;

        if (i > 1)
        {
            for (int l = 1; l < i; l++)
            {
                cout << ch;
                ch--;
            }
        }

        cout << endl;
    }
    cout << endl;
}

void alphaTrianglePattern(int n)
{
    cout << "Alpha Triangle Pattern" << endl;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        ch = ch + n - 1;

        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
    cout << endl;
}

void symmetricVoidPattern(int n)
{
    cout << "Symmetric Void Pattern" << endl;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = (2 * (n - i)); j > 0; j--)
        {
            cout << " ";
        }

        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = (2 * (n - i)); j > 0; j--)
        {
            cout << " ";
        }

        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
    cout << endl;
}

void symmetricButterflyPattern(int n)
{
    cout << "Symmetric Butterfly Pattern" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 2 * (n - i); j > 0; j--)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }

        for (int j = 2 * (n - i); j > 0; j--)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void hollowRectangle(int n)
{
    cout << "Hollow Rectangle" << endl;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0 || j == n - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    cout << endl;
}

void numberPattern(int n)
{
    cout << "Number Pattern" << endl;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i, left = j, bottom = ((2 * n - 2) - i), right = ((2 * n - 2) - j);
            cout << (n - min(min(top, left), min(bottom, right))) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int num = 5;

    printSquare(num);
    printRightTriangle(num);
    printRightTriangleOfNums(num);
    printTriangleofSimilarNums(num);
    invertedRightTriangle(num);
    invertedRightNumberedTriangle(num);
    starTriangle(num);
    invertedStaTriangle(num);
    printDiamond(num);
    starArrow(num);
    binaryNumberTriangle(num);
    numberCrown(num);
    increasingNumberTriangle(num);
    increasingLetterTriangle(num);
    reverseLetterTriangle(num);
    alphaRampPattern(num);
    alphaHillPattern(num);
    alphaTrianglePattern(num);
    symmetricVoidPattern(num);
    symmetricButterflyPattern(num);
    hollowRectangle(6); // Takes only positive integer value
    numberPattern(num);

    return 0;
}

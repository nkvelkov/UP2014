#include <iostream>

using namespace std;

enum sign{ADD, SUB, MUL, DIV};

int mainf()
{
    int n, m, p, q;
    double a;

    cin >> m >> n >> p >> q >> a;

    for(sign op1 = ADD; op1 <= DIV; op1 = (sign)(op1 + 1)) // opi = (sign)(opi + 1);
    {
        for(sign op2 = ADD; op2 <= DIV; op2 = (sign)(op2 + 1))
        {
            for(sign op3 = ADD; op3 <= DIV; op3 = (sign)(op3 + 1))
            {
                double s;

                switch(op1)
                {
                    case ADD: s = m + n; break;
                    case SUB: s = m - n; break;
                    case MUL: s = m * n; break;
                    case DIV: s = m / n; break;
                }

                switch(op2)
                {
                    case ADD: s += p; break;
                    case SUB: s -= p; break;
                    case MUL: s *= p; break;
                    case DIV: s /= p; break;
                }

                switch(op3)
                {
                    case ADD: s += q; break;
                    case SUB: s -= q; break;
                    case MUL: s *= q; break;
                    case DIV: s /= q; break;
                }

                if(s == a)
                {
                    switch(op1)
                    {
                        case ADD: cout << "(+, "; break;
                        case SUB: cout << "(-, "; break;
                        case MUL: cout << "(*, "; break;
                        case DIV: cout << "(/, "; break;
                    }

                    switch(op2)
                    {
                        case ADD: cout << " +, "; break;
                        case SUB: cout << " -, "; break;
                        case MUL: cout << " *, "; break;
                        case DIV: cout << " /, "; break;
                    }

                    switch(op3)
                    {
                        case ADD: cout << " +)"; break;
                        case SUB: cout << " -)"; break;
                        case MUL: cout << " *)"; break;
                        case DIV: cout << " /)"; break;
                    }
                    cout << endl;
                }
            }
        }
    }

    return 0;
}

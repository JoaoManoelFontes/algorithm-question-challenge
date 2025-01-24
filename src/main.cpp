#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int get_m_number(int n)
{
    int m = 1;
    while (true)
    {
        int current = 1;
        int regioes_desligadas[n];
        regioes_desligadas[0] = 1;
        int regioes_count = 1;

        while (regioes_count < n)
        {
            current += 1;
            if (current > n)
            {
                current = 1;
            }

            int aux = m;
            while (aux > 0)
            {
                bool turned_off = false;
                for (int i = 0; i < regioes_count; i++)
                {
                    if (regioes_desligadas[i] == current)
                    {
                        turned_off = true;
                        break;
                    }
                }

                if (!turned_off)
                {
                    aux -= 1;
                    if (aux == 0)
                    {
                        break;
                    }
                }

                current += 1;
                if (current > n)
                {
                    current = 1;
                }
            }

            regioes_desligadas[regioes_count] = current;
            regioes_count++;
        }

        if (regioes_desligadas[n - 1] == 13)
        {
            cout << "Regiões desligadas: ";
            for (int i = 0; i < regioes_count; i++)
            {
                cout << regioes_desligadas[i] << " ";
            }
            cout << endl;
            return m;
        }

        m += 1;
    }

    return -1;
}

int main()
{
    int n;
    while (true)
    {
        cout << "Digite o número de regiões (0 para sair): ";
        cin >> n;

        if (n == 0)
            break;
        if (n < 13 || n > 100)
        {
            cout << "Número de regiões inválido." << endl;
            continue;
        }

        int m = get_m_number(n);
        cout << "O menor valor de m é: " << m << endl;
    }

    return 0;
}

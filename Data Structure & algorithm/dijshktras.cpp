#include <iostream>
using namespace std;

void add_edge(int graph[10][10], int i, int x, int length)
{

    graph[i][x] = length;
    graph[x][i] = length;
    return;
}

int main()
{
    int graph[10][10];
    int n, i, y, k;

    cout << "\nEnter total node in graph ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            graph[i][j] = 999;
        }
    }

    for (i = 1; i <= n; i++)
    {
        cout << "\nEnter the edge of " << i << "  ";
        cin >> k;
        for (int j = 1; j <= k; j++)
        {
            cout << "\nEnter " << j << " adjacent\n";
            cin >> y;

            int length;
            cout << "\nEnter the length of path\n";
            cin >> length;

            add_edge(graph, i, y, length);
        }
    }
    cout << "  ";
    for (i = 1; i <= n; i++)
    {
        cout << i << "   ";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        cout << i << " ";
        for (int j = 1; j <= n; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
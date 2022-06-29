#include <iostream>
#include <fstream>
#include "vector/vector.h"
#include "list/list.h"

int main() {
    std::ifstream fin("C:\\list\\input.txt");

    if (!fin) {
        std::cout << "Failed!\n";
    } else {
        int n;
        fin >> n;
        vector graphList;

        int** graph = new int*[n];

        for (int i = 0; i < n; i++) {
            graph[i] = new int[n];

            for (int j = 0; j < n; j++)
                fin >> graph[i][j];
        }

        for (int i = 0; i < n; i++) {
            list top;

            for (int j = 0; j < n; j++)
                if (graph[i][j] == 1)
                    top.push(j + 1);

            graphList.push(top);
        }

        for (int i = 0; i < n; i++) {
            std::cout << i + 1 << ": ";
            graphList[i].print();
        }
    }

    return 0;
}

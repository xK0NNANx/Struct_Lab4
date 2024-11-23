#include "CombSort.cpp"
#include "PyramidSort.cpp" 
#include "mergeSort.cpp"
#include "counting_sort.cpp"
#include "Graph.cpp"
#include <iostream>
#include "heapify.cpp"

int main()
{
    int array[6] = { 6,5,4,3,2,1};
    heapSort(array, 6);
    for (int i = 0; i < 6; i++) {
        std::cout << array[i];
    }

   /* graph gr(5);

    gr.AddEdge(0, 3);
    gr.AddEdge(0, 1);
    gr.AddEdge(0, 2);
    gr.AddEdge(1, 2);
    gr.AddEdge(2, 4);
    gr.DFS(0);*/
}

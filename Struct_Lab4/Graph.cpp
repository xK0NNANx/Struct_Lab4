#include <iostream>
#include <set>
#include <list>
#include <map>

using namespace std;

class graph {
	int Vertices;
	set<int>* lists;
	int* visited;
	bool* DFSVisible;
public:
	graph(int newEl) {
		Vertices = newEl;
		lists = new set<int>[Vertices];
		DFSVisible = new bool[Vertices];
		for (int i = 0; i < Vertices; i++) {
			DFSVisible[i] = 0;
		}
	}

	void AddEdge(int begin, int end) {
		lists[begin].insert(end);
		lists[end].insert(begin);
	}

	int BFS(int start, int end) {
		list<int> queue;
		map<int, int> distance;
		
		visited = new int[Vertices];
		for (int i = 0; i < Vertices; i++) {
			visited[i] = 0;
		}

		visited[start] = 2;
		distance[start] = 0;
		if (start == end) return 0;
		for (int i : lists[start]) {
			queue.push_back(i);
			distance[i] = 1;
			visited[i] = 1;
			if (i == end) return 1;
		}
		while (!queue.empty()) {
			int Vert = queue.front();
			queue.pop_front();
			visited[Vert] = 2;
			for (int i : lists[Vert]) {
				if (visited[i] == 0) {
					distance[i] = distance[Vert] + 1;
					if (i == end) return distance[i];
					queue.push_back(i);
					visited[i] = 1;
				}
			}
		}
	
	}

	void DFS(int start) {
		DFSVisible[start] = 1;

		for (int i : lists[start]) {
			if (!visited[i]) {
				cout << i;
				DFS(i);
			}
		}
	}
};


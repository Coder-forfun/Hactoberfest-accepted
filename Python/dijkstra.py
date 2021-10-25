import networkx as nx
import matplotlib.pyplot as plt
from collections import defaultdict, deque


class Graph(object):
    def __init__(self):
        self.nodes = set()
        self.edges = defaultdict(list)
        self.distances = {}

    def add_node(self, value):
        self.nodes.add(value)

    def add_edge(self, from_node, to_node, distance):
        self.edges[from_node].append(to_node)
        self.edges[to_node].append(from_node)
        self.distances[(from_node, to_node)] = distance


def dijkstra(graph, initial):
    visited = {initial: 0}
    path = {}

    nodes = set(graph.nodes)

    while nodes:
        min_node = None
        for node in nodes:
            if node in visited:
                if min_node is None:
                    min_node = node
                elif visited[node] < visited[min_node]:
                    min_node = node
        if min_node is None:
            break

        nodes.remove(min_node)
        current_weight = visited[min_node]

        for edge in graph.edges[min_node]:
            try:
                weight = current_weight + graph.distances[(min_node, edge)]
            except:
                continue
            if edge not in visited or weight < visited[edge]:
                visited[edge] = weight
                path[edge] = min_node

    return visited, path


def shortest_path(graph, origin, destination):
    visited, paths = dijkstra(graph, origin)
    full_path = deque()
    _destination = paths[destination]

    while _destination != origin:
        full_path.appendleft(_destination)
        _destination = paths[_destination]

    full_path.appendleft(origin)
    full_path.append(destination)

    return visited[destination], list(full_path)

if __name__ == '__main__':

    graph = Graph()

    for node in ['a', 'b', 'c', 'd', 'e', 'f', 'g','h','i']:
        graph.add_node(node)

    graph.add_edge('a', 'b', 4)
    graph.add_edge('c', 'b', 8)
    graph.add_edge('c', 'd', 7)
    graph.add_edge('d', 'e', 6)
    graph.add_edge('e', 'f', 10)
    graph.add_edge('g', 'f', 2)
    graph.add_edge('h', 'g', 1)
    graph.add_edge('a', 'h', 8)
    graph.add_edge('b', 'h', 11)
    graph.add_edge('c', 'i', 2)
    graph.add_edge('i', 'h',7)
    graph.add_edge('i', 'g', 6)
    graph.add_edge('c', 'f', 4)
    graph.add_edge('d', 'f', 14)

    print("Shortest path:", shortest_path(graph, 'a', 'f'))
# For visualisation

    G=nx.Graph()

    G.add_edge('a', 'b', weight=4)
    G.add_edge('c', 'b', weight=8)
    G.add_edge('c', 'd', weight=7)
    G.add_edge('d', 'e', weight=6)
    G.add_edge('e', 'f', weight=10)
    G.add_edge('g', 'f', weight=2)
    G.add_edge('h', 'g', weight=1)
    G.add_edge('a', 'h', weight=8)
    G.add_edge('b', 'h', weight=11)
    G.add_edge('c', 'i', weight=2)
    G.add_edge('i', 'h', weight=7)
    G.add_edge('i', 'g', weight=6)
    G.add_edge('c', 'f', weight=4)
    G.add_edge('d', 'f', weight=14)


pos = nx.spring_layout(G)
nx.draw_networkx(G, with_labels=True, pos=pos, node_size=700, node_color="c")
nx.draw_networkx_edge_labels(G, pos=pos, edge_labels=nx.get_edge_attributes(G, 'weight'))
plt.axis("off")
plt.show()

# this is a graph class
class adjnode:
    def __init__(self, data):
        self.vertex = data
        self.next = None

class Graph:
    def __init__(self, vertices):
        self.V = vertices
        self.graph = [None] * self.V

    def add_Edge(self, src, dest):
        node = adjnode(dest)
        node.next = self.graph[src]
        self.graph[src] = node

        node = adjnode(src)
        node.next = self.graph[dest]
        self.graph[dest] = node
    
    def print_graph (self):
        for i in range (self.V):
            print ("Adjacency list of vertex  {} \n head".format(i), end="")
            temp = self.graph[i]
            while temp: 
                print("->{} ". format(temp.vertex), end="")
                temp = temp.next
            print(" \n")

# graph program to the above graph class

if __name__== "__main__":
    V = 5
    graph = Graph(V)
    graph.add_Edge(0, 1)
    graph.add_Edge(0, 4)
    graph.add_Edge(1, 2)
    graph.add_Edge(1 ,3)
    graph.add_Edge(1, 4)
    graph.add_Edge(2, 3)
    graph.add_Edge(3, 4)

    graph.print_graph()


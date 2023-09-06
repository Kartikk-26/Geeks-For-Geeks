class Solution:
    def dfs(self, v, adj, vis):
        vis[v] = True
        for j in adj[v]:
            if not vis[j]:
                self.dfs(j, adj, vis)

    def findMotherVertex(self, V, adj):
        vis = [False] * V  # Use a list of booleans to track visited vertices
        last_vertex = 0  # Initialize a variable to keep track of the last visited vertex

        # Perform DFS on each unvisited vertex
        for i in range(V):
            if not vis[i]:
                self.dfs(i, adj, vis)
                last_vertex = i  # Update the last visited vertex

        # Check if the last visited vertex is a potential mother vertex
        vis = [False] * V  # Reset the visited list
        self.dfs(last_vertex, adj, vis)  # Perform DFS from the last visited vertex

        # If all vertices are visited in the second DFS, the last_vertex is a mother vertex
        if all(vis):
            return last_vertex
        else:
            return -1

# Trip Router - STEP 1

In this first step we deal with an almost raw TSP problem. The unique differences are: 

1. The graph is not complete
2. The graph is directed and assymetric
3. To some pair of nodes only edge connecting them.

To solve the problem in this step we use two different constructive algorithms (insertion and closest neighborhood) and simple 2-opt and 3-opt moves as the local search.

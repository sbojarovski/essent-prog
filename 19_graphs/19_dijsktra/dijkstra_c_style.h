//
// Created by stefan on 11/7/18.
//

#ifndef INC_19_DIJSKTRA_DIJKSTRA_C_STYLE_H
#define INC_19_DIJSKTRA_DIJKSTRA_C_STYLE_H

void dijkstra(){
    const int MAXINT = 1000;
    const int nV = 7;
    int start = 0;
    int graph[nV][nV];
    int from_where[nV];
    int distance[nV];
    bool visited[nV];

    for (int i=0; i < nV; i++){
        for (int j=0; j < nV; j++){
            graph[i][j] = MAXINT;
        }
        from_where[i] = -1;
        visited[i] = false;
        distance[i] = MAXINT;
    }
    graph[0][1] = 2;
    graph[1][2] = 2;
    graph[1][3] = 1;
    graph[2][3] = 1;
    graph[1][4] = 4;
    graph[4][3] = 1;
    graph[3][6] = 2;
    graph[4][5] = 1;
    graph[5][6] = 1;
    graph[1][0] = 2;
    graph[2][1] = 2;
    graph[3][1] = 1;
    graph[3][2] = 1;
    graph[4][1] = 4;
    graph[3][4] = 1;
    graph[6][3] = 2;
    graph[5][4] = 1;
    graph[6][5] = 1;

    int current = start;
    visited[current] = true;
    distance[current] = 0;
    for(;;){
        int local_min = -1;
        bool repeat = false;
        for (int i = 0; i < nV; i++){
            if (!visited[i] && (graph[i][current] < MAXINT)){
                // if i is not visited and there is an edge from start to i
                if (distance[i] > distance[current] + graph[i][current]){
                    distance[i] = distance[current] + graph[i][current];
                    from_where[i] = current;
                }
            }
            if (!visited[i]){
                // select current from unvisited with minimal distance to start
                if (local_min == -1)
                    local_min = i;
                else if (distance[local_min] > distance[i]){
                    local_min = i;
                }
                repeat = true;
            }
        }
        if (repeat){
            visited[local_min] = true;
            current = local_min;
        }
        else
            break;
    }
    return;
}

#endif //INC_19_DIJSKTRA_DIJKSTRA_C_STYLE_H

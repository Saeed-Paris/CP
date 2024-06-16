let v = 5
let r = 2

let cost = [2, 5, 3, 4, 8]
let rs = [[1, 4], [4, 5]]
let visited = []
let adjList = []
for (let i = 0; i < rs.length; i++) {
    let f = rs[i][0]
    let s = rs[i][1]
    s--; f--;
    adjList[f] = []
    adjList[s] = []

}

for (let i = 0; i < rs.length; i++) {
    let f = rs[i][0]
    let s = rs[i][1]
    s--; f--;
    adjList[s].push(f)
    adjList[f].push(s)
}
let ans = 0;
let min = 3333;
function dfs(s) {
    if (visited[s]) return
    visited[s] = true
    console.log(cost[s])
    min = Math.min(min, cost[s])

}


for (let i of adjList) {
    if (i) {
        dfs(i)
        ans += min
        min = 0
    }
}

console.log(ans);


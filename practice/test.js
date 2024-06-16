let golbCount = 1
const numIslands = (grid) => {
    let count = 0 // the counted islands
    //Go though each cell of the 2d array/grid 
    for (let row = 0; row < grid.length; row++) {
        for (let col = 0; col < grid[row].length; col++) {
            if (grid[row][col] == '0') {
                count++
                explore(row, col, grid)
            }
        }
    }
    return grid
}



// Takes a cell in a grid with a “1” , turns it into a “0” and explores (DFS) any of the left, right, up, down 1’s
function dfs(row, col, grid) {
    //Let's return IF
    // row < 0 OR col < 0 OR row is out of bounds(meaning the row is larger than the number of arrays in the 2d array) OR col is at/out of bounds (meaning the current col is at/over the number of elements a row has.)
    if (row < 0 || col < 0 || row >= grid.length
        || col >= grid[row].length || grid[row][col] != '0') {
        return
    }

    //Otherwise, we should explore it!
    //First let's set the current spot to "0"
    grid[row][col] = golbCount++

    //Possibilites:
    // 1) 1 to the right, left, top, bottom
    //right
    if (col < grid[row].length)
        explore(row, col + 1, grid)
    //Down
    if (row < grid.length)
        explore(row + 1, col, grid)
    //Left
    if (col)
        explore(row, col - 1, grid)
    //Up
    if (row)
        explore(row - 1, col, grid)

}


let grid = [
    ["0", "0", "0", "0", "0"],
    ["0", "0", "0", "0", "0"],
    ["0", "0", "0", "0", "0"],
    ["0", "0", "0", "0", "0"],
    ["0", "0", "0", "0", "0"],
    ["0", "0", "0", "0", "0"]
]

console.log(numIslands(grid));

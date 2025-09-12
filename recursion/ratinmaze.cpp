#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:

     
    bool issafe(int newx, int newy, vector<vector<int>>& maze, vector<vector<bool>>& visited, int n) {
        // Out of bound condition
        if(newx < 0 || newy < 0 || newx > n-1 || newy > n-1) {
            return false;
        }
        // Visited condition
        if(visited[newx][newy] == true) { 
            return false;
        }
        // If the pos is blocked i.e marked as 0
        if(maze[newx][newy] == 0) {
            return false;
        }
        // Valid case
        return true;
    }

    // Added 'output' parameter, fixed function signature, removed extra comma, fixed 'visited' typo
    void solve(vector<vector<int>>& maze, vector<vector<bool>>& visited, int n, vector<string>& ans,
               int srcx, int srcy, int destx, int desty, string output) {
        // Base case
        if(srcx == destx && srcy == desty) {
            ans.push_back(output);
            return;
        }

        // Up
        int newx = srcx - 1;
        int newy = srcy;
        if(issafe(newx, newy, maze, visited, n)) { // Added if condition
            visited[newx][newy] = true; // Fixed typo from 'visted'
            solve(maze, visited, n, ans, newx, newy, destx, desty, output + "U"); // Pass newx, newy
            // Backtracking
            output.pop_back(); // Corrected backtracking logic
            visited[newx][newy] = false;
        }

        // Down
        newx = srcx + 1;
        newy = srcy;
        if(issafe(newx, newy, maze, visited, n)) {
            visited[newx][newy] = true;
            solve(maze, visited, n, ans, newx, newy, destx, desty, output + "D");
            // Backtracking
            output.pop_back(); // Corrected backtracking logic
            visited[newx][newy] = false;
        }

        // Right
        newx = srcx;
        newy = srcy + 1;
        if(issafe(newx, newy, maze, visited, n)) {
            visited[newx][newy] = true;
            solve(maze, visited, n, ans, newx, newy, destx, desty, output + "R");
            // Backtracking
            output.pop_back(); // Corrected backtracking logic
            visited[newx][newy] = false;
        }

        // Left
        newx = srcx;
        newy = srcy - 1;
        if(issafe(newx, newy, maze, visited, n)) {
            visited[newx][newy] = true;
            solve(maze, visited, n, ans, newx, newy, destx, desty, output + "L");
            // Backtracking
            output.pop_back(); // Corrected backtracking logic
            visited[newx][newy] = false;
        }
    }

    vector<string> ratInMaze(vector<vector<int>>& maze, int n) {
       
        vector<string> ans;
        
        vector<vector<bool>> visited(n, vector<bool>(n, 0));

        int srcx = 0;
        int srcy = 0;
        int destx = n - 1;
        int desty = n - 1;
        string output = "";

        // main yha pr galti kr deta hun
        if(maze[0][0] == 0) {
            return ans;
        }

        visited[0][0] = true;

        // function call
        solve(maze, visited, n, ans, srcx, srcy, destx, desty, output);
        return ans;
    }
};

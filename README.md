# Activity-4a-Sorting-II

Task 1: On average, insertion sort does about N^2/4 operations, which proves the time complexity is O(N^2).

Task 2: For N = 5 the worst case scenario is the total amount of operations is the insertion sort if 20.

Task 3: a) The loop from the following function goes through the entire string of length N. Each iteration does a constant-time conpression. 
In the worst case the time complexity is O(N). The best case is still O(N) because even if the first character is X it will still loop through 
the whole thing there would be no early exit. The whole function will run in O(N) in best, worst, and average cases.


b) Improved Code:
    bool containsX(const string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'X') {   
            return true;       
        }
    }
    return false;
}

Video: https://youtu.be/8JLHPEmasng

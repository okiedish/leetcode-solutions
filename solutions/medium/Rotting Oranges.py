// Title: Rotting Oranges
            // Difficulty: Medium
            // Language: Python
            // Link: https://leetcode.com/problems/rotting-oranges/

                    if (0 <= nr < m and 0 <= nc < n
                        and grid[nr][nc] == 1):

                        grid[nr][nc] = 2
                        fresh -= 1
                        q.append((nr, nc))

            minutes += 1

        # Step 3: Check remaining fresh oranges
        if fresh > 0:
            return -1

        return minutes


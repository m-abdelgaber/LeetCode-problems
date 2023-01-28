class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        
        visited = set()
        start_color = image[sr][sc]
        def flood(row, col):
            if( row>= len(image) or row<0 or col>= len(image[0]) or col<0):
                return
            if((row,col) in visited):
                return
            if(image[row][col] != start_color):
                return
            
            visited.add((row,col))

            image[row][col] = color
            flood(row+1,col)
            flood(row,col+1)
            flood(row-1,col)
            flood(row,col-1)
            
        flood(sr,sc)
        return image
            
            
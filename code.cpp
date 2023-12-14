int n=grid.length;
        int m=grid[0].length;
        int count=0;
        boolean foundFresh;
        
        
        while(true)
        {
            boolean found=false;
            foundFresh=false;
            
            for(int i=0; i<grid.length; i++)
            {
                for(int j=0;j<grid[0].length; j++)
                {
                    if(grid[i][j]==1)
                    {
                        foundFresh=true;
                        
                        if(i-1>=0 && grid[i-1][j]==2)
                        grid[i][j]=4;
                        
                        if(i+1<n && grid[i+1][j]==2)
                        grid[i][j]=4;
                        
                        if(j-1>=0 && grid[i][j-1]==2)
                        grid[i][j]=4;
                        
                        if(j+1<m && grid[i][j+1]==2)
                        grid[i][j]=4;
                        
                    }
                }
            }
            if(count==0 && foundFresh==false)
            return 0;
            
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                if(grid[i][j]==4)
                {
                    found=true;
                    grid[i][j]=2;
                }
            }
            
            if(found==false) break;
            
            else count++;
        }
        
        if(foundFresh==true) return -1;
        
        return count;

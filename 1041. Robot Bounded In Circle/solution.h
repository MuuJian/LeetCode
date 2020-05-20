class Solution {
public:
    bool isRobotBounded(string instructions) {
	    int dir = 0; // 方向: 0上   1右   2下   3左
	    int x = 0;   
	    int y = 0;   
	    for(char ch : instructions)
        {
		    if(ch == 'L')
            {
			    if(dir == 0)
				    dir = 3;
			    else
				    dir --;
		    }
		    if(ch == 'R')
            {
			    if(dir == 3)
				    dir = 0;
			    else
				    dir ++;
		    }
		    if(ch == 'G')
            {
			    switch(dir)
                {
			        case 0: y ++; break;
			        case 1: x ++; break;
			        case 2: y --; break;
			        case 3: x --; break;
			    }
		    }
	    }
	    if(x == 0 && y == 0)
		    return true;
	    if(dir != 0)
		    return true;
	
	    return false;
    }
};
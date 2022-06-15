# ATP-World-Map-Loader-c-
Advanced Programming Techniques World map loader written in C++, this takes a input file and loads it correctly into a 2D array for use in the later path finiding sections of the assignment

### Reqirements:
This script will create a 2D array of tiles with each dimesion representing X & Y coordinats, each input locaiton will then store a char value at that position that corisponds to a tile type (see "Loadable Room" Section).

### World Statistics:

During the loading of the file the program will provide the users with some world statistics feedback, such as xWidth and yHeight in tiles as well as the total amount of tiles present in the room, its important to note that rooms must always be a square or rectange with the same width on all y postions.

![WorldLoaded](https://user-images.githubusercontent.com/79836947/173776984-85694b17-5e60-4190-b4cb-da0ece0fd74b.png)

### Loadable Room (World Files)
This is an example of the world files that can be loaded via a text file into the program. 
- "=" represents a wall
- "." represents a empty / open space
- "S" represents the starting position of the robot
- "G" represents the final goal or finish location

```
====================
====================
====================
====================
====================
=S.......===========
========.===========
=......=.===========
==.=.=...===========
=..=..=.============
=.===.=..===========
=..==G==.===========
====================
====================
====================
====================
====================
====================
====================
====================
```


## RMIT University | Academic Integrity Warning


![image](https://user-images.githubusercontent.com/79836947/160737604-273c62fd-1503-4ce6-a292-a351665cc2e1.png#gh-dark-mode-only)
![image](https://user-images.githubusercontent.com/79836947/160738358-eaa88731-2a44-4004-ab9a-3d83a2268742.png#gh-light-mode-only)

Cheating is a serious offense:

> "What happens if you get caught cheating at RMIT? For serious breaches of academic integrity, students can be charged with academic misconduct. Possible penalties > include cancellation of results and expulsion resulting in the cancellation of a student's program."

Academic integrity - RMIT University

### Links:

 [RMIT Academic Integrity Awarness Micro Credential](https://www.rmit.edu.au/study-with-us/levels-of-study/short-courses/academic-integrity-awareness)
 
 [Academic Integrity at RMIT](https://www.rmit.edu.au/students/my-course/assessment-results/academic-integrity)

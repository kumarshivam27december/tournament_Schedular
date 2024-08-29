### IPL Scheduler Project

The IPL Scheduler Project is an application implemented in C programming language designed to automate the scheduling and management of an IPL (Indian Premier League) cricket tournament. The software provides comprehensive functionality for match scheduling, results tracking, and tournament progression.

#### Features

1. **Match Scheduling:**
   - Computes the total number of matches required for the tournament based on the input number of participating teams.
   - Generates a fixture schedule ensuring each team plays against every other team once.
   - Ensures no team plays consecutive matches and maintains a balanced home-away schedule.

2. **Team Match Analysis:**
   - Determines the number of matches each team will play in the tournament.

3. **Net Run Rate Calculation:**
   - Calculates the Net Run Rate (NRR) for each team based on runs scored and overs faced, crucial for tie-breaking and ranking.

4. **Simulation of Matches:**
   - Provides a functionality to simulate match fixtures and display them, aiding in visualization of the tournament structure.

5. **Tournament Progression:**
   - Facilitates entry of results for matches, which are used to update team standings and NRR.

6. **Playoff and Final Rounds:**
   - Accepts the top four teams based on the points table.
   - Manages the playoff structure, including qualifiers, eliminator, and final matches, to determine the tournament winner.

#### Usage Instructions

1. **Compile the Program:**
   - Use a C compiler to compile the source code. For example, using `gcc`, you would run:
     ```sh
     gcc -o ipl_scheduler ipl_scheduler.c
     ```

2. **Run the Executable:**
   - Execute the compiled program:
     ```sh
     ./ipl_scheduler
     ```

3. **Input Details:**
   - Enter the number of teams participating in the tournament when prompted.
   - Provide names of the teams as required.

4. **Match Results Entry:**
   - Follow the interactive prompts to input match results and progress through the tournament stages.

5. **View Outputs:**
   - The program will output the scheduled fixtures, calculate the net run rate for each team, and determine the final winner based on playoff results.

#### Requirements

- **C Compiler:** Ensure you have a C compiler such as `gcc` or `clang` installed to compile the program.

This application provides an automated solution for scheduling and managing an IPL tournament, simplifying the process of creating fixtures and tracking team performances.
# agbalan2-tvitkin2-hfaroo9-aliceg3
Final Project


## Build/Run
Move into the `src` folder, run `make`, then run `./main` for the main program. Follow the instructions given to produce the output image or run the BFS or Floyd–Warshall algorithm. Output images for the full image will be in `src/fdgOutput.png` and outputs for the BFS or shortest-path algorithms will be in `src/subsetGraph.png`.

**If you run into compilation issues where it can't find `*.o` files, run `make clean` then rerun the `make` command.**
To test, move into the `src` folder and run `make test`. Afterwards, run `./test`. 

To see the performance differences between the parallel and serial versions of the force directed graph output, first build the program by running `make` in `src`, then run the `graph.py` file by running `python graph.py`, then enter the amount of iterations to run for (recommended: 5 or 10) iterations. An output image graphing the runtimes of the entered amount of iterations of each version will then be outputted as `compare.png`.

## Final Project Video
Link: https://www.youtube.com/watch?v=j2JvqSQBrVg

## Sample Output
<p align="center">
  <img width="750" src="src/imgs/fdgOutput-readme.png">
</p>

### Video
To view a video of the progress of the force directed graph after every 10 iterations (up to the default 1000), [click here](https://drive.google.com/file/d/1mLWBelSP-glvxhf6Xs7jIjDdZR-e5StA/view?usp=sharing
).

## Serial vs Parallel
We noticed that there was an opportunity to parallelize some of the code for the force directed algorithm, specifically figuring out the forces needed (attractive, spring, central) every iteration for each vertex. We decided to implement both a parallel and serial version of this algorithm, and as seen in the graph below, we saw approximately a 34% speedup using the parallel implementation.

<p align="center">
  <img src="src/imgs/compare.png">
</p>
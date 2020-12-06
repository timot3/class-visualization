#include <vector>
#include <string>
#include "fileIO.h"
#include "fdgOutput.h"
#include "classes.h"
#include "../structures/PNG.h"

int main() {
//   std::vector<std::vector<std::string>> csvVect = csvToVector("Data/uiuc-prerequisites.csv");
//   printVect(csvVect);

  Classes test;

  Graph g = test.getGraph();

  fdgOutput newOut(g, 5);
  newOut.printLocations();
  cs225::PNG * img = newOut.createOutputImage();
  img->writeToFile("testOutput"+ string(".png"));
}

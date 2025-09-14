#include <iostream>
#include <string>
#include <vector>
#include "Bridges.h"
#include "DataSource.h"
#include "BSTElement.h"
#include <queue>
using namespace std;
using namespace bridges;

/*
  Step 1: Get the Bridges USER ID and API KEY for your program
          by creating an account and signing up (You can use any
          email): https://bridges-cs.herokuapp.com/signup

  Step 2: User ID (Username) and Key (API Sha1 Key) can be
          found under Profile on the top left
*/

int main(int argc, char **argv)
{

    // Step 3: Test if the following print statement is being run
    cout << "Bridges Test: I can see this is getting printed\n";

    // Step 4: Add your User ID and API Key as secrets on Replit

    /* Step 5: Print your User ID and API Key from secrets to the console
       to test if secrets were properly loaded
    */

    /*
     Step 6: Create a Bridges object by uncommenting the next line
     and inserting the values from steps 1 and 2
    */
    Bridges bridges(1, "SECRET_HOLDING_USER_ID", "SECRET_HOLDING_API_KEY");

    /*
       Step 7: Import your selected data into a vector<> by
               referring to C++ examples in the Bridges datasets documentation:
               https://bridgesuncc.github.io/datasets.html
    */

    /*
       Step 8: Open the file "insertIntoBST.txt" and copy the provided
               function for inserting data into a BST.
               Paste the function into this file above your "main" function.
    */

    /*
       Step 9: Use the insertion function from the previous step to build a BST with
                100 data points. Refer to the Bridges documentation:
               https://bridgesuncc.github.io/datasets.html
    */


    /*
       Step 10: Visualize this tree by referring to the Bridges BST documentation:
               https://bridgesuncc.github.io/tutorials/BinarySearchTree.html
    */


    /*
       Step 11: Color each level of the tree using a level-order traversal.
               Every node in a given level should have the same color.
               Do not use the same color in two consecutive levels. A starter
               queue has been provided in case you wish to use an iterative
               implementation of BFS.

               Refer to the Bridges BST Styling documentation:
               https://bridgesuncc.github.io/tutorials/BinarySearchTree.html

    */

    queue<BSTElement<string, string> *> q;

    /*
      Step 12: Visualize the updated tree. Comment out or remove the old
               visualization code from Step 10
    */

    return 0;
}

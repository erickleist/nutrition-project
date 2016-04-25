// CS 2A Lab 3 Framework

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// main client --------------------------------------------------------
int main()
{
   // food #1 constants
   const string FOOD_1_NAME = "Rolled Oats";
   const  int FOOD_1_CALORIES_P100G = 375;  // in calories
   const  double FOOD_1_PROTEIN_P100G = 14.29;   // in grams
   const  double FOOD_1_CARBOHYDRATES_P100G = 67.86;   // in grams
   const  double FOOD_1_TOTAL_FAT_P100G = 7.14;   // in grams
   const  double FOOD_1_SUGARS_P100G = 0.00;   // in grams

   // food #2 constants
   const string FOOD_2_NAME = "Honey";
   const  int FOOD_2_CALORIES_P100G = 286;  // in calories
   const  double FOOD_2_PROTEIN_P100G = 0.00;   // in grams
   const  double FOOD_2_CARBOHYDRATES_P100G = 80.95;   // in grams
   const  double FOOD_2_TOTAL_FAT_P100G = 0.00;   // in grams
   const  double FOOD_2_SUGARS_P100G = 80.95;   // in grams

   // food #3 constants
   const string FOOD_3_NAME = "Sunflower Seeds";
   const  int FOOD_3_CALORIES_P100G = 571;  // in calories
   const  double FOOD_3_PROTEIN_P100G = 25.0;   // in grams
   const  double FOOD_3_CARBOHYDRATES_P100G = 21.43;   // in grams
   const  double FOOD_3_TOTAL_FAT_P100G = 50.0;   // in grams
   const  double FOOD_3_SUGARS_P100G = 0.00;   // in grams

   // food #4 constants
   const string FOOD_4_NAME = "Pumpkin Seeds";
   const  int FOOD_4_CALORIES_P100G = 518;  // in calories
   const  double FOOD_4_PROTEIN_P100G = 32.14;   // in grams
   const  double FOOD_4_CARBOHYDRATES_P100G = 17.86;   // in grams
   const  double FOOD_4_TOTAL_FAT_P100G = 42.86;   // in grams
   const  double FOOD_4_SUGARS_P100G = 0.00;   // in grams

   // food #5 constants
   const string FOOD_5_NAME = "Goji Berries";
   const  int FOOD_5_CALORIES_P100G = 400;  // in calories
   const  double FOOD_5_PROTEIN_P100G = 14.29;   // in grams
   const  double FOOD_5_CARBOHYDRATES_P100G = 67.86;   // in grams
   const  double FOOD_5_TOTAL_FAT_P100G = 3.57;   // in grams
   const  double FOOD_5_SUGARS_P100G = 53.57;   // in grams

   // food #6 constants
   const string FOOD_6_NAME = "Chocolate chips";
   const  int FOOD_6_CALORIES_P100G = 533;  // in calories
   const  double FOOD_6_PROTEIN_P100G = 6.67;   // in grams
   const  double FOOD_6_CARBOHYDRATES_P100G = 66.67;   // in grams
   const  double FOOD_6_TOTAL_FAT_P100G = 26.67;   // in grams
   const  double FOOD_6_SUGARS_P100G = 60.00;   // in grams

   // input validation constants
   const  int INGREDIENT_AMT_LOW = 0;
   const  int INGREDIENT_AMT_HIGH = 1500;
   const  int SERVING_SIZE_LOW = 1;
   const  int SERVING_SIZE_HIGH = 15;

   const  string INDENT = "   ";

   string recipeName, userInputStr, servingSizeStr;
   int userInputInt, servingSizeInt;
   double totalCals, totalProtein, totalCarbs, totalFat, totalSugars;

   // initialize accumulator variables
   totalCals =  0;
   totalProtein  = 0.;
   totalCarbs  = 0.;
   totalFat  = 0.;
   totalSugars  = 0.;

   // print menu
   cout << "---------- List of Possible Ingredients ---------" << endl;
   cout << INDENT << "Food #1: " << FOOD_1_NAME << endl;
   cout << INDENT << "Food #2: " << FOOD_2_NAME << endl;
   cout << INDENT << "Food #3: " << FOOD_3_NAME << endl;
   cout << INDENT << "Food #4: " << FOOD_4_NAME << endl;
   cout << INDENT << "Food #5: " << FOOD_5_NAME << endl;
   cout << INDENT << "Food #6: " << FOOD_6_NAME << endl << endl;

   // name and number of servings for recipe
   cout << "What are you calling this recipe? ";
   getline(cin, recipeName);
   cout << "How many servings will this recipe make?";
   getline(cin, servingSizeStr);
   istringstream(servingSizeStr) >> servingSizeInt;
   if (servingSizeInt < SERVING_SIZE_LOW ||
               servingSizeInt > SERVING_SIZE_HIGH)
         {
            cout << "ERROR: Invalid Input. Must be between 1 and 15 servings. "
                  "Try again.\n\n";
            return 1;
         }

   // food #1 ---------------------------------------------------------
      cout << "How many grams of " << FOOD_1_NAME << "? ";
      getline(cin, userInputStr);
      istringstream(userInputStr) >> userInputInt;
      if (userInputInt < INGREDIENT_AMT_LOW ||
            userInputInt > INGREDIENT_AMT_HIGH)
      {
         cout << "ERROR: Invalid Input. Must be between 0 and 1500 grams. "
               "Try again.\n\n";
         return 1;
      }



   // update accumulators
   totalCals += userInputInt * (FOOD_1_CALORIES_P100G / 100.);
   totalProtein  += userInputInt * (FOOD_1_PROTEIN_P100G / 100.);
   totalCarbs  += userInputInt * (FOOD_1_CARBOHYDRATES_P100G / 100.);
   totalFat  += userInputInt * (FOOD_1_TOTAL_FAT_P100G / 100.);
   totalSugars  += userInputInt * (FOOD_1_SUGARS_P100G / 100.);

   // food #2 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_2_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   if (userInputInt < INGREDIENT_AMT_LOW ||
               userInputInt > INGREDIENT_AMT_HIGH)
         {
            cout << "ERROR: Invalid Input. Must be between 0 and 1500 grams. "
                  "Try again.\n\n";
            return 1;
         }

   // update accumulators
   totalCals += userInputInt * (FOOD_2_CALORIES_P100G / 100.);
   totalProtein  += userInputInt * (FOOD_2_PROTEIN_P100G / 100.);
   totalCarbs  += userInputInt * (FOOD_2_CARBOHYDRATES_P100G / 100.);
   totalFat  += userInputInt * (FOOD_2_TOTAL_FAT_P100G / 100.);
   totalSugars  += userInputInt * (FOOD_2_SUGARS_P100G / 100.);

   // food #3 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_3_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   if (userInputInt < INGREDIENT_AMT_LOW ||
               userInputInt > INGREDIENT_AMT_HIGH)
         {
            cout << "ERROR: Invalid Input. Must be between 0 and 1500 grams. "
                  "Try again.\n\n";
            return 1;
         }

   // update accumulators
   totalCals += userInputInt * (FOOD_3_CALORIES_P100G / 100.);
   totalProtein  += userInputInt * (FOOD_3_PROTEIN_P100G / 100.);
   totalCarbs  += userInputInt * (FOOD_3_CARBOHYDRATES_P100G / 100.);
   totalFat  += userInputInt * (FOOD_3_TOTAL_FAT_P100G / 100.);
   totalSugars  += userInputInt * (FOOD_3_SUGARS_P100G / 100.);

   // food #4 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_4_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   if (userInputInt < INGREDIENT_AMT_LOW ||
               userInputInt > INGREDIENT_AMT_HIGH)
         {
            cout << "ERROR: Invalid Input. Must be between 0 and 1500 grams. "
                  "Try again.\n\n";
            return 1;
         }

   // update accumulators
   totalCals += userInputInt * (FOOD_4_CALORIES_P100G / 100.);
   totalProtein  += userInputInt * (FOOD_4_PROTEIN_P100G / 100.);
   totalCarbs  += userInputInt * (FOOD_4_CARBOHYDRATES_P100G / 100.);
   totalFat  += userInputInt * (FOOD_4_TOTAL_FAT_P100G / 100.);
   totalSugars  += userInputInt * (FOOD_4_SUGARS_P100G / 100.);

   // food #5 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_5_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   if (userInputInt < INGREDIENT_AMT_LOW ||
               userInputInt > INGREDIENT_AMT_HIGH)
         {
            cout << "ERROR: Invalid Input. Must be between 0 and 1500 grams. "
                  "Try again.\n\n";
            return 1;
         }

   // update accumulators
   totalCals += userInputInt * (FOOD_5_CALORIES_P100G / 100.);
   totalProtein  += userInputInt * (FOOD_5_PROTEIN_P100G / 100.);
   totalCarbs  += userInputInt * (FOOD_5_CARBOHYDRATES_P100G / 100.);
   totalFat  += userInputInt * (FOOD_5_TOTAL_FAT_P100G / 100.);
   totalSugars  += userInputInt * (FOOD_5_SUGARS_P100G / 100.);

   // food #6 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_6_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   if (userInputInt < INGREDIENT_AMT_LOW ||
               userInputInt > INGREDIENT_AMT_HIGH)
         {
            cout << "ERROR: Invalid Input. Must be between 0 and 1500 grams. "
                  "Try again.\n\n";
            return 1;
         }

   // update accumulators
   totalCals += userInputInt * (FOOD_6_CALORIES_P100G / 100.);
   totalProtein  += userInputInt * (FOOD_6_PROTEIN_P100G / 100.);
   totalCarbs  += userInputInt * (FOOD_6_CARBOHYDRATES_P100G / 100.);
   totalFat  += userInputInt * (FOOD_6_TOTAL_FAT_P100G / 100.);
   totalSugars  += userInputInt * (FOOD_6_SUGARS_P100G / 100.);

   // convert accumulators to per serving amount
   totalCals /= servingSizeInt;
   totalProtein /= servingSizeInt;
   totalCarbs /= servingSizeInt;
   totalFat /= servingSizeInt;
   totalSugars /= servingSizeInt;

   // set decimal precision for output
   cout.setf(ios::fixed);
   cout.precision(2);

   // report results --------------------------------------------------
   cout << "\nPer Serving Nutritional Data for " << recipeName
         << "------------" << endl;
   cout << INDENT << "Calories: " << totalCals << endl;
   cout << INDENT << "Protein: " << totalProtein << " grams\n";
   cout << INDENT << "Carbohydrates: " << totalCarbs << " grams\n";
   cout << INDENT << "Total Fat: " << totalFat << " grams\n";
   cout << INDENT << "Sugars: " << totalSugars << " grams\n";

   return 0;
}

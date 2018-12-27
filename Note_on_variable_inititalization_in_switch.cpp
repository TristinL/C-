// Interesting note on initializing variables inside of switch statements


//Variable declaration and initialization inside case statements

//You can declare, but not initialize, variables inside the case statements:
//	
//switch (x)
//{
//    case 1:
//        int y; // okay, declaration is allowed
//        y = 4; // okay, this is an assignment
//        break;
// 
//    case 2:
//        y = 5; // okay, y was declared above, so we can use it here too
//        break;
// 
//    case 3:
//        int z = 4; // illegal, you can't initialize new variables in the case statements
//        break;
// 
//    default:
//        std::cout << "default case" << std::endl;
//        break;
//}
//
//Note that although variable y was defined in case 1, it was used in case 2 as well. All cases are considered part of the same scope, so a declaration in one case can be used in subsequent cases.
//
//This may seem a bit counter-intuitive, so let’s examine why. When you define a local variable like “int y;”, 
//the variable isn’t created at that point -- it’s actually created at the start of the block it’s declared in.
//However, it is not visible (in scope) until the point of declaration. The declaration statement doesn’t need to execute -- it just tells the compiler that the variable can be used past that point.
//So with that in mind, it’s a little less weird that a variable declared in one case statement can be used in another cases statement, even if the case statement that declares the variable is never executed.
//
//However, initialization of variables directly underneath a case label is disallowed and will cause a compile error.
//This is because initializing a variable does require execution, and the case statement containing the initialization may not be executed!
//
//If a case needs to define and/or initialize a new variable, best practice is to do so inside a block underneath the case statement:
//
//	
//switch (1)
//{
//    case 1:
//    { // note addition of block here
//        int x = 4; // okay, variables can be initialized inside a block inside a case
//        std::cout << x;
//        break;
//    }
//    default:
//        std::cout << "default case" << std::endl;
//        break;
//}
//
//Rule: If defining variables used in a case statement, do so in a block inside the case (or before the switch if appropriate)
